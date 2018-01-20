#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <vector>

// Namespace for experimenting.
using namespace std;

/**
 * Read lines from file and sort output.
 */
int main() {
  ifstream file{"data.txt"};

  vector<string> lines{};
  string line{};
  while (getline(file, line)) {
    lines.push_back(line);
  }

  sort(begin(lines), end(lines));

  for (const auto & line : lines) {
    cout << line << '\n';
  }
  return 0;
}

