class Solution {
public:
    int searchInsert(int A[], int n, int target) {
    	if(n>0){
	        if(A[0]>=target)
	       		return 0;    		
	        if(A[n-1]<target)
	        	return n;
	       	if(A[n-1]==target)
	       		return n-1;
	        int cursor = n/2 , move = n/4;
	        while(true){
		 		if(A[cursor]==target){
		 			return cursor;
				}
				
				if(A[cursor]<target){
					if(A[cursor+1] >target)
					return cursor+1;
					cursor += move;
					move = move/2;
					if(move==0)
						move=1;
				}
				 
				if(A[cursor]>target){
					if(A[cursor-1]<target)
					return cursor;
					cursor -= move;
					move = move/2;
					if(move==0)
						move=1;
				}
			}
		}
    }
};