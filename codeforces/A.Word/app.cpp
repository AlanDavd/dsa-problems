#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s;
   int upc = 0, loc = 0;
   cin >> s;
   for (int i = 0; i < s.length(); i++) {
      if ((s[i] >= 65) && (s[i] <= 90)) {
         upc++;
      } else if ((s[i] >= 97) && (s[i] <= 122)) {
         loc++;
      }
   }
   if (upc > loc) {
      for (int i = 0; i < s.length(); i++) {
         s[i] = toupper(s[i]);
      }
   } else {
      for (int i = 0; i < s.length(); i++) {
         s[i] = tolower(s[i]);
      }
   }
   cout << s;
   return 0;
}
