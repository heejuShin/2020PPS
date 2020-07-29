class Solution {
public:
    string addBinary(string a, string b) {
        string result="";
        int len1 = a.size();
        int len2 = b.size();
        bool carry = false;
        for(int i=1; i<=max(len1, len2); i++){
            if(i<=min(len1, len2)){
                if(a[len1-i]=='1' && b[len2-i]=='1'){
                    if(carry) result.push_back('1');
                    else result.push_back('0');
                    carry=true;
                }else if(a[len1-i]=='1' && b[len2-i]=='0'){
                    if(carry) {
                        result.push_back('0');
                        carry=true;
                    }
                    else {
                        result.push_back('1');
                        carry = false;
                    }
                }else if (a[len1-i]=='0' && b[len2-i]=='1'){
                    if(carry) {
                        result.push_back('0');
                        carry=true;
                    }
                    else {
                        result.push_back('1');
                        carry = false;
                    }
                }else{
                    if(carry) result.push_back('1');
                    else result.push_back('0');
                    carry=false;
                }
            }else{
                if(len1>len2){
                    if(a[len1-i]=='1'){
                        if(carry) {
                            result.push_back('0');
                            carry=true;
                        }
                        else {
                            result.push_back('1');
                            carry = false;
                        }
                    }else{
                        if(carry) result.push_back('1');
                        else result.push_back('0');
                        carry=false;
                    }
                }else{
                    if(b[len2-i]=='1'){
                        if(carry) {
                            result.push_back('0');
                            carry=true;
                        }
                        else {
                            result.push_back('1');
                            carry = false;
                        }
                    }else{
                        if(carry) result.push_back('1');
                        else result.push_back('0');
                        carry=false;
                    }
                }
            }
        }
        if(carry)
            result.push_back('1');
        reverse(result.begin(), result.end());
        return result;
    }
};
