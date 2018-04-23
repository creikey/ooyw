#include "ooyw/vector.hpp"

template <class T = float> Vector2<T>::Vector2() : x(T(0)), y(T(0)){};
template <class T = float> Vector2<T>::Vector2(T inx, T iny) : x(inx), y(iny){};
template <class T = float> Vector2<double> Vector2<T>::normalize() {
  double len = this->length();
  return Vector2<double>(this->x / len, this->y / len);
};
double Vector2<T>::length() { return sqrt(this->x * this->x + this->y * this->y); };
std::string Vector2<T>::toString() {
  return "(" + std::to_string(this->x) + "," + std::to_string(this->y) + ")";
};
Vector2 Vector2<T>::&operator+(const Vector2 &vec) {
  this->x += vec.x;
  this->y += vec.y;
  return *this;
}; // add
Vector2 Vector2::&operator*(const Vector2 &vec) {
  this->x *= vec.x;
  this->y *= vec.y;
  return *this;
};
Vector2 Vector2::&operator*(const T scalar) {
  this->x *= scalar;
  this->y *= scalar;
  return *this;
};
Vector2 Vector2::&operator-(const Vector2 &vec) {
  this->x -= vec.x;
  this->y -= vec.y;
  return *this;
};
Vector2 Vector2::&operator/(const Vector2 &vec) {
  this->x /= vec.x;
  this->y /= vec.y;
  return *this;
};
bool Vector2::operator>(const Vector2 &vec) {
  return (this->x > vec.x) && (this->y > vec.y);
}
bool Vector2::operator<(const Vector2 &vec) {
  return (this->x < vec.x) && (this->y < vec.y);
}
bool Vector2::operator>(const Vector2 &vec) {
  return (this->x > vec.x) && (this->y > vec.y);
}
bool Vector2::operator<(const Vector2 &vec) {
  return (this->x < vec.x) && (this->y < vec.y);
}
