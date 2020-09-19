class Solution {
public:
  bool isValid(string s) {
    stack <char> seen;
    for (int i=0; i<s.size(); i++) {
      if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
        seen.push(s[i]);
      } else {
        if (seen.empty()) return false;

        if (s[i] == ')' && seen.top() != '(') {
            return false;
        }
        if (s[i] == ']' && seen.top() != '[') {
            return false;
        }
        if (s[i] == '}' && seen.top() != '{') {
            return false;
        }
        seen.pop();
      }
    }
    return seen.empty();
  }
};