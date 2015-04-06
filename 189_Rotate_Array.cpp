class Solution {
public:
    void rotate(int nums[], int n, int k) {
        int bknum[n];
        for(int j = 0 ;j < n ; j++){//copy array
        	bknum[j] = nums[j];
		}
        for(int i = 0 ; i < n ; i++){
            nums[(i+k)%n]=bknum[i];
        }
    }
};