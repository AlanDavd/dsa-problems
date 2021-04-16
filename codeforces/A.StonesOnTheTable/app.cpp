#include <bits/stdc++.h>
using namespace std;

int main() {
   int a, b=0;
   char s[50];
   scanf("%d", &a);
   scanf("%s", s);
   for (int i = 0; i < a; i++) {
      if (s[i] == s[i+1]) {
         b++;
      }
   }
   printf("%d", b);
   return 0;
}
