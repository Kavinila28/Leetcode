class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX; // Track the lowest price seen so far
        int maxProfit = 0;      // Track the maximum profit possible
        
        for (int price : prices) {
            // If we find a lower price, update our buying price
            if (price < minPrice) {
                minPrice = price;
            } 
            // Otherwise, calculate the profit if we sell today and update maxProfit if it's higher
            else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice;
            }
        }
        
        return maxProfit;
    }
};