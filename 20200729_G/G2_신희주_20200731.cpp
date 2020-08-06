#include <iostream>
#include <string>
using namespace std;

int main() {
    int count[26]={0};
    string word;
    cin >> word;
    for(int i=0; i<word.size(); i++){
        if(word[i]-'A'<26)
            count[word[i]-'A']++;
        else
            count[word[i]-'a']++;
    }
    int max=-1;
    int idx=-1;
    for(int i=0; i<26; i++)
        if(count[i]>max){
            max=count[i];
            idx=i;
        }
    int cnt=0;
    for(int i=0; i<26; i++)
        if(count[i]==max) cnt++;
    char result = idx+'A';
    if(idx==-1 || cnt !=1) cout << "?" << endl;
    else cout << result << endl;

}
