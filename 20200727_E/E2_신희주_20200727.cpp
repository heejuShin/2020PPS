class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size()==0) return 1;
        sort(nums.begin(), nums.end());
        vector<int>::iterator iter=nums.begin();
        int i=1;
        while(1){
            if(i==*iter){
                i++;
                iter++;
            }
            else if(i>*iter) iter++;
            else
                return i;
            if(iter==nums.end())
                break;
            //cout << i << "-" << *iter << endl;
        }
        return i;
    }
};
