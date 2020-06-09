class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0){
            return true;
        }
        if(t.size()==0){
            return false;
        }
        if(s.at(0)==t.at(0)){
            return isSubsequence(s.substr(1),t.substr(1));
        }
        else{
            return isSubsequence(s,t.substr(1));
        }
    }
};
