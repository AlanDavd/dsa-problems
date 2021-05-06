#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, a[100], currentMax, currentMin, ans, ma=INT_MIN, mi=INT_MAX;
   scanf("%d", &n);
   for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
      if (a[i] > ma) {
         ma = a[i];
         currentMax = i;
      }
      if (a[i] <= mi) {
         mi = a[i];
         currentMin = i;
      }
   }
   ans = currentMax + (n-1-currentMin);
   if (currentMin < currentMax) {
      ans--;
   }
   printf("%d\n", ans);
   return 0;
}
