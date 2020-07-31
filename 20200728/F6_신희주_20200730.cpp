#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;
    int count=0;
    string data[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    for(int i=0; i<input.size(); i++){
        bool check=false;
        for(int j=0; j<8; j++){
            if(input[i]==data[j][0] && i!=input.size()-1){
                if(input[i+1]==data[j][1]){
                    if(input[i+1]!='z'){
                        count++;
                        i++;
                        check=true;
                        break;
                    }else{
                        if(i!=input.size()-2){
                            if(input[i+2]==data[j][2]){
                                count++;
                                i+=2;
                                check=true;
                                break;
                            }
                        }
                    }
                }
            }
        }
        if(check) continue;
        count++;
    }
    cout << count << endl;
    return 0;
}
