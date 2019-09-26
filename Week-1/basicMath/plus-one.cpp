class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int num = digits[digits.size()-1] + 1;
        
        for(int i = digits.size()-1; i >= 0; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        auto it = digits.insert(digits.begin(), 1); 
        return digits;
    }
};