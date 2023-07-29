#include <fstream>
#include <iostream>
#include <regex>
using namespace std;

int main() {
  // regex pattern("male", regex_constants::icase); produces 8 results
  // regex pattern("\\bmale", regex_constants::icase); produces 4 results
  // regex pattern("(fe)?male", regex_constants::icase); produces 8 results
  // regex pattern("(fe)*male", regex_constants::icase); produces 8 results
  // regex pattern("(fe)+male", regex_constants::icase); produces 4 results
  regex pattern("(fe)?male", regex_constants::icase);

  string name;
  cout << "Enter name of the file: ";
  cin >> name;

  cout << endl;

  string line;
  ifstream file(name);

  int n = 0, count = 0;
  while (getline(file, line)) {
    cout << n << ":\t" << line << endl;

    sregex_iterator itr(line.begin(), line.end(), pattern);
    sregex_iterator end;

    while (itr != end) {
      count++;
      itr++;
    }

    n++;
  }

  file.close();

  cout << endl;
  cout << "There are " << count << " matches." << endl;

  return 0;
}
