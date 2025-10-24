#ifndef _intcell_H_
#define _intcell_H_

class intcell
{
	public:
		intcell(int init=0);
		int read();
		void write(int);
	private:
		int stored;
};
#endif
