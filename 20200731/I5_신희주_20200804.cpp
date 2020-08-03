#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string data[14]={"baby", "sukhwan", "tururu", "turu", "very", "cute", "tururu", "turu", "in", "bed", "tururu", "turu", "baby", "sukhwan"};
    N--;
    int a, b;
    a=N%14;
    if(a==2 || a==3 || a==6 || a==7 || a==10 || a==11){
        b=N/14;
        if((a%2==0&&b<3)||(a%2==1&&b<4))
        for(int i=0; i<b; i++){
            data[a].append("ru");
        }
        else{
            data[a]="tu+ru*";
            if(a%2==0)
                data[a].append(to_string(b+2));
            else data[a].append(to_string(b+1));
        }
    }
    cout << data[a];
}
