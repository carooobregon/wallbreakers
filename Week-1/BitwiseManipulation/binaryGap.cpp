class Solution {
public:
    int binaryGap(int N) {
        int maxDistance = 0; 
        bool one = false;
        int currDistance = 0;
        while( N > 0){
            if(one)
                currDistance++;
            if(N%2 == 1){
                if(one){
                    maxDistance = max(maxDistance, currDistance);
                    currDistance = 0;
                }
                else 
                    one = true;
            }
            N >>= 1;
        }
        return maxDistance;
    }
};