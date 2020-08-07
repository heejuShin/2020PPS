class Solution {
public:
    bool checkRecord(string s) {
        int a=0, l=0;
        int check=false;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='A') a++;
            if(s[i]=='L') l++;
            else l=0;
            if(l==3) check=true;

        }
        if(a<2 && !check) return true;
        return false;
    }
};
