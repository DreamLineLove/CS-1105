#include <iostream>
#include <regex>
using namespace std;

enum Options { whole, once, multiple, none };

Options option(string arg) {
  regex patternWhole("whole", regex_constants::icase);
  regex patternOnce("once", regex_constants::icase);
  regex patternMulti("\\bmulti\\w*\\b", regex_constants::icase);

  if (regex_match(arg, patternWhole)) {
    return whole;
  } else if (regex_match(arg, patternOnce)) {
    return once;
  } else if (regex_match(arg, patternMulti)) {
    return multiple;
  }

  return none;
}

void printHelp(string name) {
  cout << "#\tThe pattern is\t"
       << "./program_name option pattern" << endl;
  cout << "\nThree options are availabe: whole, once, and multi." << endl;
  cout << "-\twhole implements regex_match" << endl;
  cout << "-\tonce implements regex_search" << endl;
  cout << "-\tmulti implements sregex_iterator" << endl;
  cout << "\nExample:\t" << name << " whole" << endl;
}

int main(int argc, char *argv[]) {
  if (argc == 1) {
    cout << "#\tOne command line argument required!" << endl;
    printHelp(argv[0]);
    return 0;
  }
  if (argc > 2) {
    cout << "#\tOnly one command line argument accepted!" << endl;
    printHelp(argv[0]);
    return 0;
  }

  Options chosen = option(argv[1]);
  if (chosen == none) {
    cout << "#\tPlease choose an existing option!" << endl;
    printHelp(argv[0]);
  }

  return 0;
}