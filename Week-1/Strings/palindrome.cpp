class Solution {
public:
    bool isPalindrome(string s) {
        int pointer1 = 0;
        int pointer2 = s.length()-1;
        while(pointer2 > pointer1){
            if(!(isalnum(s[pointer1])))
                pointer1++;
            else if (!(isalnum(s[pointer2])))
                pointer2--;
            else if(tolower(s[pointer1]) != tolower(s[pointer2]))
                return false;
            else{
                pointer1++;
                pointer2--;
            }
        }
        return true;
    }
};