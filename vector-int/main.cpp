#include <iostream>
#include <vector>

// Namespace for experimenting.
using namespace std;

/**
 * Vector with int and range-base iteration.
 */
int main( int argc, char ** argv ) {

  vector<int> v{193, 2048, 22, 1973, 2020, 501};

  v.push_back(44);
  v.push_back(1);

  cout << "Number of elements in vector: " << v.size() << '\n';

  cout << "Vector's elements:" << '\n';
  for (auto & e : v) {
    cout << e << '\n';
  }
  return 0;
}

