#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int H, W, N;
        cin >> H >> W >> N;
        int X, Y;
        X = N/H;
        if(N%H!=0) X++;
        Y = N%H;
        if(Y==0) Y = H;
        cout << Y;
        if(X/10<1) cout << '0' << X << endl;
        else cout << X << endl;
    }
}
