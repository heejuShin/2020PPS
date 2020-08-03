#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    int result=666;
    int count=0;
    while(1){
        if(to_string(result).find("666")!=-1){
            count++;
            if(count==N) break;
        }
        result++;
    }
    cout << result << endl;
    return 0;
}
