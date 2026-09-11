class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()){
            return false;
        }

        unordered_map<char,int> map1;
        for (char c : s){
            map1[c]++;
        }

        unordered_map<char,int> map2;
        for (char c: t){
            map2[c]++;
        }

        if (map1 == map2){
            return true;
        }

        return false;
    }
};
