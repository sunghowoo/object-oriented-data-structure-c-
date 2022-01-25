/**
 * C++ program printing various memory values with references and pointers.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

int main() {
  int num = 7;
  std::cout << " num: " <<  num << std::endl; // 7
  std::cout << "&num: " << &num << std::endl; // address of 7

  int *p = &   num;
  std::cout << " p: " <<  p << std::endl; // p is address of num
  std::cout << "&p: " << &p << std::endl; // address of p
  std::cout << "*p: " << *p << std::endl; // 7 // derefernce value of p   

  *p = 42;
  std::cout << "*p changed to 42" << std:: endl; 
  std::cout << " num: " <<  num << std::endl; 
  std::cout << " p: " <<  p << std::endl;
  return 0;
}

