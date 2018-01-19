#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;


/**
 * Vector of strings and read-only with const.
 */
int main() {

  vector<string> v{"one", "two", "three", "four"};

  v.push_back("five");
  v.push_back("six");

  cout << "Number of vector elements: " << v.size() << '\n';

  cout << "Elements in vector:" << '\n';
  for (string const& e : v) {
    cout << e << '\n';
  }
  return 0;
}

