class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int currentcount=0;
        int smallest=INT_MIN;
        int longest=1;
        int n=nums.size();
        if(n==0){
            return 0;
        }
        for(int i=0;i<n;i++){
            if(nums[i]-1==smallest){
                currentcount+=1;
                smallest=nums[i];
            }
            else if(smallest!=nums[i]){
                currentcount=1;
                smallest=nums[i];
            }
        longest=max(longest,currentcount);
        }
        return longest;
        
    }
};