class Solution {
public:
    //방법1
    int search(vector<int>& nums, int target){
        vector<int>::iterator it;
        it=find(nums.begin(), nums.end(), target);
        if(it==nums.end()) return -1;
        else return it-nums.begin();
    }

    //방법2
    int binarySearch(vector<int>& nums, int l, int r, int t){
        if(l>r) return -1;
        int mid = (l+r)/2;
        if(nums[mid]==t) return mid;
        else if(nums[mid] < t) return binarySearch(nums, mid+1, r, t);
        else return binarySearch(nums, l, mid-1, t);
    }
    int findRotated(vector<int>& nums, int l, int r){
        assert(nums.size() >= 2);
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] > nums[mid + 1])
                return mid + 1; //
            else if (nums[mid] > nums[0]) // right
                l = mid;
            else if (nums[mid] < nums[0])// left
                r = mid;
        }
        return -1;
    }
    int search2(vector<int>& nums, int target){ //Binary Search
        int len = nums.size();
        if(len == 0) return -1;
        if(len == 1) return (nums[0]==target) ? 0 : -1;
        if(nums[0] < nums[len-1]){
            return binarySearch(nums, 0, len-1, target);
        }
        int idx = findRotated(nums, 0, len-1);
        if(target >= nums[0])
            return binarySearch(nums, 0, idx, target);
        else
            return binarySearch(nums, idx, len-1, target);
    }
};
