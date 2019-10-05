class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> myNums;
        set<int>::iterator it;
        vector<int> ans;
        for(int i = 0 ; i < nums1.size();i++)
            myNums.insert(nums1[i]);
        for(int i =0; i<nums2.size();i++){
            it = myNums.find(nums2[i]);
            if(it!=myNums.end()){
                ans.push_back(nums2[i]);
                myNums.erase(it);                
            }
        }
        return ans;
    }
};