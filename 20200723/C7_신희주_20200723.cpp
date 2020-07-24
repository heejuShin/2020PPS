class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        for(int i=0; i<nums1.size(); i++)
            cout << nums1[i] << " ";
        cout << endl;
        double result;
        if(nums1.size()%2==1)
            result=nums1[nums1.size()/2];
        else result = (double)nums1[nums1.size()/2-1]/2 + (double)nums1[nums1.size()/2]/2;
        return result;
    }
};
