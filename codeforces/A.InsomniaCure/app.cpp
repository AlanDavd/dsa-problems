#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int k, l, m, n, d, counter=0;
   scanf("%d%d%d%d%d", &k,&l, &m, &n, &d);
   for (int i = 1; i <= d; i++) {
      if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
         counter++;
      }
   }
   printf("%d\n", counter);
   return 0;
}
