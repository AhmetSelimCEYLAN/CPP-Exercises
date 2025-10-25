#include <iostream>
#include "template.h"

//arr->array
//size-> size of array
//n-> elements' count



//array() -> Default constructor
//İnitialize arr with size 1, n=0
template <class T>
array<T>::array()
{
	size=1;
	n=0;
	arr=new T[1];
}

//Custom Constructor 1;
//Copy elements to the arr
//size=2*count
//n=count
template <class T>
array<T>::array(T* elements, int count)
{
	size=2*count;
	n=count;
	arr=new T[size];
	for(int i=0; i<count ;i++)
	{
		arr[i]=elements[i];
	}
}

//Copy Constructor
template<class T>
array<T>::array(const array& oth)
{
	size=oth.size;
	n=oth.n;
	arr=new T[size];
	for(int i=0; i<n; i++)
	{
		arr[i]=oth.arr[i];
	}
}


//Custom Constructor 2;
//Make an array with size num
template <class T>
array<T>::array(int num)
{
	size=num;
	n=0;
	arr=new T[num];
}


//İnsert İndex
//Adı üstünde verilen indexe verilen değeri koyar
//Ekleme yapılan yerden sağa doğru elemanları kaydırır.
template<class T>
array<T>::insert_index(










