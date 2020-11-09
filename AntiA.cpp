#include <iostream>

#include <algorithm>

using namespace std;

int
main() {
  string usrtxt;
  cout << "Enter string needing 'A' removal: ";
  getline(cin, usrtxt);
  replace(usrtxt.begin(), usrtxt.end(), 'a', ' ');
  replace(usrtxt.begin(), usrtxt.end(), 'A', ' ');
  cout << "Output String: " << usrtxt;

  return 0;

}