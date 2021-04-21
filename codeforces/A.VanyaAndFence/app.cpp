#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, h, w = 0;
   cin >> n >> h;
   while (n--) {
      int current;
      cin >> current;
      if (current <= h) {
         w++;
      } else if (current > h) {
         w += 2;
      }
   }
   cout << w << endl;
   return 0;
}
