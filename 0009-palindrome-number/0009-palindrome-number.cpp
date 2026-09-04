class Solution {
public:
    bool isPalindrome(int x) {
    string num= to_string(x);
    string store =num;
    reverse(num.begin(),num.end());
    if(num==store){
        return true;
    }
    return false;
        
    }
};