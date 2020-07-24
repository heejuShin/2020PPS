#include <iostream>
using namespace std;

int main() {
    int seven25[2];
    int count;
    float min;
    cin >> seven25[0] >> seven25[1];
    cin >> count;
    int cost[count][2];
    min=seven25[0]*1.0/seven25[1];
    for(int i=0; i<count; i++){
        cin >> cost[i][0] >> cost[i][1];
        float per = cost[i][0]*1.0/cost[i][1];
        if(min > per) min = per;
    }
    cout << fixed;
    cout.precision(2);
    cout << min * 1000;
}
