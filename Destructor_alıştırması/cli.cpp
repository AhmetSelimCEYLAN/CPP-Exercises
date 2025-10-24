#include <iostream>
#include "intcell.h"
using namespace std;

int main()
{
	intcell m1(1),m2,*m3;
	m3=new intcell(92);
	cout<<"m1-> "<<m1.read()<<endl<<"m2-> "<<m2.read()<<endl<<"m3-> "<<m3->read()<<endl;
	cout<<"m1'i beğenmedim. Yeni sayı girin:"<<endl;
	int x;
	cin>>x;
	m1.write(x);
	cout<<"Yeni m1-> "<<m1.read()<<endl;
	return 0;
}
