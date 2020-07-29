class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        string symbol="MDCLXVI";
        int value[7]={1000,500,100,50,10,5,1};
        int idx=0;
        for(int i=0; i<s.size(); i++){
            //cout << s[i] << "&&" << symbol[idx] << endl;
            if(s[i]==symbol[idx]){
                result+=value[idx];
            }else{
                if(i!=s.size()-1){
                    if(s[i+1]==symbol[idx]){
                        for(int j=1; j<3; j++){
                            if(s[i]==symbol[idx+j]){
                                result-=value[idx+j];
                                break;
                            }
                        }
                    }
                    else{
                        idx++;
                        i--;
                    }
                }
                else {
                    idx++;
                    i--;
                }
            }//if
        }
        return result;
    }
};
