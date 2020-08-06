#include <iostream>
#include <cstring>
#include <numeric>
using namespace std;

int main() {
    char *num1 = new char[10001];
    char *num2 = new char[10001];
    char *result = new char[10002];
    cin >> num1;
    cin >> num2;
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int carry=0;

    for(int i=0; i<min(len1,len2); i++){
        int sum = (int)num1[len1-i-1]-48 + (int)num2[len2-i-1]-48 + carry;
        carry = sum/10;
        sum = sum%10;
        result[max(len1, len2)-i-1]= sum+'0';
        //cout << num1[len1-i-1] << " + " << num2[len2-i-1] << " = " << sum << " & " << carry <<endl;
    }
    for(int i=0; i<max(len1,len2)-min(len1,len2); i++){
        if(len1>len2){
            int idx = len1-min(len1,len2)-i-1;
            if(carry!=0){
                int sum = (int)num1[idx]-48 + carry;
                carry = sum/10;
                sum = sum%10;
                result[idx]=sum+'0';
            }
            else
            result[len1-min(len1,len2)-i-1] = num1[len1-min(len1,len2)-i-1];
        }
        else{
            int idx = len2-min(len1,len2)-i-1;
            if(carry!=0){
                int sum = (int)num2[idx]-48 + carry;
                carry = sum/10;
                sum = sum%10;
                result[idx]=sum+'0';
            }
            else
            result[len2-min(len1,len2)-i-1] = num2[len2-min(len1,len2)-i-1];
        }
    }
    if(carry!=0){
        cout << carry;
    }
    cout << result;
}

//python
/*
num1, num2 = map(int, input().split())
print(num1+num2)
*/
