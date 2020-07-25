class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            int n = abs(nums[i]);
            nums[n-1] = -abs(nums[n-1]);
        }
        for(int i=0; i<nums.size(); i++)
            if(nums[i]>0) result.push_back(i+1);
        return result;
    }

    vector<int> findDisappearedNumbers2(vector<int>& nums) { //Time Limit Exceeded
        vector<int> result;
        for(int i=0; i<nums.size(); i++)
            result.push_back(i+1);
        sort(nums.begin(), nums.end());
        vector<int>::iterator it=result.begin();
        for(int i=0; i<nums.size() && it!=result.end();){
            if(nums[i]==*it) {
                result.erase(it);
                i++;
            }
            else if(nums[i]>*it) it++;
            else i++;
        }
        return result;
    }

    vector<int> findDisappearedNumbers3(vector<int>& nums) { //Time Limit Exceeded
        vector<int> result;
        for(int i=0; i<nums.size(); i++)
            result.push_back(i+1);
        vector<int>::iterator it=result.begin();
        for(int i=0; i<nums.size(); i++){
            it=find(result.begin(), result.end(), nums[i]);
            if(it!=result.end())
                result.erase(it);
        }
        return result;
    }
};
