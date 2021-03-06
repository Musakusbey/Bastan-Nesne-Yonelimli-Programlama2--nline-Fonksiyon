#include<iostream>

using namespace std;

inline double kup(const double a)
{
	return a*a*a;
}

int main ()
{
	double b;
	
	cout<<"lutfen kupun bir kenarini giriniz:";
	
	cin>>b;
	
	cout<<"Hacim:"<<kup(b);
	
	return 0;
}
