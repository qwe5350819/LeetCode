class Solution {
public:
    int maxProfit(vector<int> &prices) {
	        if(prices.size()>1){
	        	try{
		            //find highest point and the lowest point befor the highest one
		            vector<int>::iterator prevIter = prices.begin() ;
		            int maxProfit = 0;
		            for(vector<int>::iterator i = prices.begin() ; i != prices.end() ; i++){
		            	if(*i > *prevIter){//if the price goes up
		            		maxProfit += *i - *prevIter;
//		            		cout<<*i<<"profit is now "<<maxProfit<<endl;
						}
						prevIter = i;
					}
					return maxProfit;
	            }catch(...){
	            	return 0;
				}
	        }
	        return 0;
	}
    
};