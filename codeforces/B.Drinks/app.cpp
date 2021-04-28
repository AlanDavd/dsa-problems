#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   double sum = 0;
   scanf("%d", &n);
   for (int i = 0; i < n; i++) {
      int a;
      scanf("%d", &a);
      sum += a;
   }
   sum /= n;
   printf("%.12lf\n", sum);
   return 0;
}
