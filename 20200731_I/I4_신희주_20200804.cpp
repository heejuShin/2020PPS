#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;
    set<int> s;
    for(int i=0; i<N; i++){
        int num;
        cin >> num;
        s.insert(num);
    }
    set<int>::iterator it;
    for(it=s.begin(); it!=s.end(); it++){
        if(it!=s.begin()) cout << " ";
        cout << (*it) ;
    }
}
