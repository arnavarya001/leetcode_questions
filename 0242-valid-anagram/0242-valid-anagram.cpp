class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        map<char,int> mp1;
        map<char,int> mp2;
        if(n!=m){
            return false;
        }
        
        for(int i = 0;i<n;i++){
            mp1[s[i]]++;
        }

        for(int j = 0;j<m;j++){
            mp2[t[j]]++;
        }
        
        return mp1 == mp2;
    }
};