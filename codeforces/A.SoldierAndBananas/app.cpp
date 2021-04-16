#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(0);
	cin.tie(0);
   int k, n, w, r=0;
   scanf("%d%d%d", &k, &n, &w);
   for (int i = 1; i <= w; i++) {
      r += i * k;
   }
   if (r < n) {
      printf("%d", 0);
   } else {
      printf("%d", r-n);
   }
   return 0;
}
