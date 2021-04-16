#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, a, b, current = 0, total = 0;
   scanf("%d", &n);
   while (n--) {
      scanf("%d %d", &a, &b);
      current = current - a + b;
      if (total < current) {
         total = current;
      }
   }
   printf("%d", total);
   return 0;
}
