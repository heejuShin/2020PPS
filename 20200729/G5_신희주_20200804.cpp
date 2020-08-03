class Solution {
public:
    int calPoints(vector<string>& ops) {
        int count=0;
        int data[ops.size()+1];
        for(int i=0; i<ops.size(); i++){
            data[i]=0;
            if(ops[i]=="+"){
                int idx=i-1;
                int cnt=0;
                while(1){
                    if(idx<0) break;
                    if(ops[idx]!="C"){
                        data[i]+=data[idx];
                        cnt++;
                    }
                    if(cnt==2) break;
                    idx--;
                }
            }else if(ops[i]=="D"){
                int idx=i-1;
                while(1){
                    if(idx<0) break;
                    if(ops[idx]!="C"){
                        data[i]=data[idx]*2;
                        break;
                    }
                    idx--;
                }
            }else if(ops[i]=="C"){
                if(i!=0){
                    int idx=i-1;
                    while(1){
                        if(idx<0) break;
                        if(ops[idx]=="C")
                            idx--;
                        else break;
                    }
                    count-=data[idx];
                    data[idx]=0;
                    ops[idx]="C";
                }
                data[i]=0;
            }else{
                data[i]=atoi(ops[i].c_str());
            }
            cout << data[i] << endl;
            count+=data[i];
        }
        return count;
    }
};
