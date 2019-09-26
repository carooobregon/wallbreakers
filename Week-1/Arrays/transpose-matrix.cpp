class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> ans;
        vector<int> temp;
        int row = A.size();
        int col = A[0].size();
        for(int j = 0 ; j < col; j++){
            for(int i = 0 ; i < row; i++){
                temp.push_back(A[i][j]);
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};