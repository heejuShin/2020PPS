#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int type=0;
        int height = matrix.size();
        if(height==0) return result;
        int width = matrix[0].size();
        int i=0, j=0;
        int count = width * height;
        int cnt=0;
        while(count--){
            cnt++;
            type=type%4;
            cout << "type[" << type << "] " << matrix[i][j] << "("<< width << "," <<height << ")"<<endl;
            result.push_back(matrix[i][j]);
            if(type==0){
                if(width==0) i++;
                else j++;
                if(cnt==width){
                    type++;
                    height--;
                    j--;
                    i++;
                    cnt=0;
                }
            }else if(type==1){
                i++;
                if(cnt==height){
                    type++;
                    width--;
                    cnt=0;
                    i--;
                    j--;
                }
            }else if(type==2){
                j--;
                if(cnt==width){
                    type++;
                    height--;
                    cnt=0;
                    j++;
                    i--;
                }
            }else{
                i--;
                if(cnt==height){
                    type++;
                    width--;
                    cnt=0;
                    i++;
                    j++;
                }
            }
        }
        return result;
    }
};

int main(){

}
