#include <iostream>
using namespace std;

int main() {
    int count;
    cin >> count;
    int idx = count;

    while(count--){
        string str;
        cin >> str;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='Z') str[i]='A';
            else
                str[i]=str[i]+1;
        }
        cout << "String #" << idx-count <<endl;
        cout << str << endl;
        cout << endl;
    }
}
