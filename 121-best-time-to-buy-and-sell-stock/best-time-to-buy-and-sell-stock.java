class Solution {
    public int maxProfit(int[] prices) {
        
        int min = prices[0]; // Track lowest buy price
        int profit = 0;     // Track maximum profit
        for (int i = 0; i < prices.length; i++) {
            if (prices[i] < min) {
                min = prices[i];         // Update lowest buying price if we find a lower price

            }
            int currentProfit = prices[i] - min;
            profit = Math.max(profit, currentProfit);
        }
        return profit;
    }
} // TC: O(n), SC: O(1)

/*
Line 4: Initialize the minimum price to the first price in the array.
Line 5: Initialize the maximum profit to zero. as no transactions have been made yet.
Line 6: Iterate through the array (prices.length). to find potential buying and selling opportunities.
Line 7: Check if the current price is less than the recorded minimum price
Line 8: Update the minimum price. if condition is true.
Line 9: Calculate the current profit (current price - minimum price) and 
          update the maximum profit if it's higher.
Line 10: After completing the loop, return the maximum profit.
------------------------------------
 Approach:
 1. Track two values:
   - minPrice: Lowest price seen so far (best buy price)
   - maxProfit: Highest profit possible (best sell price - best buy price)
 
 2. For each price in array:
   - Update minPrice if current price is lower (better buy opportunity)
   - Calculate profit if we sell at current price
   - Update maxProfit if current profit is higher
 -------------------------------------
Time Complexity: O(n), as we traverse the array once.
Space Complexity: O(1), since only variables are used for tracking values. as no additional space is used

*/

 