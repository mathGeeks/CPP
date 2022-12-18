#include <iostream>
#include <ratio>
using namespace std;

int main ()
{
  typedef std::ratio<1,3> one_third;
  typedef std::ratio<2,4> two_fourths;
  typedef std::ratio_add<one_third,two_fourths> sum;
  typedef std::ratio_subtract<one_third,two_fourths> diff;
  typedef std::ratio_divide<one_third,two_fourths> divi;
  typedef std::ratio_multiply<one_third,two_fourths> mult;
  
  typedef std::ratio_equal<one_third,two_fourths> equ;
  typedef std::ratio_not_equal<one_third,two_fourths> nequ;
  
  typedef std::ratio_less<one_third,two_fourths> les;
  typedef std::ratio_less_equal<one_third,two_fourths> les_equ;
  typedef std::ratio_greater<one_third,two_fourths> gre;
  typedef std::ratio_greater_equal<one_third,two_fourths> gre_equ;
  
  cout << std::boolalpha;
  cout << "one_third= " << one_third::num << "/" << one_third::den << endl;
  cout << "two_fourths= " << two_fourths::num << "/" << two_fourths::den << endl;
  
  cout << "sum= " << sum::num << "/" << sum::den;
  cout << " (which is: " << ( double(sum::num) / sum::den ) << ")" << endl;
  
  cout << "diff= " << diff::num << "/" << diff::den;
  cout << " (which is: " << ( double(diff::num) / diff::den ) << ")" << endl;
  
  cout << "divi= " << divi::num << "/" << divi::den;
  cout << " (which is: " << ( double(divi::num) / divi::den ) << ")" << endl;
  
  cout << "mult= " << mult::num << "/" << mult::den;
  cout << " (which is: " << ( double(mult::num) / mult::den ) << ")" << endl;
  
  cout <<"Is "<< one_third::num << "/" << one_third::den;
  cout <<" equal to " << two_fourths::num << "/" << two_fourths::den <<" ? ";
  cout<<equ::value<<endl;
  
  cout <<"Is "<< one_third::num << "/" << one_third::den;
  cout <<" NOT equal to " << two_fourths::num << "/" << two_fourths::den <<" ? ";
  cout<<nequ::value<<endl;
  
  cout <<"Is "<< one_third::num << "/" << one_third::den;
  cout <<" less than " << two_fourths::num << "/" << two_fourths::den <<" ? ";
  cout<<les::value<<endl;
  
  cout <<"Is "<< one_third::num << "/" << one_third::den;
  cout <<" less than or equal to " << two_fourths::num << "/" << two_fourths::den <<" ? ";
  cout<<les_equ::value<<endl;
  
  cout <<"Is "<< one_third::num << "/" << one_third::den;
  cout <<" greater than " << two_fourths::num << "/" << two_fourths::den <<" ? ";
  cout<<gre::value<<endl;
  
  cout <<"Is "<< one_third::num << "/" << one_third::den;
  cout <<" greater than or equal to " << two_fourths::num << "/" << two_fourths::den <<" ? ";
  cout<<gre_equ::value<<endl;
  
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  
  cout << "1 kilogram has " << ( std::kilo::num / std::kilo::den ) << " grams";
  cout << endl;
  
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  return 0;
}
