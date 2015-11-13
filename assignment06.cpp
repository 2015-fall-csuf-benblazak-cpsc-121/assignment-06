/*-----------------------------------------------------------------------
 *              Name: Thanh Phan
 *              Course: CPSC 121, Tue Lab
 *              Professor: Ben Blazak
 * -----------------------------------------------------------------------*/
/* -----------------------------------------------------------------------
 * Copyright &copy; 2015 Thanh Phan <tphan2650@gmail.com
 * Released under the [MIT License] (http://opensource.org/
 * licenses/MIT)
 * -----------------------------------------------------------------------*/
#include <iostream>
using std::cout;
using std::endl;

//Selection Sort
void print_array(int arr_size, const int array[])
{	
	cout << "(";

	for(int i=0;i<arr_size;i++)
	{
		cout << array[i];
	}

	cout << ")";
}

void selection_sort_in_place(int arr_size, int array[])
{
	int i,j,k;
	int min;

	for(i=0;i<arr_size-1;i++)
	{
		k=i; min=array[k];
		for (j=i+1;j<arr_size;j++)
			if (array[j]< min)
			{
				k=j; min=array[k];
			}
			array[k]=array[i]; array[i]=min;
	}
}

void merge_sort(); //TODO

int main()
{
int arrays[5][7] = {
   { 1, 2, 3, 4, 5, 6, 7 },
   { 22, 1, 63, 67, 11, 17, 12, },
   { 45, 53, 64, 7, 25, 79, 54, },
   { 34, 21, 35, 84, 16, 10, 36, },
   { 41, 2, 85, 94, 69, 9, 92, },
};

for (int i = 0; i < 5; i++) {
   print_array(7, arrays[i]);
   cout << endl;

   selection_sort_in_place(7, arrays[i]);

   print_array(7, arrays[i]);
   cout << endl;

   cout << endl;
	};
}