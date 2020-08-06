#include <iostream>
using namespace std;

//a 고정비용
//b 가변비용
//c 노트북 비용
int getC(int A, int B, int C){
    if(B-C >= 0) return -1;
    int benefit= A / (C-B) + 1;
    return benefit;
}
int getC2(int A, int B, int C){ // 시간초과
    int benefit = -A;
    int check=benefit;
    int count=0;
    while(1){
        benefit-=B;
        benefit+=C;
        if(check>=benefit){
            return -1;
        }
        count++;
        if(benefit>0)
            break;
    }
    return count;
}

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    cout << getC(A, B, C);
    //cout << getC2(A, B, C);
}
