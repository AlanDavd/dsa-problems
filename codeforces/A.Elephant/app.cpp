#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int a;
   scanf("%d", &a);
   if (a%5 == 0) {
      printf("%d", a/5);
   } else {
      printf("%d", (a/5)+1);
   }
   return 0;
}
