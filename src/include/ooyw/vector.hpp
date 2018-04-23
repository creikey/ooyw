#ifndef HPP_VECTOR
#define HPP_VECTOR

#include <string>

// Standard 2d Vector2
template <class T = float> class Vector2 {
public:
  T x;
  T y;
  Vector2();
  Vector2(T inx, T iny);
  Vector2<double> normalize();
  double length();
  std::string toString();

  Vector2 &operator+(const Vector2 &vec); // add
  Vector2 &operator*(const Vector2 &vec);
  Vector2 &operator*(const T scalar);
  Vector2 &operator-(const Vector2 &vec);
  Vector2 &operator/(const Vector2 &vec);
  bool operator>(const Vector2 &vec);
  bool operator<(const Vector2 &vec);
};

#endif // HPP_VECTOR
