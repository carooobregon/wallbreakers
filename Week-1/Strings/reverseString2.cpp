class Solution {
public:
    string reverseString(string s){
        string temp = s;
        int pointer1 = 0;
        int pointer2 = temp.length()-1;
        while(pointer2 > pointer1){
            swap(temp[pointer1], temp[pointer2]);
            pointer1++;
            pointer2--;
        }
        return temp;
    }
    
    string reverseWords(string s) {
        string temp = "";
        string ans = "";
        for(int i = 0 ; i < s.length(); i++){
            if(s[i] != ' ')
                temp+=s[i];
            else{
                temp = reverseString(temp);
                temp+=' ';
                ans+=temp;
                temp.clear();
            }
        }
        ans += reverseString(temp);
        return ans;
    }
};