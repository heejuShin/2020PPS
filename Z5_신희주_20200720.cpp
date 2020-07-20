#include <iostream>
using namespace std;

int main() {
    int num[10];
    int remainder;
    bool check[42]={false};
    int count=0;
    for(int i=0; i<10; i++){
        cin >> num[i];
        remainder = num[i]%42;
        if(check[remainder]);
        else{
            check[remainder]=true;
            count++;
        }
    }
    cout << count ;
}
