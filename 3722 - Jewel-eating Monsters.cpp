/**
 *    author:  Tanbin_Hasan
 *    created: 13.10.2021 19:58:20
**/
#include <bits/stdc++.h>

using namespace std;

void Run_Case(void) {
  int64_t x, a, n, c;
  while (cin >> x >> a >> n >> c and (x && a && n && c)) {
    while (n--) {
      x = (((x - 1) % c) * (a % c)) % c;
    }
    x = (x + c) % c;
    cout << x << '\n';
  }
}

int main(void) {
  ios::sync_with_stdio(false); cin.tie(0);
  int total_test = 1, test_case = 0;
  // cin >> total_test; // Watch Carefully
  while (++test_case <= total_test) {
    Run_Case();
  }
  return 0;
}