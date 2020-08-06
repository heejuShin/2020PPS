//C++
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0; i<n; i++)
            nums1[i+m]=nums2[i];
        sort(nums1.begin(), nums1.end());
    }
};

//C
void merge(int* nums1, int m, int* nums2, int n) {
    int i, j;
    int count=0;
    int temp;
    for(i=0; i<n; i++)
        nums1[i+m]=nums2[i];

    for(i=0; i<m+n; i++)
        for(j=0; j<i; j++){
            if(nums1[i]<nums1[j]){
                temp=nums1[i];
                nums1[i]=nums1[j];
                nums1[j]=temp;
            }
        }
}
