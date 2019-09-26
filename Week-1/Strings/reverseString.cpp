class Solution {
public:
    void reverseString(vector<char>& s) {
        int point1 = 0;
        int point2 = s.size()-1;
        while(point2 > point1){
            swap(s[point1], s[point2]);
            point1++;
            point2--;
        }
    }
};