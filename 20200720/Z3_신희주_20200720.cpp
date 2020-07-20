#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string str;
    cin >> str;
    set<string> subString;
    for(int i=0; i<str.length(); i++){
        for(int j=1; j<=str.length()-i; j++){
            string cur= str.substr(i,j);
            //cout << cur <<endl;
            subString.insert(cur);
        }
    }
    cout << subString.size();
}
