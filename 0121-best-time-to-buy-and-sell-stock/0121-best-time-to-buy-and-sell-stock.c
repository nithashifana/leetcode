int maxProfit(int* prices, int pricesSize) {
    int min = 0, max = 0;
    for(int i = 0; i < pricesSize; i ++) {
        if(prices[i] < prices[min]) {
            min = i;
        } else {
            int diff = prices[i] - prices[min];
            max = diff > max ? diff: max;
        }
    }

    return max;
}