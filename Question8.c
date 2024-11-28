/*
You are given an array of prices where prices[i] is the price of a given stock on an ith day. You
want to maximize your profit by choosing a single day to buy one stock and choosing a
different day in the future to sell that stock. Return the maximum profit you can achieve from
this transaction. If you cannot achieve any profit, return 0

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
*/

#include <stdio.h>
int main() {
    int prices[] = {7, 1, 5, 3, 6, 4}; 
    int n = sizeof(prices) / sizeof(prices[0]); 
    int max_profit = 0; 
    int min_price = prices[0]; 

  for (int i = 1; i < n; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else {
            int profit = prices[i] - min_price;
            if (profit > max_profit) {
                max_profit = profit;
            }
        }
    }

    printf("Maximum profit: %d\n", max_profit);

    return 0;
}
