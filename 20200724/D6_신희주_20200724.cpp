class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int i=0; i<nums1.size(); i++){
            vector<int>::iterator it;
            it= find(nums2.begin(), nums2.end(), nums1[i]);
            if(it!=nums2.end()){
                result.push_back(nums1[i]);
                nums2.erase(it);
            }
        }
        //1.지정된 배열이 이미 정렬되어 있으면 어떻게 하시겠습니까? 알고리즘을 어떻게 최적화하시겠습니까?
            //O(m+n)으로 가능.
            //nums1.begin(), nums2.begin()에서 시작하여
            //같으면 result에 push_back & iter++ & iter2++
            //nums1이 작으면 nums1 iter++
            //nums2가 작으면 nums2 iter2++
            //--> vector<int> intersect2에서 실행해보았는데 Runtime이 24ms -> 8ms로 줄어들었다.

        //2.만약 숫자1의 크기가 숫자2의 크기에 비해 작다면? 어떤 알고리즘이 더 좋은가?
            //-> nums1에서 find하는 알고리즘!

        //3.nums2의 요소가 디스크에 저장되어 있고 메모리가 제한되어 있어서 모든 요소를 메모리에 한 번에 로드할 수 없다면?
            //A. nums2를 여러개로 나눠서 실행, 단 이 경우에는 nums1에서도 erase가 필요
            //B. 정렬해서 푼다. -> nums2 index 끝까지 가면 불러오는 식으로
        return result;
    }
    vector<int> intersect2(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int>::iterator it=nums1.begin();
        vector<int>::iterator it2=nums2.begin();
        while(it!=nums1.end() && it2!=nums2.end()){
            if(*it==*it2) {
                result.push_back(*it);
                it++; it2++;
            }
            else if(*it>*it2) it2++;
            else it++;
        }
        return result;
    }
};
