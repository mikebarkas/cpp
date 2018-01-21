#include <iostream>

// Namespace for experimenting.
using namespace std;

/**
 * Rectangle class with area and scale methods.
 */
class Rectangle {
  public:
    Rectangle() = default;

    Rectangle(double width, double height)
      : width_{width}, height_{height}
    {}

    double Width() const {
      return width_;
    }
    double Height() const {
      return height_;
    }

    double Area() const {
      return width_ * height_;
    }

    double Perimeter() const {
      return 2.0 * (width_ + height_);
    }

    void Scale(double factor) {
      width_ *= factor;
      height_ *= factor;
    }

    void PrintInfo() {
      cout << "Rectangle width: " << this->Width()
           << ", height: " << this->Height()
           << ",\n"
           << "area: " << this->Area()
           << ", perimeter: " << this->Perimeter()
           << "\n\n";
    }                             

  private:
    double width_{};
    double height_{};

};

/**
 * Make rectangles and display information.
 */
int main() {
  cout << "Default constructed rectangle:\n";
  Rectangle r1{};
  r1.PrintInfo();

  cout << "Rectangle 10 x 20\n";
  Rectangle r{10, 20};
  r.PrintInfo();

  cout << "Scale recangle by 3\n";
  r.Scale(3);
  r.PrintInfo();

  return 0;
}

