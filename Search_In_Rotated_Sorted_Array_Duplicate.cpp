class Solution {
public:
    int pivot(vector<int>& nums)
    {
        int n=nums.size();
        int start=0;
        int end=n-1;
        
        while (start < end && nums[start] == nums[start + 1]) {
            start++;
        }

        while (start< end && nums[end] == nums[end - 1]) {
            end--;
        }
        int mid=start+(end-start)/2;
        while(start<end){
        if(nums[mid]>=nums[0])
        {
            start=mid+1;
        }
        else{
            end=mid;
        }
         mid=start+(end-start)/2;
        }
        return mid;
    }

    bool binarysearch(vector<int>& nums, int start, int end, int target)
    {
        int mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                return true;
            }                                                                                 
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        bool result;
        int start,end;
        int pivotele=pivot(nums);
        cout<<pivotele;
        
        if(target>=nums[pivotele] && target<=nums[n-1]){
          
         result= binarysearch(nums,pivotele,n-1,target);
        }
        else{
           result= binarysearch(nums,0,pivotele-1,target);
        }
        return result;
    }
};
