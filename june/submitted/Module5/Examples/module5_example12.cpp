#include <iostream>
using namespace std;

int main() {
  int i, j;

  i = 10;
  j = 100;

  if (j > 0) {
    int i;

    i = j / 2;
    cout << "inner i: " << i << endl;
  }

  cout << "outer i: " << i << endl;

  return 0;
}