class Solution {
public:
    string intToRoman(int num) {
        string result="";
        string symbol[13]={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int value[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        int i=0;
        while(num>0){
            if(num-value[i]>=0){
                num-=value[i];
                result.append(symbol[i]);
            }else{
                i++;
            }
        }
        return result;
    }
};
