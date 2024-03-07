

#include <iostream>

using namespace std;

/**
 * @brief
 *
 * cout:  standard output stream
 * <<:    output operator (비트시프트연산자는?)
 * >>:    input operator
 *
 * @return int
 */
int
main()
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

  return 0;
}