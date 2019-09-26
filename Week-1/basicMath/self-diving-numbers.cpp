class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left ; i<= right;i++){
            if(i<=9)
                ans.push_back(i);
            else if(i % 10 != 0){
                int temp = i;
                
                while(temp > 0 && temp %10 != 0){
                    int mod = temp % 10;
                    if( i % mod == 0)
                        temp /= 10;
                    else
                        temp = -1;
                }
                if(temp == 0)
                    ans.push_back(i);
            }   
        }
        return ans;
    }
};