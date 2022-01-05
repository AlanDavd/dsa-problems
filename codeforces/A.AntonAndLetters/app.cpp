#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s;
   set<char> counter;

   getline(cin, s);
   for (int i = 0; i < s.size(); i++) {
     if (s[i] >= 97 && s[i] <= 122) {
       counter.insert(s[i]);
     }
   }
   cout << counter.size();
   return 0;
}
