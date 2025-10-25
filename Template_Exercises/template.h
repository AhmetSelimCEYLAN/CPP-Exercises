#ifndef _template_h_
#define _template_h_
template <class T>
class array
{
	private:
		int size;
		T init_val;
		T* arr;
	public:
		array();
		array(T* elements,int count);
		array(const array& oth);
		array(int num);
		insert_index(T val,int index);
		append_front(T val);
		double_size();
		~array();
		array* operator=(const array& oth);
		void print_arr();
		array* operator+(const array& oth);
		T get_element(int ind);
		int get_size();
		int get_n();
};
#endif
	

