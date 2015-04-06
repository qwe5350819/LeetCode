class Solution {
public:
    int maxProfit(vector<int> &prices) {
	        if(prices.size()>1){
	        	try{
		            //find highest point and the lowest point befor the highest one
		            vector<int>::iterator prevIter = prices.begin() ;
		            int min = *prevIter;
		            int max = min;
		            bool goup = false;
		            int maxProfit = 0;
		            int profit;
		            for(vector<int>::iterator i = prices.begin() ; i != prices.end() ; i++){
		            	if(*i > *prevIter){//if the price goes up
		            		if (max < *i)
		            		max = *i;
		            		profit = max - min;
		            		if(profit>maxProfit)
		            		maxProfit = profit;
						}else{// if price goes down
							if(min > *i){//if find a new min price, reset max price
								min = *i;
								max = min;
							}
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