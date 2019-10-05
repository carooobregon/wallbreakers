class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char,string> morseMap;
        unordered_map<char,string>::iterator it;
        vector<string> morseLetters {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> wordMap;
        set<string>::iterator wordIt;
        for(int i = 0; i < morseLetters.size(); i++){
            morseMap[char(i+97)] = morseLetters[i];
        }
        for(int i = 0 ; i < words.size(); i++){
            string temp = words[i];
            string empty = "";
            for(int i = 0; i < temp.length();i++){
                it = morseMap.find(temp[i]);
                empty+=it->second;
            }
            cout << empty << " ";
            wordIt = wordMap.find(empty);
            if(wordIt == wordMap.end()){
                wordMap.insert(empty);
            }
        }
        return wordMap.size();
    }
};