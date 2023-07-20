int maxProfit(vector<int>& prices) {
    int maxProfit = 0, prevMin = prices[0];
    for(int i = 1; i < prices.size(); i++){
        if(prices[i] > prevMin && prices[i] - prevMin > maxProfit){
            maxProfit = prices[i] - prevMin;
        }
        else if(prevMin > prices[i]){
            prevMin = prices[i];
        }
    }
    return maxProfit;
}