#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter first number"<<endl;
	cin>>a;
	cout<<"Enter second number"<<endl;
	cin>>b;
	if(a>b)
	{
		cout<<"Num one is greater"<<endl;
	}
	else if (b>a)
	{
		cout<<"Num two is greater"<<endl;
	}
	else
	{
		cout<<"Both are equal"<<endl;
	}
}
