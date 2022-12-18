#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

bool mypredicate (int i, int j) 
{
  return (i==j);
}

int main () 
{
  vector<int> myvector;
  for (int i=1; i<6; i++) 
  {
      myvector.push_back (i*10);
  }
  int myints[] = {10,20,80,320,1024};
  std::pair<std::vector<int>::iterator,int*> mypair;
  mypair = std::mismatch (myvector.begin(), myvector.end(), myints);
  cout << "First mismatching elements: " << *mypair.first<< " and " << *mypair.second << '\n';

  ++mypair.first; ++mypair.second;

  mypair = std::mismatch (mypair.first, myvector.end(), mypair.second, mypredicate);
  cout << "Second mismatching elements: " << *mypair.first << " and " << *mypair.second << '\n';
  return 0;
}
