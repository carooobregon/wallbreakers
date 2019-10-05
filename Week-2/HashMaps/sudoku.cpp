class Solution {
public:
    
    bool checkVals(vector<char> board){
        set<char> myNumbers;
        set<char>::iterator it;
        for(int i = 0; i < board.size();i++){
            if(board[i] != '.'){
                it = myNumbers.find(board[i]);
                if(it==myNumbers.end())
                    myNumbers.insert(board[i]);
                else{
                    return false;
                }
            }
        }
        return true;
    }
        
    void printVector(vector<char> vec){
        for(int i = 0 ; i< vec.size();i++)
            cout << vec[i]<< " ";
        cout << endl;
    }
    
    vector<char> checkSquare(vector<vector<char>> board, int k, int l){
        vector<char> mychars, temp;
        for(int i = k ; i < k+3; i++){
            temp = board[i];
            for(int j = l; j < l+3; j++){
                mychars.push_back(temp[j]);
            }
        }
        return mychars;
    }
    
    
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> tempVec;
        
        for(int i = 0; i < board.size(); i++){
            if(!checkVals(board[i]))
               return false;
        }
        
        vector<char> tempCol;
        for(int j = 0 ; j < board.size(); j++){
            for(int i = 0 ; i < board.size();i++){
                tempVec = board[i];
                tempCol.push_back(tempVec[j]);
            }
         //   printVector(tempCol);
            if(!checkVals(tempCol))
                return false;
            tempCol.clear();
        }
        
        for(int k = 0 ; k < board.size(); k = k+3){
            for(int l = 0; l < board.size(); l = l+3){
                vector<char> sq = checkSquare(board, k, l);     
                if(!checkVals(sq))
                    return false;
            }
            cout << endl;
        }
        return true;
    }
};