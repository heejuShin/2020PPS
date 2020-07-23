#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=numeric_limits<int>::max();
        int benefit=0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<buy) buy = prices[i];
            if(prices[i]-buy>benefit) benefit=prices[i]-buy;
        }
        return benefit;
    }
};
