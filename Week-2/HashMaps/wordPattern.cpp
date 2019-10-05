class Solution {
public:
    
    vector<string> splitString(string str){
        vector<string> ret;
        string temp = "";
        for(int i = 0; i < str.length(); i++){
            if(str[i] != ' ')
                temp+=str[i];
            else{
                ret.push_back(temp);
                temp= "";
            }
        }
        ret.push_back(temp);
        return ret;
    }
    
    bool wordPattern(string pattern, string str) {
        vector<string> t = splitString(str);
        if(pattern.length() != t.size())
            return false;
        
        map<char,string> patternMap;
        map<char,string>::iterator it;
        set<string> usedWords;
        set<string>::iterator setIt;
        
        for(int i = 0 ; i < pattern.length(); i++){
             setIt = usedWords.find(t[i]);
             if(setIt == usedWords.end()){
                 patternMap[pattern[i]] = t[i];
                 usedWords.insert(t[i]);
             }
        }
        it = patternMap.find(pattern[0]);
        for(int i = 0 ; i < pattern.length(); i++){
            
            it = patternMap.find(pattern[i]);
            if(it == patternMap.end())
                return false; 
            if(t[i] != it->second)
                return false;
        }
        return true;
        
    }
};