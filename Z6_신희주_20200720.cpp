#include <iostream>
using namespace std;

int main() {
    int cnt;
    cin >> cnt;
    int size[cnt];
    int height=0;
    int max=0;
    for(int i=0; i<cnt; i++)
        cin >> size[i];
    for(int i=1; i<cnt; i++){
        int diff=size[i]-size[i-1];
        if(diff>0){
            height+=diff;
        }
        else{
            height=0;
        }
        if(height>max)
            max=height;
    }
    cout << max;
}
