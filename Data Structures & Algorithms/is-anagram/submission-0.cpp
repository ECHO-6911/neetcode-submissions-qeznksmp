class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> alpha(26,0);
        for(int i=0;i<s.length();i++){
            alpha[s[i]-'a']++;
            alpha[t[i]-'a']--;
        }
        for(int i:alpha){
            if(i!=0)return false;
        }
        return true;
    }
};
