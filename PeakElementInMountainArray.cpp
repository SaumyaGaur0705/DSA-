class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0;
        int end=n-1;
        int mid=start+(end-start)/2;
        while(start<end)//while loop runs till start<end since below we are comparing arr[mid+1] with arr[mid] which won't be possible when start=end=mid that is only when one element is left hence no arr[mid+1] will be there so we are ending loop before that
                {
            if(arr[mid+1]>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid=start+(end-start)/2;
        }
        return mid;
    }
};
