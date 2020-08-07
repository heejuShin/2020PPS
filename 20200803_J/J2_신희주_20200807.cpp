class Solution {
public:
    int addDigits(int num) {
        string n;
        int save = num;
        while(1){
            n = to_string(save);
            if(n.size()==1) break;
            save=0;
            for(int i=0; i<n.size(); i++){
                save+= n[i]-'0';
            }
        }
        return save;
    }
};
