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

class uclu
{
	public:
	uclu(int ilk=0,int iki=1,int uc=2)
		:first(ilk) , second(iki),third(uc) 
	{
		if (ilk>iki or iki>uc or ilk>uc or ilk<0 or iki<0 or uc<0)
		{
			cout<<"Yanlış girmişsin hacı amca. Her değer default'a döndürülüyor."<<endl;
			first=0;
			second=1;
			third=2;
		}
	} //Buna yapıcı gövdesi deniyormuş. Buradan girdi kontrolü vb. işler yapılabiliyormuş.
	int first;
	int second;
	int third;	
};
int main()
{
	int x,y,z,input;
	intcell m1;
	intcell m2(9);
	intcell *m3;
	m3= new intcell(39);
	cout<<"m1 için sayı girin: "<<endl;
	cin>>input;
	m1.write(input);
	cout<<"m1 -> "<<m1.read()<<endl<<"m2-> "<<m2.read()<<endl<<"m3 -> "<<m3->read()<<endl;

	uclu u2(1,2,3);
	cout<<"Üçlü olsun güçlü olsun diye üç sayı gir:"<<endl;
	cin>>x>>y>>z;
	uclu u1(x,y,z);
	cout<<"u1->"<<u1.first<<" "<<u1.second<<" "<<u1.third<<endl;
	cout<<"u2->"<<u2.first<<" "<<u2.second<<" "<<u2.third<<endl;
	uclu u3(9,12,2);	


	return 0;
}

