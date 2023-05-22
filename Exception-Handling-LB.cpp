#include<iostream>
#include<string.h>

using namespace std;

main()
{
	int x,y,z;
	char solution;
	x=10;
	y=2;
	
	try
	{
	if (y==0)
	{
		throw solution; 
	}
	else
	{
		z=x/y;
		cout<<"Z="<<z<<endl;
	}
    }
	catch (char n)
	{
		cout<<"Value can not divide by zero";
	}
	return 0;
}
