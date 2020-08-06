class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        set<char> b;
        for(int i=0; i<B.size(); i++)
            b.insert(B[i]);
        set<char>::iterator it;
        for(it=b.begin(); it!=b.end(); it++)
            if(A.find(*it)==string::npos)
                return -1;
        //A에 없는 char을 B가 가지고 있는데 계속 O(n^2)의 복잡도로 계속 비교하는 것을 방지하기 위해
        //set을 이용해서 O(n)의 시간 복잡도로 미리 먼저 체크

        int count=1;
        string a = A;
        bool check=false;
        while(1){
            if(A.size() >= B.size()*2) check=true;
            if(A.find(B)==string::npos){
                A.append(a);
                count++;
            }
            else break;
            if(check & count>2) return -1;
        }
        return count;
    }
};
