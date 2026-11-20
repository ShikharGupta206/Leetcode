class Solution {
public:
    void merge(vector<int>& arr, int left, int mid, int right) {
        vector<int> leftPart;
        vector<int> rightPart;

       
        for (int index = left; index <= mid; index++) {
            leftPart.push_back(arr[index]);
        }

       
        for (int index = mid + 1; index <= right; index++) {
            rightPart.push_back(arr[index]);
        }

        int leftIndex = 0;
        int rightIndex = 0;
        int writeIndex = left;

       
        while (leftIndex < leftPart.size() && rightIndex < rightPart.size()) {
            
            if (leftPart[leftIndex] <= rightPart[rightIndex]) {
                arr[writeIndex] = leftPart[leftIndex];
                leftIndex++;
            } else {
                arr[writeIndex] = rightPart[rightIndex];
                rightIndex++;
            }
            writeIndex++;
        }

       
        while (leftIndex < leftPart.size()) {
            arr[writeIndex] = leftPart[leftIndex];
            leftIndex++;
            writeIndex++;
        }

       
        while (rightIndex < rightPart.size()) {
            arr[writeIndex] = rightPart[rightIndex];
            rightIndex++;
            writeIndex++;
        }
    }
    int mergeSortHelper(vector<int>& arr, int left, int right) {
        long long int count=0;
        if (left >= right) {
            return 0;
        }

        int mid = left + (right - left) / 2;

     
        count+=mergeSortHelper(arr, left, mid);

       
        count+=mergeSortHelper(arr, mid + 1, right);
        count+=ans(arr,left,mid,right);

  
        merge(arr, left, mid, right);
        return count;
    }
    int ans(vector<int>& arr, int left, int mid, int right){
        long long int count=0;
        int j=mid+1;
        for(int i=left;i<=mid;i++){
        while(j<=right && arr[i]>2LL*arr[j]) j++;
        count+=(j-mid-1);
        }
        return count;

    }
    int reversePairs(vector<int>& nums) {
        return mergeSortHelper(nums,0,nums.size()-1);
        
    }
};

    