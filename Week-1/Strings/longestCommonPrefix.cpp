class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string winner ="";
        if(strs.size() == 0)
            return winner;
        bool checker = false;
        for(int i = 0 ; i < strs[0].length();i++){
            char temp = strs[0][i];
            for(int j = 1 ; j < strs.size();j++){
                if(i > strs[j].length())
                    return winner;
                else if (strs[j][i] == temp)
                    checker = true;
                else
                    return winner;
            }
            winner += strs[0][i];
            checker = false;
        }
        return winner;
    }
};