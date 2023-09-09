class Solution {
public:
int pivot(vector<int> arr){
        int n=arr.size();
        int start=0;
        int end=n-1;
        int mid=start+(end-start)/2;
        while(start<end){
            if(arr[mid]>=arr[0]){
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid=start+(end-start)/2;
        }
        if(arr[mid]>arr[0]){
            mid=0;
        }
        return mid;
    }

int  binarysearch(vector<int>& nums, int start, int end, int target)
    {
        int mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                return mid;
            }                                                                                 
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int result;
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
