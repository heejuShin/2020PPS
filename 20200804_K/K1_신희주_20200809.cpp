#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum=0;
    string n = to_string(x);
    for(int i=0; i<n.size(); i++)
        sum+=n[i]-'0';
    if(x%sum==0) answer=true;
    else answer = false;
    return answer;
}
