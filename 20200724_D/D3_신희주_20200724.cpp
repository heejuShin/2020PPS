#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int k, n; //층, 호
        cin >> k >> n;
        int dp[k+1][n+1];

        //초기화
        for(int i=0; i<=n; i++)
            dp[0][i]=i;
        for(int i=1; i<=k; i++)
            dp[i][0]=0;

        for(int i=1; i<=k; i++){
            for(int j=1; j<=n; j++){
                dp[i][j]=dp[i][j-1]+dp[i-1][j]; //왼쪽 + 밑
            }
        }
        cout << dp[k][n] << endl;;
    }
}
