#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    string dow[7]={"THU","FRI","SAT","SUN","MON","TUE","WED"};
    int day=b;
    for(int i=0; i<a-1; i++)
        day+=days[i];
    answer=dow[day%7];
    return answer;
}
