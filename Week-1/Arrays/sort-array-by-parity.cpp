class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int point1 =0;
        int point2 = A.size()-1;
        while(point2 > point1){
            if(A[point1] % 2 == 0){
                point1++;
            }
            else{
                swap(A[point1], A[point2]);
                point2--;
            }
        }
        return A;
    }
};