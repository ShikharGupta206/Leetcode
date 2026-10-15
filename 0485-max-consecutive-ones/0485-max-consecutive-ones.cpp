class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCnt = 0;
        int curCnt = 0;
        for(int n : nums){
            if(n == 1)
                curCnt++;
            else{
                maxCnt = max(maxCnt, curCnt);
                curCnt = 0;
            }
        }
        return maxCnt>curCnt ? maxCnt : curCnt;
    }
};