// Rectangle class implementation.
// Simple methods should be inline methods in the header file.

#include "rectangle.hpp"


Rectangle::Rectangle(double width, double height)
  : width_{width}, height_{height}
{}

double Rectangle::Width() const {
  return width_;
}
double Rectangle::Height() const {
  return height_;
}

double Rectangle::Area() const {
  return width_ * height_;
}

double Rectangle::Perimeter() const {
  return 2.0 * (width_ + height_);
}

void Rectangle::Scale(double factor) {
  width_ *= factor;
  height_ *= factor;
}
