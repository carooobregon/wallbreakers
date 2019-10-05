class Solution {
public:
    
    vector<string> splitWords(string A){
        string temp = "";
        vector<string> ans;
        for(int i = 0 ; i < A.length(); i++){
            if(A[i] != ' ')
                temp+=A[i];
            else{
                ans.push_back(temp);
                temp = "";
            }
        }
        ans.push_back(temp);
        return ans;
    }
    
    void fillUpMap(string A, unordered_map<string,int> &myWords){
        vector<string> wordVec = splitWords(A);
        unordered_map<string,int>::iterator it;
        for(int i = 0; i < wordVec.size();i++){
            string tempS = wordVec[i];
            it = myWords.find(tempS);
            if(it != myWords.end()){
                it->second++;
            }
            else{
                myWords[tempS] = 1;
                tempS = "";
            }
        }
    }
    
    
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string, int> myWords;
        unordered_map<string,int>::iterator it;
        
        fillUpMap(A, myWords);
        fillUpMap(B, myWords);
        
        vector<string> ans;
        for (it=myWords.begin(); it!=myWords.end(); ++it){
            if(it->second == 1)
                ans.push_back(it->first);
        }
        return ans;
    }
};