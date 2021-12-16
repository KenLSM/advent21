#include <bits/stdc++.h>

using namespace std;

int main() {
  int n = 1000;
  int down = 0, forward = 0, up = 0;

  for (int i = 0; i < n; i++) {
    int t;
    string s;
    cin >> s >> t;
    if (s == "forward") {
      forward += t;
    }
    if (s == "down") {
      down += t;
    }
    if (s == "up") {
      up += t;
    }
  }
  int c = (down - up) * forward;
  cout << c << endl;
}