#include <iostream>
#include <string>
using namespace std;
/*
1. 모음(a,e,i,o,u) 하나를 반드시 포함하여야 한다.
2. 모음이 3개 혹은 자음이 3개 연속으로 오면 안 된다.
3. 같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용한다.
*/
bool check1(string str){
    if(str.find('a')==string::npos && str.find('e')==string::npos && str.find('i')==string::npos && str.find('o')==string::npos && str.find('u')==string::npos) return false;
    return true;
}
bool check2(string str){
    string mo = "aeiou";
    int count_ja=0;
    int count_mo=0;

    for(int i=0; i<str.size(); i++){
        if( mo.find(str[i])==string::npos ){
            count_ja++;
            count_mo=0;
        }
        else{
            count_mo++;
            count_ja=0;
        }
        if(count_ja==3 || count_mo==3)
            return false;
    }
    return true;
}
bool check3(string str){
    for(int i=1; i<str.size(); i++)
        if(str[i]==str[i-1] && str[i]!='e' && str[i]!= 'o')
            return false;
    return true;
}
int main() {
    while(1){
        string str;
        cin >> str;
        if(str=="end") break;
        cout << "<" << str << "> is ";
        if(!(check1(str) && check2(str) && check3(str)))
            cout << "not ";
        cout << "acceptable."<<endl;
    }
}
