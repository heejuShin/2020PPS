class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>::iterator middle=nums.begin();
        for(int i=0; i<(nums.size()+1)/2; i++)
            middle++;
        reverse(middle, nums.end());
        vector<int>::iterator iter;
        int count=0;
        for(iter=nums.begin(); iter!=nums.end(); iter++){
            if(count==nums.size()/2) break;
            int num=nums.back();
            nums.pop_back();
            nums.insert(++iter, num);
            count++;
        }
        iter=nums.begin();
        iter++;
        for(;iter!=nums.end(); iter++){
            if(*iter==*(--iter)++){
                int num=nums[--(--iter)-nums.begin()];
                cout << num << *iter << endl;
                nums.erase((iter++)++);
                nums.push_back(num);

                num=nums[(--iter)-nums.begin()];
                cout << num << *iter << endl;
                nums.erase((iter++));
                nums.push_back(num);
                iter=nums.begin();
            }
        }
    }
};

//Follow Up
//Can you do it in O(n) time and/or in-place with O(1) extra space?
