class Solution {
public:

    int isAllNeg(int A[] , int n){
    	int i = 0 ,max = A[n-1];
    	for(i = 0 ; i < n ; i++){
    		if(max<A[i])
    			max=A[i];
		}
    	return max;
	}	
	
    int maxSubArray(int A[], int n) {

    	int i = isAllNeg(A,n) ; 
	   	if(i<0){
    		return i;
		}
    	int max_for_now = 0;
    	int current_sum = 0;
    	if(n>0){
		current_sum = 0;
		max_for_now = A[0];
	    	for(i = 0 ; i < n ; i++){
			if(current_sum<0)
				current_sum = 0;
			
			current_sum += A[i];	

			if(max_for_now < current_sum)
				max_for_now = current_sum;					
			}
		}
    	return max_for_now;
    }
    

};