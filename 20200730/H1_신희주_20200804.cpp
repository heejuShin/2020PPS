class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string r1="", r2="";
        for(int i=0; i<S.size(); i++){
            if(S[i]=='#'){
                if(r1.size()>0)
                    r1.pop_back();
            }
            else
                r1.push_back(S[i]);
        }
        for(int i=0; i<T.size(); i++){
            if(T[i]=='#'){
                if(r2.size()>0)
                    r2.pop_back();
            }
            else
                r2.push_back(T[i]);
        }
        if(r1==r2) return true;
        return false;
    }
};
