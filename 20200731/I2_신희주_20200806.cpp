class Solution {
public:
    string removeDuplicates(string s, int k) {
        s.push_back('0');
        for(int i=0; i<s.size()-1; i++){
            string check="";
            check.append(k,s[i]);
            int n=s.find(check);
            if(n!=-1){
                s.erase(n,k);
                i=max(-1, i-k);
            }
        }
        s.pop_back();
        return s;
    }
};
