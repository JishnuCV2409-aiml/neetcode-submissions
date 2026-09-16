class Solution {
public:
    bool isPalindrome(string s) {
        string S="";
        for(char c:s){
            if(isalnum(c))
            S+=c;
        }
        for(char &c:S)
        c=tolower(c);
        string t=S;
        reverse(t.begin(),t.end());
        return t==S;

    }
};
