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

  constexpr int questionCount{3};

  int correctAnswers{0};

  for (int i = 0; i < questionCount; i++) {
    int a{dis(engine)};
    int b{dis(engine)};

    cout << a << " * " << b << " = ? ";
    int answer{};
    cin >> answer;

    if (answer == (a * b)) {
      cout << "You are correct";
      correctAnswers++;
    } else {
      cout << "Wrong!";
    }
    cout << "\n\n";
  }
  cout << "Correct answers: " << correctAnswers << '\n';

  if (correctAnswers == questionCount) {
    cout << "Your answers were all correct :)" << '\n';
  }

  if (!correctAnswers) {
    cout << "Your answers were all wrong :(" << '\n';
  }

  return 0;
}

