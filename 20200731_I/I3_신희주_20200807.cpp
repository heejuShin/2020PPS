class Solution {
public:
    string countAndSay(int n) {
        string dp[n+1];
        dp[0]= "1";
        for(int i=1; i<n; i++){
            int count=0;
            char ch=dp[i-1][0];
            for(int j=0; j<dp[i-1].size(); j++){
                bool check = true;
                if(ch==dp[i-1][j]){
                    count++;
                }
                else{
                    count=max(1,count);
                    dp[i].push_back(count+'0');
                    dp[i].push_back(ch);
                    count=1;
                    check=false;
                }
                ch=dp[i-1][j];
                if(j==dp[i-1].size()-1){
                    count=max(1,count);
                    char c = count+'0';
                    dp[i].push_back(count+'0');
                    dp[i].push_back(ch);
                }
            }
        }
        return dp[n-1];
    }
};
