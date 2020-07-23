class Solution {
public:
    int maxProfit(vector <int>& prices){ //Using DP
        int dp[prices.size()+1][4];

        dp[0][0]=numeric_limits<int>::max(); //구매 금액 일단 최대로 잡기
        dp[0][2]=numeric_limits<int>::max();
        dp[0][1]=0;                          //이익 일단 0으로
        dp[0][3]=0;

        for(int i=0; i<prices.size(); i++){
            dp[i+1][0] = min(dp[i][0], prices[i]); //첫째 거래 최소 구매 금액
            dp[i+1][1] = max(dp[i][1], prices[i]-dp[i][0]); //첫째 거래 최대 이익
            dp[i+1][2] = min(dp[i][2], prices[i]-dp[i][1]); //첫째+둘째 최소 구매 금액
            dp[i+1][3] = max(dp[i][3], prices[i]-dp[i][2]); //첫째+둘째 최대 이익
        }
        return dp[prices.size()][3];
    }

    int maxProfit2(vector<int>& prices) { //Not Using DP -> Time Limit Exceeded
        if(prices.size()==0 || prices.size()==1) return 0;
        else if(prices.size()==2) return max(0, prices[1]-prices[0]);

        int max = 0;
         int sell=numeric_limits<int>::max();
        //하나만 사는 경우
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<sell) sell = prices[i];
            if(prices[i]-sell > max) max = prices[i]-sell;
        }
        //2개 사는 경우
        for(int i=0; i<prices.size()-2; i++){
            sell=numeric_limits<int>::max();
            int benefit = 0;
            for(int j=0; j<i+2; j++){
                if(prices[j]<sell) sell = prices[j];
                if(prices[j]-sell > benefit) benefit = prices[j]-sell;
            }
            sell = numeric_limits<int>::max();
            int benefit2 = 0;
            for(int j=i+2; j<prices.size(); j++){
                if(prices[j]<sell) sell = prices[j];
                if(prices[j]-sell > benefit2) benefit2 = prices[j]-sell;
            }
            if(max < benefit + benefit2) max = benefit + benefit2;
        }
        return max;
    }
};
