class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> isomorph;
        map<char,char>::iterator it;
        set<char> usedChars;
        set<char>::iterator setIt;
        
        if(s.length() != t.length())
            return false;
        
        for(int i = 0 ; i < s.length(); i++){
            setIt = usedChars.find(t[i]);
            if(setIt == usedChars.end()){
                isomorph[s[i]] = t[i];
                usedChars.insert(t[i]);
            }
        }
        
        for(int i = 0 ; i < s.length(); i++){
            
            it = isomorph.find(s[i]);

            cout << t[i] << " " << it->second << endl;
            if(t[i] != it->second)
                return false;
        }
        return true;
    }
};