#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num(9);
    vector<int> fake(2);
    int sum=0;
    for(int i=0; i<9; i++){
        cin >> num[i];
        sum+= num[i];
    }
    sum-=100;
    for(int i=0; i<8; i++){
        for(int j=i+1; j<9; j++){
            if(num[i]+num[j]==sum){
                fake[0]=i;
                fake[1]=j;
            }
        }
    }
    for(int i=0; i<9; i++)
        if(i!=fake[0] && i!=fake[1])
            cout << num[i] << endl;
}
