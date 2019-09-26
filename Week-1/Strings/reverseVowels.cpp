class Solution {
public:
    string reverseVowels(string s) {
        set<char> vowels;
        set<char>::iterator it;
        
        vowels.insert('a');
        vowels.insert('e');
        vowels.insert('i');
        vowels.insert('o');
        vowels.insert('u');

        int pointer1 = 0;
        int pointer2 = s.length()-1;
        
        while(pointer2 > pointer1){
            it = vowels.find(s[pointer1]);
            if(vowels.find(tolower(s[pointer1])) == vowels.end())
                pointer1++;
            else if(vowels.find(tolower(s[pointer2])) == vowels.end()) {
                pointer2--;
            }
            else{
                swap(s[pointer1], s[pointer2]);
                pointer1++;
                pointer2--;
            }
        }
        return s;
    }
};