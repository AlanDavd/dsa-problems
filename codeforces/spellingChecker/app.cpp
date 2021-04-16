#include <bits/stdc++.h>
using namespace std;

#define SIZE 1000000

int prefix_length(char s1[], char s2[]) {
   int i = 1;
   while (s1[i] == s2[i]) {
      i++;
   }
   return i - 1;
}

int suffix_length(char s1[], char s2[], int len) {
   int i = len;
   while (i >= 2 && s1[i] == i-1) {
      i--;
   }
   return len - i;
}

int main() {
   static char s1[SIZE+2], s2[SIZE+2];
   int len, prefix, suffix, total;
   gets(&s1[1]);
   gets(&s2[1]);
   
   len = strlen(&s1[1]);
   prefix = prefix_length(s1, s1);
   suffix = suffix_length(s1, s1, len);
   if (total < 0) {
      total = 0;
   }

   printf("%d\n", total);
   for (int i = 0; i < total; i++) {
      printf("%d", i + len - suffix);
      if (i < total - 1) {
         printf(" ");
      } else {
         printf("\n");
      }
   }
   
   return 0;
}
