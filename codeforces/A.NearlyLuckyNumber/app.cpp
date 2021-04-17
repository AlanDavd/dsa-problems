#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll n;
   int r = 0;
   cin >> n;
   while (n != 0) {
      if (n % 10 == 4 || n % 10 == 7) {
         r++;
      }
      n /= 10;
   }
   if (r == 4 || r == 7) {
      cout << "YES" << endl;
   } else {
      cout << "NO" << endl;
   }
   return 0;
}
