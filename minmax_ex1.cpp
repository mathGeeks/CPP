#include <iostream>
#include <algorithm>
using namespace std;
int main () 
{
  auto result = minmax({11,12,13,14,15});
  cout << "minmax({11,12,13,14,15}): ";
  cout << result.first << ' ' << result.second << '\n';
  return 0;
}
