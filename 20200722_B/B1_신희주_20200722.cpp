#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//재귀 함수 -> 시간 초과
int Fibonacci(int n){
    if(n==1 || n==2) return 1;
    else return Fibonacci(n-1) + Fibonacci(n-1);
}

//동적 프로그래밍 -> 숫자 범위 커버 못함
int DFibonacci(int n){
    int dp[n+1];
    dp[1]=1;
    dp[2]=1;
    for(int i=3; i<=n; i++)
        dp[i]=dp[i-1]+dp[i-2];
    return dp[n];
}

//동적 프로그래밍 + String
string SFibonacci(int n){
    string dp[n+2];
    dp[0]="0";
    dp[1]="1";
    dp[2]="1";

    for(int i=3; i<=n; i++){
        //A, B 중 더 긴 길이 기준으로 반복 (자리 idx)
        int len1 = dp[i-1].size();
        int len2 = dp[i-2].size();
        int carry = 0;
        //cout << "1) " << dp[i-2] << ", 2) " << dp[i-1] << "  -->      ";
        for(int j=0; j<max(len1, len2); j++){
            //A, B 중 짧은 길이에 포함되는지 확인
            if(j<min(len1,len2)){
            //포함되면
                //dp[i-1]의 요소, dp[i-2] 요소 숫자로 바꿔서 더하기 + carry
                int sum = (int)dp[i-1][len1-j-1]-48 + (int)dp[i-2][len2-j-1]-48 + carry;
                carry = sum/10;
                sum = sum%10;
                dp[i].push_back(sum+'0');
            }
            else{
            //포함 안되면
                //carry + 더 긴 길이 string 요소 더하기
                if(carry!=0){
                    int sum = (int)dp[i-1][len1-j-1]-48+ carry;
                    carry = sum/10;
                    sum = sum%10;
                    dp[i].push_back(sum+'0');
                }
                else
                    dp[i].push_back(dp[i-1][len1-j-1]);
            }
        }//for
        if(carry!=0)
            dp[i].push_back(carry+'0');
        reverse(dp[i].begin(), dp[i].end());
        //cout << dp[i] << endl;
    }//for
    return dp[n];
}
int main() {
    int num;
    cin >> num;
    //cout << Fibonacci(num);
    //cout << DFibonacci(num);
    cout << SFibonacci(num);
}
