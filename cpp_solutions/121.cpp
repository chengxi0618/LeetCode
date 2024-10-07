class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int profit = 0;
//         int profit_buy = -1;
//         int lowest_buy = -1;
//         for (int i = 0; i < prices.size(); i++) {
//             if (lowest_buy == -1) {
//                 if (profit_buy == -1) {
//                     lowest_buy = prices[i];
//                 } else if (prices[i] < profit_buy) {
//                     lowest_buy = prices[i];
//                 }
//             } else {
//                 if (prices[i] < lowest_buy) {
//                     lowest_buy = prices[i];
//                 }
//             }

//             if (lowest_buy != -1 && prices[i] > lowest_buy) {
//                 if (profit_buy == -1) {
//                     profit = prices[i] - lowest_buy;
//                     profit_buy = lowest_buy;
//                     lowest_buy = -1;
//                 } else {
//                     if (prices[i] - profit_buy > profit) {
//                         profit = prices[i] - profit_buy;    
//                     }                
//                     if (prices[i] - lowest_buy > profit) {
//                         profit = prices[i] - lowest_buy;
//                         profit_buy = lowest_buy;
//                         lowest_buy = -1;
//                     }
//                 }
//             } else if (profit_buy != -1 && prices[i] - profit_buy > profit) {
//                 profit= prices[i] - profit_buy;
//             }
//         }
//         return profit;
//     }
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0;
        int n = prices.size();
        int hp = prices[n-1];

        for (int i = n-1; i >= 0; i--) {
            int e = prices[i];
            hp = max(e, hp);
            if (hp - e > mp) {
                mp = max(hp- e, mp);
            }
        }
        
        return mp;
    }
};