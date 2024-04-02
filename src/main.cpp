#include "basic.hpp"

void
print_arg_info(int argc, char const* argv[])
{
  cout << "argc = " << argc << endl;

  for (int i = 0; i < argc; ++i) {
    cout << "argv"
         << "[" << i << "]"
         << " = " << argv[i] << endl;
  }
}

int
main(int argc, char const* argv[])
{
  print_arg_info(argc, argv);

  // basic_io();
  // basic_test();
  // basic_opr();
  basic_param();

  return 0;
}