#include <iostream>
#include <cmath>
#include "class.h"
using namespace std;
int main()
{
	cout<<"İki nokta için 4 tane değer istiyorum:"<<endl;
	double x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	two_dim p1(x1,y1),p2(x2,y2);
	vector v1(p1,p2);
	cout<<"Vektör büyüklüğü-> "<<v1.magnitude()<<endl;
	two_dim p3,p4(2,2);
	vector v2(p3,p4);
	cout<<"Şimdi sana <2,2> vektörüyle olan skaler çarpımı vereceğim: "<< v1*v2<<endl;
	return 0;
}

