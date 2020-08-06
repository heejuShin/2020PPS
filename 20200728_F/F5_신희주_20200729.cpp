class Solution {
public:
    string convert(string s, int numRows) {
        int division=(2*numRows-2);
        if(division==0) division=1;
        char save[numRows][(s.size()/(division)+1)*(numRows-1)];
        //초기화
        for(int i=0; i<numRows; i++)
            for(int j=0; j<(s.size()/(division)+1)*(numRows-1); j++)
                save[i][j]=' ';

        int type=0;
        int m=0, n=0;
        if(numRows==1)
            return s;
        for(int i=0; i<s.size(); i++){
            if(type%(numRows-1)==0){
                for(int j=0; j<numRows; j++){
                    if(i==s.size()) break;
                    save[m++][n]=s[i++];
                    if(j==numRows-1) {
                        m-=2;
                        n++;
                        i--;
                    }
                }
            }else{
                save[m--][n++]=s[i];
            }
            type=(type+1)%(numRows-1);
        }
        /*
        for(int i=0; i<numRows; i++){
            for(int j=0; j<(s.size()/(division)+1)*(numRows-1); j++)
                cout << save[i][j] << " ";
            cout << endl;
        }*/
        string result="";
        for(int i=0; i<numRows; i++)
            for(int j=0; j<(s.size()/(division)+1)*(numRows-1); j++)
                if(save[i][j]!=' ') result.append(1, save[i][j]);
        return result;
    }
};
