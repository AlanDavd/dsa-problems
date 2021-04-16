#include <bits/stdc++.h>
using namespace std;

int main() {
   char s[100];
   set<int> a;
   scanf("%s", s);
   for (int i = 0; i < strlen(s); i++) {
      a.insert(s[i]);
   }
   int r = a.size();
   if (r % 2 == 0) {
      printf("CHAT WITH HER!");
   } else {
      printf("IGNORE HIM!");
   }
   return 0;
}
