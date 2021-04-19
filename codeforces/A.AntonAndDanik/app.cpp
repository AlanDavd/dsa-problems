#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, a=0, d=0;
   string s;
   cin >> n >> s;
   for (int i = 0; i < s.length(); i++) {
      if (s[i] == 'A') {
         a++;
      }
      if (s[i] == 'D') {
         d++;
      }
   }
   if (a == d) {
      cout << "Friendship" << endl;
   } else if (a < d) {
      cout << "Danik" << endl;
   } else if (a > d) {
      cout << "Anton" << endl;
   }
   return 0;
}
