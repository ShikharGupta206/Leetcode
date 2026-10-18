class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       return find(nums,k)-find(nums,k-1);
    }

    int find(vector<int> nums,int k){
         int l=0;
        int r=0;
        int n=nums.size();
        int count=0;
        int sum=0;
        vector<int> arr;
        if(k<0) return 0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                arr.emplace_back(0);
            }
            else{
                arr.emplace_back(1);
            }
        }
        while(r<n){
            sum+=arr[r];
            
            while(sum>k){
                sum-=arr[l];
                l++;
            }
            count+=(r-l+1);
            r++;
        }
        return count;
    }
};