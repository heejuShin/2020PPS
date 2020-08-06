#include <iostream>
using namespace std;

int main() {
    //5씩 뺄 수 있을만큼 뺀다
    //나머지 0,1,2,3,4,
    //0
    //1 -> 5를 더하면 6
    //2 -> 10을 더하면 12
    //3 -> 나눠짐
    //4 -> 5를 더하면 9
    //따라서 5를 두 번만 더해보면 된다.
    int N;
    cin >> N;
    int n=N;
    int count=0;

    while(n>4){
       n-=5;
       count++;
    }
    if(n==0);
    else if(n==1){
        if(N<6)
            count=-1;
        else{
            count-=1;
            count+=2;
        }
    }else if(n==2){
        if(N<12)
            count=-1;
        else{
            count-=2;
            count+=4;
        }
    }else if(n==3){
        count++;
    }else{
        if(N<9)
            count=-1;
        else{
            count-=1;
            count+=3;
        }
    }
    cout << count << endl;
}
