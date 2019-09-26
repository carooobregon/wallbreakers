class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n ==0)
            return false;
        double ans = log2(n);
          if(ans == floor(ans))
              return true;
            else
                return false;
    }
};