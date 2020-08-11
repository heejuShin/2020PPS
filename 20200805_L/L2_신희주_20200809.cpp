class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        bool check=false;
        vector<int> answer;
        for(i=0; i<nums.size()-1; i++){
            for(j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    check=true;
                    break;
                }
            }
            if(check) break;
        }
        answer.push_back(i);
        answer.push_back(j);
        return answer;
    }
};
