#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, a[1000], b[1000], p, q, flag = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    a[i] = i + 1;
  }
  cin >> p;
  int j = 0;
  for (; j < p; j++) {
    cin >> b[j];
  }
  cin >> q;
  for (; j < q + p; j++) {
    cin >> b[j];
  }
  for (int i = 0; i < n; i++) {
    for (int t = 0; t < q + p; t++) {
      if (a[i] == b[t]) a[i] = 0;
    }
  }
  for (int i = 0; i < n; i++) {
    if (a[i] != 0) flag++;
  }
  if (flag == 0) cout << "I become the guy." << endl;
  else cout << "Oh, my keyboard!" << endl;
  return 0;
}
