class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> jewels;
        set<char>::iterator it;
        int counter = 0; 
        for(int i = 0 ; i < J.length(); i++)
            jewels.insert(J[i]);
        for(int i = 0; i< S.length(); i++){
            it = jewels.find(S[i]);
            if(it != jewels.end())
                counter++;
        }
        return counter;
    }
};