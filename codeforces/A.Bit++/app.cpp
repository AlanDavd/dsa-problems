#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, x = 0;
   scanf("%d", &n);
   char a[5];
   while (n--) {
      scanf("%s", a);
      if (a[1] == '+') {
         x++;
      } else {
         x--;
      }
   }
   printf("%d", x);
   return 0;
}
