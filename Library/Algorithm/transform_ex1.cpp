#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void PrintVector(vector<int> vec1)
{
	for(int i=0;i<vec1.size();i++)
	{
		cout<<vec1[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	vector<int> T,X,Y;
	X.clear();
	Y.clear();
	for(int i=0;i<10;i++)
	{
		X.push_back(i*i);
		Y.push_back(50+i*10);
	}
	T.resize(X.size());
	transform(X.begin(),X.end(),Y.begin(),T.begin(),plus<int>());
	
	cout<<"X="<<endl;
	PrintVector(X);
	cout<<"Y="<<endl;
	PrintVector(Y);
	cout<<"T="<<endl;
	PrintVector(T);
	
	
	return 0;
}
