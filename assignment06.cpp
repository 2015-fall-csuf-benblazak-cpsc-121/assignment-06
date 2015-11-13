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


//Selection Sort
void print_array(int arr_size, int array[])
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
	for(int i=0;i<arr_size;i++)
	{
		cout << array[i]<<" ";
	}
}

void selection_sort_in_place(); //TODO

void merge_sort(); //TODO

int main()
{
	int a[7] = { 1, 2, 3, 4, 5, 6, 7, };
	print_array(7, a);

}