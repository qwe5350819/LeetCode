class Solution {
public:
    int reverse(int x) {
    	//-2,147,483,648 ~ 2,147,483,647.
    	int ans=0;
        while(true){
        	ans += x%10;
        	x -= (x%10);
        	x = x/10;
        	if(x==0)
        		break;
        		
        	if(x>0&&ans>2147483648/10)
        		return 0;
        	if(x<0&&ans<-2147483648/10)
        		return 0;
        	ans *=10;
		}
		if(x<0 && ans>-2147483648)
			return -ans;
		return ans;
    }
};