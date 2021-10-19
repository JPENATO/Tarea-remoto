#include <iostream>
int main()
{ 
  float a;
  bool x=false;
  double y;
  float z=1.0e40;
  sizeof(double);
  std::cout << "a=" << a << "\n";
  std::cout << "x=" << x << "\n";
  std::cout << "y=" << y << "\n";
  std::cout << "ylocal=" << &y << "\n";
  std::cout << "bites=" << sizeof(double) << "\n";
  std::cout << "z=" << z << "\n";
  return 0;
}
// Quizá como al ser una variable del tipo float y tener un 0 en el decimal el numero de caracteres es demaciado grande para imprimir ya que 1.0e40= 1.00e40= 1.000e40....

