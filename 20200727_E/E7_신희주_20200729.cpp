#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    set<string> check;
    set<string> result;
    int count=0;
    for(int i=0; i<N; i++){
        string name;
        cin >> name;
        check.insert(name);
        count++;
    }
    for(int i=0; i<M; i++){
        string name;
        cin >> name;
        check.insert(name);
        count++;
        if(check.size()!=count){
            count--;
            result.insert(name);
        }
    }
    cout << result.size() << endl;
    set<string>::iterator it;
    for(it = result.begin(); it!=result.end(); it++)
        cout << *it << endl;
}
