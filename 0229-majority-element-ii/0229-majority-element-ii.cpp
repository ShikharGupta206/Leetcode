class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int k=floor(n/3);
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<int> ans;
        for(auto it:mp){
            if(it.second>k){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};