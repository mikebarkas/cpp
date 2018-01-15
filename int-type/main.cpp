#include <iostream>
#include <limits>

using namespace std;

/**
 * int type example.
 */
int main( int argc, char ** argv ) {

  cout << "int type\n";
  cout << "---------\n";

  cout << "Size: " << sizeof(int) << " bytes\n";
  cout << "Max: " << numeric_limits<int>::max() << '\n';
  cout << "Min: " << numeric_limits<int>::min() << '\n';
  return 0;
}

