#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll a[5], counter = 0;
   for (int i = 0; i < 4; i++) {
      scanf("%lld", &a[i]);
   }
   sort(a, a+4);
   for (int i = 0; i < 3; i++) {
      if (a[i] == a[i+1]) {
         counter++;
      }
   }
   printf("%lld\n", counter);
   return 0;
}
