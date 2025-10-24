#include <iostream>
#include <cmath>
#include "class.h"


two_dim::two_dim(double x,double y)
	{
		x_dim=x;
		y_dim=y;
	}
double two_dim::get_x()	{ return x_dim;}
double two_dim::get_y()	{ return y_dim;}
void two_dim::set_x(double x)	{x_dim=x;}
void two_dim::set_y(double y)	{y_dim=y;}

double dist(two_dim p1, two_dim p2)
{
	return sqrt(fabs(((p1.get_x() - p2.get_x())*(p1.get_x()-p2.get_x()))+((p1.get_y()-p2.get_y())*(p1.get_y()-p2.get_y()))));
}

vector::vector(two_dim first,two_dim last)
{
	init_p=first;
	last_p=last;
}
		double vector::magnitude()
		{
			return dist(init_p,last_p);
		}
		double vector::operator* (vector &other) //Bu çarpım skaler (Yanlış hatırlamıyorsam) çarpımdır. 
						       //Vektörel çarpım için 3 boyutlu bir sistem gerekir.
						       //Bu da başka bir commit'in konusu olsun.
		{
			double fir_x	=   last_p.get_x()-init_p.get_x();
			double oth_x	=	(other.last_p).get_x()-(other.init_p).get_x();
			double fir_y	=	last_p.get_y()-init_p.get_y();
			double oth_y	=	(other.last_p).get_y()-(other.init_p).get_y();
			return fir_x*oth_x+fir_y*oth_y;
		}



