/**
 * C++ program printing various memory values using heap-allocated memory.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

int main() {
  int *numPtr = new int;

  std::cout << "*numPtr: " << *numPtr << std::endl;
  std::cout << " numPtr: " <<  numPtr << std::endl; //heap addess going up from lower number 
  std::cout << "&numPtr: " << &numPtr << std::endl; //stack address

  *numPtr = 42;
  std::cout << "*numPtr assigned 42." << std::endl;

  std::cout << "*numPtr: " << *numPtr << std::endl;
  std::cout << " numPtr: " <<  numPtr << std::endl;// the memorry
  std::cout << "&numPtr: " << &numPtr << std::endl;// address of * numPtr

  return 0;
}