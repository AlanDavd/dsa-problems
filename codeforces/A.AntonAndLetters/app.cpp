#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   char s[1001];
   int counter = 0;
   gets(s);
   sort(s, strlen(s));
   for (int i = 0; i < strlen(s)-1; i++) {
      if (s[i] >= 97 && s[i] <= 122) {
         counter++;
         if (s[i] == s[i+1]) {
            counter--;
         }
      }
   }
   printf("%d\n", counter);
   return 0;
}
