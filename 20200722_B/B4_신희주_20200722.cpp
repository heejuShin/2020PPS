#include <iostream>
using namespace std;

int main() {
  int E; //지구 1<= E <= 15
  int S; //태양 1<= S <= 28
  int M; //달 1<= M <= 19
  cin >> E >> S >> M;
  int year=S;
  while(1){
        if(year%15==E%15 && year%19==M%19) break;
        year+=28;
  }
  cout << year;
}
