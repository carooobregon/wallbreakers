class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> myMap;
        map<int, int>::iterator it;
        vector<int> ans;
        
        for(int i = 0; i <nums.size();i++){
            int substraction = target - nums[i];
            it = myMap.find(substraction);
            if(it != myMap.end()){
                int temp = myMap.find(substraction)->second;
                ans.push_back(temp);
                ans.push_back(i);
                return ans;
            }
            else{
                myMap[nums[i]] = i;
            }
        }
        return ans;
    }
};