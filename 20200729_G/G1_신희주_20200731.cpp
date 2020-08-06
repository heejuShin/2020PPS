#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    int time=0;
    int data[26]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    for(int i=0; i<word.size(); i++){
        time+=data[word[i]-'A'];
    }
    cout << time << endl;
}
