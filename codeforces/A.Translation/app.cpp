#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s, t;
   int r = 0;
   cin >> s >> t;
   for (int i=0, j=t.length()-1; i < s.length(); i++, j--) {
      if (s[i] == t[j]) {
         r++;
      }
   }
   if (r == s.length()) {
      cout << "YES" << endl;
   } else {
      cout << "NO" << endl;
   }
   return 0;
}
