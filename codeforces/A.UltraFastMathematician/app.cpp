#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string a, b;
   cin >> a >> b;
   for (int i = 0; i < a.length(); i++) {
      if (a[i] == b[i]) {
         cout << '0';
      } else {
         cout << '1';
      }
   }
   return 0;
}
