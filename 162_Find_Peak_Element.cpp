
class Solution {
public:
    int findPeakElement(const vector<int> &num) {
    	int siz = num.size();
    	vector<int>::const_iterator  i1 = num.begin(),i2 = num.end() ;
    	i2--;
		vector<int>::const_iterator iend = i1,ibegin= i2; 
		int max=*i1, loc=0;
        for(i1,i2 ; i1<=i2 ; i1++,i2--){
        	if(max<*i1){
        		max=*i1;
        		loc = i1-ibegin-1+siz;
			}
        	if(max<*i2){
        		max=*i2;
        		loc = i2-ibegin-1+siz;
			}
		}
		
		return loc;
    }
};