class Solution {
public:
	
    int majorityElement(vector<int> &num) {
    	int siz = num.size();
    	int halfsiz = siz/2;
    	bool odd = true;
    	if(siz%2==0)
    		odd = false;
    		
    	std::map<int,int> content_count;
    	vector<int>::iterator ibegin = num.begin();
    	vector<int>::iterator iend = num.end();
    	if(odd){
	        for(vector<int>::iterator c = ibegin;c!= iend ; c++){
	        	content_count[*c]++;
				if(content_count[*c]>halfsiz){
	        		return *c;
				}
			}
        		
		}
		else {//even
			for(vector<int>::iterator c = ibegin;c!= iend ; c++){
	        	content_count[*c]++;
				if(content_count[*c]>=halfsiz){
	        		return *c;
				}
			}
		}
		return 0;
    }
};
