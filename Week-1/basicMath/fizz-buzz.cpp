class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        map<int,string> fizzBuzzMap;
        map<int,string>::iterator it;
        string temp = "";
        fizzBuzzMap[3] = "Fizz";
        fizzBuzzMap[5] = "Buzz";
        
        for(int i = 1 ; i <= n; i++){
            for ( it = fizzBuzzMap.begin(); it != fizzBuzzMap.end(); it++ ){
                if(i % it->first  == 0) 
                  temp+=it->second;
            }
            if(temp == "")
                temp = to_string(i);
            ans.push_back(temp);
            temp = "";
        }
        return ans;
    }
};