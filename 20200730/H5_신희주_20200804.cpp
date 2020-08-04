class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            int idx=i+1;
            int j=0;
            for(; j<nums.size()-1; j++){
                if(idx==nums.size()) idx=0;
                if(nums[i]<nums[idx]){
                    result.push_back(nums[idx]);
                    break;
                }
                idx++;
            }
            if(j==nums.size()-1) result.push_back(-1);
        }
        return result;
    }
};
