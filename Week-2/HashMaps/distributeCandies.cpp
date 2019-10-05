class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        set<int> diffCandies;
        for(int i = 0; i< candies.size();i++)
            diffCandies.insert(candies[i]);
        return min(diffCandies.size(), candies.size()/2);
    }
};