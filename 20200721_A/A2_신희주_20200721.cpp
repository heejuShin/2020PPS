#include <iostream>
#include <string>
using namespace std;

int main() {
  int M, N;
  cin >> M >> N;
  int type[5]={0};
  string str[5*M+1];
  for(int i=0; i<5*M+1; i++)
    cin >> str[i];

  for(int i=1; i<5*M+1; i+=5){
      for(int j=0; j<4; j++){
          for(int k=1; k<5*N; k+=5){
              if(str[i+j][k]=='*') type[j]++;
          }
      }
  }
  cout << M*N-type[0];
  for(int i=0; i<4; i++)
    cout << " " << type[i]-type[i+1];
}
