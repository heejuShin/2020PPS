class Solution {
public:
    string removeDuplicates(string S) {
        S.push_back('0');
        for(int i=0; i<S.size()-1; i++){
            if(S[i]==S[i+1]){
                S.erase(i,2);
                i=max(-1, i-2);
            }
        }
        S.pop_back();
        return S;
    }
};
