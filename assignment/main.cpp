#include <iostream>

using namespace std;

int
my_atoi(char* s)
{
  int v = 0;
  for (; *s != '\0'; s++) {
    v *= 10;
    v += *s - '0';
  }
  return v;
}

int
main()
{
  int v, i;
  char s[100];

  cin >> s;
  v = my_atoi(s);
  cout << hex << v << endl;
}

// #include <cstdlib>
// #include <iostream>

// using namespace std;

// int
// main()
// {
//   int random_seed;
//   const int COUNT = 10;

//   cout << "랜덤 시드를 입력하시오." << endl;
//   cin >> random_seed;

//   srand(random_seed);

//   for (int i = 0; i < COUNT; ++i) {
//     cout << (int)rand() % 5 + 1 << " ";
//   }
// }

// int
// main()
// {
//   cout << "Thank you," << endl << "Dennis." << endl;

//   return 0;
// }


