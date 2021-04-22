#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, c = 0;
   scanf("%d", &n);
   int a[n];
   for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
      if (a[i] == 1) {
         c++;
      }
   }
   if (c == 0) {
      printf("EASY\n");
   } else {
      printf("HARD\n");
   }
   return 0;
}
