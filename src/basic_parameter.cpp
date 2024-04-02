#include "basic.hpp"

void
add(int *res_add, int *res_sub, int a, int b)
{
  *res_add = a + b;
  *res_sub = a - b;
}

void
basic_param()
{
  int a, b, res_add, res_sub;

  a = 1;
  b = 2;
  add(&res_add, &res_sub, a, b);

  cout << res_add << ", " << res_sub << endl;
}

