class Solution {
public:
    int maxArea(vector<int>& height) { //Greedy
        int max=0;
        int left = 0, right=height.size()-1;
        while(left<right){
            int area = (right-left) * min(height[left], height[right]);
            if(max < area) max = area;
            if(height[left]>height[right]) right--;
            else left++;
        }
        return max;
    }
    int maxArea2(vector<int>& height) { //Brute Force -> Time Limit Exceeded
        int max=0;
        for(int i=0; i<height.size(); i++){
            for(int j=i+1; j<height.size(); j++){
                int area = (j-i) * min(height[i], height[j]);
                if(area > max) max = area;
            }
        }
        return max;
    }
};
