#include "basic.hpp"

void
basic_opr()
{
  /**
   * @brief
   *
   * double / double = double
   * int / int       = int (floor function)
   *
   * double % double --type casting--> int % int
   *  => casting first
   * 
   * short circuit
   *  &&: not check post condition if pre condition is false.
   *  ||: "                                            true.
   * 
   * 
   */

  int x = 1;
  int y = 2;

  double z = x / (double)y;

  cout << z << endl; 
}