class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        //Brute Force solution
      /*  for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
             if(nums[i]==nums[j]){
                 count++;
             }
            }
        }
        return count; */
        //Optimised Soltuion
        unordered_map<int,int> mp;
        for(auto &val:nums)
        {
            mp[val]++;
        }
        for(auto i:mp)
        {
            count+=i.second*(i.second-1)/2; //nc2 combinations possible
        }
        return count;
    }
};
