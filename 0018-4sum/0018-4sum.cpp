class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            for(int k=n-1;k>i;k--){
            if(i>0 && nums[i]==nums[i-1]) continue;
            if(k<n-1 && nums[k]==nums[k+1]) continue;
            int j=i+1;
            int l=k-1;
            while(j<l){
                long long sum=0LL+nums[i]+nums[j]+nums[k]+nums[l];
                if(sum>target){
                    l--;
                }
                else if(sum<target){
                    j++;
                }
                else{
                    vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    j++;
                    l--;
                    while(j<l && nums[j]==nums[j-1]) j++;
                    while(j<l && nums[l]==nums[l+1]) l--;
                }
            }
        }
        }
        return ans;
    }
};