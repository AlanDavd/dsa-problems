#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   char a;
   int n, cnt[26] = {0};
   bool OK = true;
   cin >> n;
   for (int i = 0; i < n; i++) {
     cin >> a;
     if (a >= 'A' && a <= 'Z') a+=32;
     if (a >= 'a' && a <= 'z') cnt[a-97]++;
   }
   for (int i = 0; i < 26; i++) {
     if (cnt[i] == 0) {
       OK = false;
       break;
     }
   }
   if (!OK) cout << "NO" << endl;
   else cout << "YES" << endl;

   return 0;
}
