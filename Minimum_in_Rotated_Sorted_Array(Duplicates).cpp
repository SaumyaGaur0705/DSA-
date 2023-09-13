class Solution {
public:
    int pivot(vector<int> arr){
    int n=arr.size();
    int start=0;
    int end=n-1;
    int mid;
    while(start<end){
        while(start<end && arr[start]==arr[start+1]){
            start++;}
        while(start<end && arr[end]==arr[end-1]){
            end--;}
        int mid=start+(end-start)/2;
        if(arr[mid]>=arr[0]){
            start=mid+1;}
        else{
            end=mid; }
        mid=start+(end-start)/2;
         if(arr[mid]>=arr[0]){
            mid=0;}
    }
 return mid; }
    int findMin(vector<int>& nums) {
        int pivotele=pivot(nums);
        cout<<pivotele;
        if(nums[pivotele]<=nums[0]){
            return nums[pivotele];
        }
        else{
            return nums[0];
        } }
};
