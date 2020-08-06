#include <iostream>
using namespace std;

int main() {
    int scale[8]; //음계를 저장할 변수
    int ascending[8] = {1,2,3,4,5,6,7,8};
    int desending[8] = {8,7,6,5,4,3,2,1};
    int state=0; //0:UNDECIDED or MIXED, 1:ASCENDING, 2:DESCENDING
    for(int i=0; i<8; i++)
        cin >> scale[i];
    for(int i=0; i<8; i++){
        if(state==0){
            if(scale[0]==1) state = 1;
            else if (scale[0]==8) state = 2;
            else break;
        }
        else if(state==1){
            if(scale[i]!=ascending[i]){
                state = 0;
                break;
            }
        }
        else{
            if(scale[i]!=desending[i]){
                state = 0;
                break;
            }
        }
    }
    if(state==0) cout << "mixed";
    else if(state==1) cout << "ascending";
    else cout << "descending";
}