#include <iostream>

// Namespace for experimenting.
using namespace std;

/**
 * Temperature converter to demonstrate double.
 */
int main( int argc, char ** argv ) {

  double fahrenheit{};
  double celsius{};

  cout << "Enter fahrenheit temperature: ";
  cin >> fahrenheit;

  celsius = (fahrenheit - 32) * 5.0/9.0;
  cout << "Celsius conversion is: " << celsius << '\n';
  return 0;
}

