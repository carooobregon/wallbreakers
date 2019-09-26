class Solution {
public:
    bool detectCapitalUse(string word) {
        int capCount =0;
        bool firstCapIdx = false;
        for(int i = 0 ; i < word.length(); i++){
            if(int(word[i]) >= 65 && int(word[i] <= 90)){
                capCount++;
                if(i == 0)
                    firstCapIdx = true;
            }
        }
        if(capCount == 0)
            return true;
        else if((capCount == word.length() || capCount == 1) && firstCapIdx)
            return true;
        else
            return false;
    } 
};