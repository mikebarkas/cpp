#include <iostream>
#include "rectangle.hpp"


// Namespace for experimenting.
using namespace std;

/**
 * Using header and source files.
 */
int main() {

  cout << "Rectangle 10 x 20\n";
  Rectangle r{10, 20};
  r.PrintInfo();

  cout << "Scale recangle by 3\n";
  r.Scale(3);
  r.PrintInfo();

  return 0;
}

