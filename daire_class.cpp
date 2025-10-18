#include <iostream>
#include <cmath>

using namespace std;

class daire
{
	private:
		double x_center;
		double y_center;
		double radius;
	public:
		daire(double x=0,double y=0,double r=0)
		{
			x_center=x;
			y_center=y;
			radius=r;
		}
		daire(const daire &other)
		{
			x_center=other.x_center;
			y_center=other.y_center;
			radius=other.radius;
		}
	


		void set_x(double x)	{x_center=x; cout<<"x "<<x<<" yapıldı"<<endl;}
		double get_x() 		{return x_center;}
		void set_y(double y)    {y_center=y; cout<<"y "<<y<<" yapıldı."<<endl;}
                double get_y()          {return y_center;}
		void set_r(double r)    {radius=r; cout<<"Radius "<<r<<" yapıldı"<<endl;}
                double get_r()          {return radius;}

};

double distance(daire m1, daire m2)
{
	double m1x,m1y,m2x,m2y;
	m1x=m1.get_x();
	m2x=m2.get_x();
	m1y=m1.get_y();
	m2y=m2.get_y();
	return sqrt((m1x-m2x)*(m1x-m2x)+(m1y-m2y)*(m1y-m2y));
}




int main()
{
	double x,y,r;
	cout<<"Lütfen x,y ve r değerierini giriniz"<<endl;
	cin>>x>>y>>r;
	daire m1(x,y,r);
	return 0;
}


			

