#include <iostream>
using namespace std;

class intcell
{
	public:
		intcell()
		{
			stored=0;
		}
		intcell(int init)
		{
			stored=init;
		}
		int read()
		{
			return stored;
		}
		void write(int new_one)
		{
			stored=new_one;
		}

	private:
		int stored;
};

int main()
{
	int input;
	intcell m1;
	intcell m2(9);
	intcell *m3;
	m3= new intcell(39);
	cout<<"m1 için sayı girin: "<<endl;
	cin>>input;
	m1.write(input);
	cout<<"m1 -> "<<m1.read()<<endl<<"m2-> "<<m2.read()<<endl<<"m3 -> "<<m3->read()<<endl;
	return 0;
}

