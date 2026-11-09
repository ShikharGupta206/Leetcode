class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]+=1;
        }
        int another=0;
       
        for(int i=0;i<mp[0];i++){
            nums[another++]=0;
            
        }
       
        for(int i=0;i<mp[1];i++){
            nums[another++]=1;
            
        }
        for(int i=0;i<mp[2];i++){
            nums[another++]=2;
        }

        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
    }
};