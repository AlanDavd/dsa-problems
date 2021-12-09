#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Part 1
/* int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s;
   int horizontal = 0, depth = 0, a;
   while (cin >> s >> a) {
      if (s == "forward") {
         horizontal += a;
      }
      if (s == "down") {
         depth += a;
      }
      if (s == "up") {
         depth -= a;
      }
   }
   printf("%d; %d; %d", horizontal, depth, horizontal * depth);
   return 0;
} */

// Part 2
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   string s;
   int horizontal = 0, depth = 0, aim = 0, a;
   while (cin >> s >> a) {
      if (s == "forward") {
         horizontal += a;
         depth += aim * a;
      }
      if (s == "down") {
         aim += a;
      }
      if (s == "up") {
         aim -= a;
      }
   }
   printf("%d; %d; %d", horizontal, depth, horizontal * depth);
   return 0;
}
