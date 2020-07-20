#include <iostream>
#include <string>
using namespace std;

int main() {
    int size;
    cin >> size;

    for(int i=0; i<size; i++){
        string result;
        cin >> result;

        //점수계산
        int score=0;
        int total=0;
        for(int j=0; j<result.length(); j++){
            if(result[j]=='O'){
                score++;
            }
            else{
                score=0;
            }
            total+=score;
        }
        cout << total <<endl;
    }
}
