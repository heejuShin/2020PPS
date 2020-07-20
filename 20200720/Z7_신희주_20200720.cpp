#include <iostream>
using namespace std;

int main() {
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  int size;
  cin >> size;
  int num1, num2;
  for(int i=0; i<size; i++){
      cin >> num1 >> num2;
      cout << num1+num2 << "\n" ;
  }
}
