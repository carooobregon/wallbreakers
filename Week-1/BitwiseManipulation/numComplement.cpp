class Solution {
public:
    int findComplement(int num) {
        int fin = 0;
        int pow = 1;
        while(num > 0){
            fin += (num % 2 ^ 1) *pow ;
            pow= pow << 1;
            num= num >> 1;
        }
        return fin;
    }
};