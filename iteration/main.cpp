#include <iostream>
#include <random>

// Namespace for experimenting.
using namespace std;

/**
 * Multiplication with random numbers.
 */
int main() {
  // Seed the random number generator
  random_device seed{};

  // Random number generator
  mt19937 engine{seed()};

  // Uniformly distribute random numbers [1..10]
  uniform_int_distribution<> dis{1, 10};

  int x{dis(engine)};

  cout << x << '\n';

  return 0;
}

