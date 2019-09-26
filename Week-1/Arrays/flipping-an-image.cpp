class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        stack<int> myStack;
        int row = A.size();
        int col = A[0].size();
        vector<int> temp;
        vector<vector<int>> ans;
        for(int i = 0 ; i < row; i++){
            for(int j = 0 ; j < col;j++){
                temp = A[i];
                myStack.push(temp[j]);
            }
            temp.clear();
            for(int j = 0 ; j < col;j++){
                int toppeado = myStack.top();
                if(toppeado == 1)
                    toppeado = 0;
                else
                    toppeado = 1;
                temp.push_back(toppeado);
                myStack.pop();
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};