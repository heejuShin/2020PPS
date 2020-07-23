#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#define MAX 10000
using namespace std;

int getNum(string a, string b){
    bool between = false;
    int count=0;
    string dp[MAX];
    dp[0]="0";
    dp[1]="1";
    dp[2]="1";

    if(a=="0") count=1;
    else if(a=="1") count=1;
    else count=0;
    if(b.size() < 2 && atoi(b.c_str()) <2 ) return count;
    for(int i=3; i<=MAX; i++){
        //cout << "[" << i-1 <<"]" << dp[i-1] << endl;
        //A, B 중 더 긴 길이 기준으로 반복 (자리 idx)
        int len1 = dp[i-1].size();
        int len2 = dp[i-2].size();
        int carry = 0;
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

        //string
        if(dp[i].size()==a.size()){
            if(dp[i].compare(a)>=0){ // dp가 a보다 같거나 크고
                if(dp[i].size()==b.size()){
                    if(dp[i].compare(b)<=0){ //b 보다 같거나 작으면
                        count++;
                    }
                    else return count; //b보다 크면
                }
                else if(dp[i].size()>b.size())  //b보다 크면
                    return count;
                else count++;
            }
        }
        else if(dp[i].size()>a.size()){ //dp가 a보다 크고
                if(dp[i].size()==b.size()){
                    if(dp[i].compare(b)<=0){ //b 보다 같거나 작으면
                        count++;
                    }
                    else return count; //b보다 크면
                }
                else if(dp[i].size()>b.size())  //b보다 크면
                    return count;
                else count++;
        }
    }//for
    return 0;
}

int main() {
    while(1){
        string a, b;
        cin >> a >> b;
        if(a=="0" && b=="0") break;
        cout << getNum(a,b) <<endl;
    }
}
