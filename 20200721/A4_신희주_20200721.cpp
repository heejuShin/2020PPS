#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) { //Sorted Array에만 가능 (아래 코드를 직접 구현한 ver)
        if(nums.size()==0) return 0; //이 코드가 없으면 input []에 [0]을 return 하게 됨
        int idx = 0;
        for (int i=1; i<nums.size(); i++){
            if (nums[idx]!=nums[i])
                nums[++idx]=nums[i]; //중복제거된 (뒤로 보내진) 숫자 다음부터 비교시작
        }
        return ++idx;
    }
    int removeDuplicates2(vector<int>& nums) { //Sorted Array에만 가능
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        return nums.size();
    }
    int removeDuplicates3(vector<int>& nums) { //Sorted Array가 아니라도 가능 -> Time Limit Exceeded
        vector<int>::iterator iter, iter2;
        for(iter=nums.begin(); iter!=nums.end(); iter++)
            for(iter2=(++iter)--; iter2!=nums.end(); iter2++){
                if(*iter==*iter2){
                    nums.erase(iter2);
                    iter2--;
                }
            }
        return nums.size();
    }
};

int main() {
  std::cout << "Hello World!\n";
}
