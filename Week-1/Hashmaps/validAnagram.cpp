class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        map <char, int> mymap;
        map<char, int>::iterator it;
        for(int i = 0; i < s.length() ; i++){
            it = mymap.find(s[i]);
            if (it != mymap.end()) {
                int temp = mymap.find(s[i])->second;
                mymap[s[i]] = temp+1;
            }
            else
                mymap[s[i]] = 1;
        }   
        for(int i = 0; i<t.length(); i++){
            it = mymap.find(t[i]);
            if (it != mymap.end()) {
                int temp = mymap.find(t[i])->second;
                if(temp == 1 )
                    mymap.erase (it);
                else
                  mymap[t[i]] = temp-1;
            }
            else
                return false;
        }
        if(mymap.empty())
            return true;
        else
            return false;
    }
};