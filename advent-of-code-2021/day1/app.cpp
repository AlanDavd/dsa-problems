#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Part 1
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int a, b;
   vector<int> v;
   while (cin >> a) {
      v.push_back(a);
   }
   for (int i = 1; i < v.size(); i++) {
      if (v[i-1] < v[i]) {
         b++;
      }
   }
   printf("%d", b);
   return 0;
}

// Part 2
/* int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int a, b;
   vector<int> v;
   while (cin >> a) {
      v.push_back(a);
   }
   for (int i = 2; i < v.size()-1; i++) {
      int v1 = v[i-2];
      int v2 = v[i-1];
      int v3 = v[i];
      int v4 = v[i+1];
      int sw1 = v1+v2+v3;
      int sw2 = v2+v3+v4;
      if (sw1 < sw2) {
         b++;
      }
   }
   printf("%d", b);
   return 0;
} */