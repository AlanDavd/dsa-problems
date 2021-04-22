#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll n, r = 0;
   scanf("%lld", &n);
   if (n%2 == 0) {
      r = n/2;
   } else {
      r = (n-1)/2-n;
   }
   printf("%lld", r);
   return 0;
}
