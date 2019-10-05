class Solution {
public:
    int sumOfSquares(int n){
        int tempN = 0;
        while(n){
            tempN += (n%10)* (n%10);
            n /= 10; 
        }
        return tempN;
    }
    
    bool isHappy(int n) {
        set<int> mySet; 
        while (1) { 
            n = sumOfSquares(n); 
            if (n == 1) 
                return true; 
            if (mySet.find(n) != mySet.end()) 
                return false; 
            mySet.insert(n); 
        }
    }
};