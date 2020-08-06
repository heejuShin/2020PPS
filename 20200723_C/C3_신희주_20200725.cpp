#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        string name;
        cin >> name;
        int count=0;
        int len = name.size();
        //오른쪽 왼쪽키
        int lr = len-1;
        int idx;
        for(int i=0; i<len; i++){
            for(idx=i+1; idx<len && name[idx]=='A';)idx++;
                //한방향으로 쭉가기, 왼쪽으로 갔다가 돌아와서 오른쪽 가기, 오른쪽 갔다가 돌아와서 왼쪽가기 중 최솟값 <- 되돌아가기는 한번이라는 가정
                lr = min(lr, min(2*i + len-idx, 2*(len-idx)+i));
        }
        count+=lr;
        //위아래키
        for(int i=0; i<len; i++)
            count+=min((name[i]-'A'),26-(name[i]-'A'));
        cout << count << endl;
    }//while
    return 0;
}
