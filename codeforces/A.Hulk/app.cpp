#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   scanf("%d", &n);
   for (int i = 1; i < n; i++) {
      if (i %2) {
         printf("I hate that ");
      } else {
         printf("I love that ");
      }
   }
   if (n%2==1) {
      printf("I hate it\n");
   }
   if (n%2==0) {
      printf("I love it\n");
   }
   return 0;
}
