class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int low=0,high=1;
        int maxprofit=0;
        int profit=0;
        
        while(high<n){
            if(prices[high]>prices[low]){
               profit = prices[high]-prices[low];
               maxprofit=max(profit,maxprofit);
            }
            else{
                low=high;//to finnd low because high is not greater
            }
            high++;
        } 
        return maxprofit;   
    }
};
