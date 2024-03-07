#include "basic.hpp"

/**
 * @brief
 *
 * cout:  standard output stream
 * <<:    output operator
 * >>:    input operator
 *
 * @return int
 */
void
basic_io()
{
  char var;

  /* output string */
  cout << "hello\n";
  cout << "Thank you,\n"
       << "Dennis.\n";

  /* if you pre-use [using namespace std;], we don't need to use [std::] */
  std::cout << "a" << std::endl; /* == "a\n" */

  var = 'a';

  /* output variable */
  cout << var << endl;

  return;
}