#include <bits/stdc++.h>
using namespace std;

int main() {
   int a, x, y, ans = 0;
   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         scanf("%d", &a);
         if (a == 1) {
            x = i;
            y = j;
         }
      }
   }
   ans = abs(2-x)+abs(2-y);
   printf("%d", ans);
   return 0;
}
