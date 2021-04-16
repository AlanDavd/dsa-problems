#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(0);
	cin.tie(0);
   int n, k;
   scanf("%d%d", &n, &k);
   for (int i = 0; i < k; i++) {
      int j = n % 10;
      if (j == 0) {
         n /= 10;
      }
      if (j != 0) {
         n--;
      }
   }
   printf("%d", n);
   return 0;
}
