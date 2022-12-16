
#include <iostream>    
#include <algorithm>    
using namespace std;

int main () 
{
  int myints[] = {1,2,3};
  int n=sizeof(myints)/sizeof(myints[0]);
  int idx=1;
  sort(myints,myints+n);
  cout << "The possible permutations:"<<endl;
  do 
  {
  	cout<<"---------"<<endl;
  	cout<<"the "<<idx<<" th solution:"<<endl;
    for(int i=0;i<n;i++)
    {
    	cout<<myints[i];
    }
    cout<<endl;
    cout<<"---------"<<endl;
    idx++;
  } while ( std::next_permutation(myints,myints+n) );

  cout << "After loop: "<<endl';
  cout<<"The array is:"<<endl;
  cout<<"the "<<idx<<" th solution:"<<endl;
  for(int i=0;i<n;i++)
  {
    	cout<<myints[i];
  }
  cout<<endl;

  return 0;
}
