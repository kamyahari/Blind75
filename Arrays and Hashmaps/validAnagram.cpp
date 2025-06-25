class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size())
            return false; //trivial check
            
        unordered_map<char, int> sCharacterCount; //hashmap for each string mapping chars -> freq
        unordered_map<char, int> tCharacterCount;

        for(int i=0; i<s.size();i++)
        {
            sCharacterCount[s[i]]++; //increment chars count
            tCharacterCount[t[i]]++;
        }
        return sCharacterCount == tCharacterCount;
    }
};

/*
Time complexity: O(n)
Space complexity: O(n+n) = O(n)
*/
