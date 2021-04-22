#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, r = 1;
   scanf("%d", &n);
   int a[n];
   for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
   }
   for (int i = 0; i < n-1; i++) {
      if (a[i] != a[i+1]) {
         r++;
      }
   }
   printf("%d\n", r);
   return 0;
}
