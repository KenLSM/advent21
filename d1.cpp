#include <bits/stdc++.h>

using namespace std;

// q1
// int main() {
//     int q, p_q, c=0;
//     cin >> p_q;

//     while(cin >> q) {
//         if(q > p_q) {
//             c++;
//             printf("%d > %d \n", q, p_q);
//         }
//         p_q = q;
//     }
//     cout << c << endl;
// }

int main() {
  int n = 2000;
  int *q = new int[n];

  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    q[i] = t;
    printf("%d\n", q[i]);
  }
  int c = 0;
  for (int i = 0; i < n - 3; i++) {
    int a = q[i] + q[i + 1] + q[i + 2];
    int b = q[i + 1] + q[i + 2] + q[i + 3];
    if (b > a) {
      c++;
    }
    cout << q[i + 3] << endl;
  }
  cout << c << endl;
}