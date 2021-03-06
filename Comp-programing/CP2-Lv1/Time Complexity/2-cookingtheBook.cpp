#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  int T;
  cin >> T;

  for (int t = 1; t <= T; t++) {
    long long N;
    cin >> N;

    string str = to_string(N);
    int len = str.length();

    string smallest(str), largest(str);
    for (int i = 0; i < len; i++) {
      for (int j = i+1; j < len; j++) {
        string tmp(str);
        swap(tmp[i], tmp[j]);

        if (tmp[0] != '0')
          smallest = min(smallest, tmp);
        largest = max(largest, tmp);
      }
    }

    cout << "Case #" << t << ": ";
    cout << smallest << " " << largest << "\n";
  }
  return 0;
}