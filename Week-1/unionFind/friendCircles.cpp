class Solution {
public:
    
    int findRoot(int i, vector<int>& root) {
        
        while (root[i] != i)
            i = root[i];
        return i;
    }

    int findCircleNum(vector<vector<int>>& M) {
        if(M.size() == 0)
            return 0;
        vector<int> roots(M.size());
        for (int i = 0; i < roots.size(); i++) roots[i] = i;
        
        for(int i = 0 ; i < roots.size(); i++){
            for(int j = i+1; j < roots.size();j++){
                if(M[i][j])
                    roots[findRoot(i, roots)] = roots[findRoot(j, roots)];
            }
            
        }
        
        unordered_set<int> mySet;
        for (int i = 0; i < roots.size(); i++)
            mySet.insert(findRoot(i, roots));
        return mySet.size();
    }
    
    
};

//  a b c
//a 1 1 0 
//b 1 1 0
//c 0 0 1

//   a b c
// a 1 1 0
// b 1 1 1
// c 0 1 1

