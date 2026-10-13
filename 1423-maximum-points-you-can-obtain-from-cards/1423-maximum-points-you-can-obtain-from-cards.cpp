class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int l=0;
        int r=0;
        int sum=0;
        int ans=INT_MAX;
        int totalpts=0;
        for(int x:cardPoints){
            totalpts+=x;
        }
        while(r<n){
            sum+=cardPoints[r];
            if(r-l+1>(n-k)){
                sum-=cardPoints[l];
                l++;
            }
            if(r-l+1==(n-k)){
                ans=min(ans,sum);
            }
            r++;
        }
        return totalpts-ans;
    }
};