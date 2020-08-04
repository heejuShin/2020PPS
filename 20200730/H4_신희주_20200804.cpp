class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int i=0; i<nums1.size(); i++){
            vector<int>::iterator it;
            it=find(nums2.begin(), nums2.end(), nums1[i]);
            for(;it!=nums2.end(); it++){
                if(nums2[it-nums2.begin()]>nums1[i]){
                    result.push_back(nums2[it-nums2.begin()]);
                    break;
                }
            }
            if(it==nums2.end())
                 result.push_back(-1);
        }
        return result;
    }
};
