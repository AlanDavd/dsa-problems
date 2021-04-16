#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(0);
	cin.tie(0);
   int a, b, r = 0;
   scanf("%d%d", &a, &b);
   while (a <= b) {
      r++;
      a *= 3;
      b *= 2;
   }
   printf("%d", r);
   return 0;
}
