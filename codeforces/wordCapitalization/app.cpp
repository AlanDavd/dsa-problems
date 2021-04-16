#include <bits/stdc++.h>
using namespace std;

int main() {
   string a;
   char b[1];
   cin >> a;
   b[0] = toupper(a[0]);
   a[0] = b[0];
   cout << a;
   return 0;
}
