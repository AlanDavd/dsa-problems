#include <bits/stdc++.h>
using namespace std;

int main() {
   char a[100];
   scanf("%s", a);
   int al = strlen(a);
   for (int i = 0; i < al; i+=2) {
      for (int j = 0; j < al-i-2; j+=2) {
         if (a[j] > a[j+2]) {
            int u = a[j];
            a[j] = a[j+2];
            a[j+2] = u;
         }
      }
   }
   cout << a;
   return 0;
}
