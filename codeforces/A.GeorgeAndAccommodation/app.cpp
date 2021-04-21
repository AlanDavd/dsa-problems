#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, r = 0;
   scanf("%d", &n);
   for (int i = 0; i < n; i++) {
      int p, q;
      scanf("%d%d", &p, &q);
      if (q-p >= 2) {
         r++;
      }
   }
   cout << r << endl;
   return 0;
}
