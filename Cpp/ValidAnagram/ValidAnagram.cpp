class Solution {
public:
  bool isAnagram(string s, string t) {
    if(s.length() != t.length()) {
      return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    int anagram = true;
    for(int i=0; i < s.length(); i++) {
      if(s[i] != t[i]) {
        anagram = false;
      }
    }
    return anagram;
  }
};