#ifndef _class_h_
#define _class_h_

class two_dim
{	
	public:
		two_dim(double x=0,double  y=0);
		double get_x();
		double get_y();
		void set_x(double);
		void set_y(double);
	private:
		double x_dim;
		double y_dim;
};
double dist(two_dim,two_dim);
class vector
{
	public:
		vector(two_dim p1,two_dim p2);
		double operator* (vector &other);
		double magnitude();
	private:
		two_dim init_p;
		two_dim last_p;
};
#endif
