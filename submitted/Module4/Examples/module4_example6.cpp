#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char s1[80], s2[80];
  strcpy(s1, "We are learning C++");
  strcpy(s2, ", general-purpose programming language!");
  cout << "lengths:" << endl;
  cout << "\ts1: " << strlen(s1) << endl;
  cout << "\ts2: " << strlen(s2) << endl;

  cout << "the two strings";
  if (!strcmp(s1, s2))
    cout << " are equal!" << endl;
  else
    cout << " are not equal!" << endl;

  strcat(s1, s2);
  cout << s1 << endl;

  strcpy(s2, s1);
  cout << s1 << " and " << s2 << endl;

  if (strcmp(s1, s2) == 0) {
    cout << "s1 and s2 are now the same" << endl;
  }

  return 0;
}