class Solution {
public:
    int findMin(vector<int> &num) {
    	int siz = num.size();
    	if(siz>1)
        	return returnMin(num.begin(), --num.end());
        if(siz==0)
        	return -1;
        return *(num.begin());
    }
    
    int returnMin(vector<int>::iterator ibegin,vector<int>::iterator iend){
    	//end if there's no rotated array
    	if(*iend-*ibegin==0)//same iterator
    		return *ibegin;
    	if(iend-ibegin==*iend-*ibegin){// no rotated array
    		return *ibegin;
		}
		if(iend-ibegin==1){//2 near iterator
			if(*iend<*ibegin)
			return *iend;
			return *ibegin;
		}
		if(iend-ibegin==2){
			int min = *ibegin;
			++iend;
			for(ibegin ; ibegin!= iend ; ibegin++){
				if(min>*ibegin)
				min=*ibegin;
			}
			return min;
		}
		
		 
    	//there's rotated array
    	int offset = (iend-ibegin);	
		offset /= 2;
    	vector<int>::iterator mid = ibegin+offset;
    	int leftmin = returnMin(ibegin,mid);
    	mid++;
    	int rightmin = returnMin(mid,iend);
    	
    	
    	//return the smaller
    	if(leftmin<rightmin){
    		return leftmin;
		}
		
		return rightmin;
	}
};