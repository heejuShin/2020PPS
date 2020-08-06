#include <iostream>
using namespace std;

/*
1 -> 1 (1)
2 -> 2~7 (6)
3 -> 8~19 (12)
4 -> 20~37 (18)
5 -> 38~61 (24)

0~5 0
6~17 1~2
18~35 3~5

0
1~2
3~5
6~9



*/
int main() {
    int N;
    cin >> N;
    if(N==1){
        cout << 1 << endl;
        return 0;
    }
    int result = (N-2)/6;
    int check=0;
    int plus=2;
    int count=2;
    while(1){
        if(result <= check)
            break;
        else{
            check+=plus;
            plus++;
            count++;
        }
    }
    cout << count << endl;
}
