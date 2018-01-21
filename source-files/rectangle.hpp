// Header file to declare rectangle class.

#include <iostream>

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
  public:
    Rectangle() = default;
    Rectangle(double width, double height);

    double Width() const;
    double Height() const;

    double Area() const;
    double Perimeter() const;
    void Scale(double factor);

    void PrintInfo() {
      std::cout << "Rectangle width: " << this->Width()
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

#endif
