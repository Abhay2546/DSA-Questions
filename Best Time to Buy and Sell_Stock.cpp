class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0, max_profit = 0 ,  min_price = prices[0], n = prices.size();
        // int maxi = INT_MIN;
        while(i < n){
           if(prices[i] < min_price) {
               min_price = prices[i];
           }
           else{
              
        //     //    mxa_profit = max(max_profit,)
        //     int ans = prices[i] - min_price;
        //     if(ans < maxi)
        //         maxi = ans;
        //    }
        
        max_profit = max( max_profit, prices[i] - min_price );
        }
        i++;
       
        }
    return max_profit;
    }
};