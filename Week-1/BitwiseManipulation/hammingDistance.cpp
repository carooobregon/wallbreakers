class Solution {
public:
    int hammingDistance(int x, int y) {
        int num, num2;
        int distance = 0;
        int i = 0;
        while(x > 0 || y > 0){
            num = x % 2;
            num2 = y % 2;
            if (num != num2 ){
                distance++;
            }
            x = x >>1;
            y = y >> 1;
            i++;
        }
        return distance;
    }
};