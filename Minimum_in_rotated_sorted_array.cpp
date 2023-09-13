class Solution {
public:
    int pivot(vector<int> arr){
    int n=arr.size();
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[0]<=arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    if(arr[mid]>=arr[0]){
        mid=0;
    }
    return mid;
    }
    int findMin(vector<int>& nums) {
        int pivotele=pivot(nums);
        int start=0;
        cout<<pivotele;
        if(nums[pivotele]<=nums[0]){
            return nums[pivotele];
        }
        return 0;
    }
};
