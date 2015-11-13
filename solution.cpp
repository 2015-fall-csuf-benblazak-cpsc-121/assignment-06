/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 James Mabe <jamespmabe@gmail.com>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * A short program to print "Hello World!" to standard output.
 */

#include <iostream>
using std::cout;
using std::endl;

void print_array(int i, const int a[]);
void selection_sort_in_place(int size, int array[]);

int main(){
    
    int a[7] = { 1, 2, 3, 4, 5, 6, 7, };
    print_array(7,a);
    cout << endl;
    
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
    }
}

void print_array(int i, const int a[]){
    cout << "( ";
    
    for (int j = 0; j < i; j++){
        cout << a[j] << " ";
    }
    cout << ")";
}
// code referenced from <http://cforbeginners.com/ssort.html>
void selection_sort_in_place(int n, int arr[])
{
    //pos_min is short for position of min
	int pos_min,temp;
    
	for (int i=0; i < n-1; i++)
	{
	    pos_min = i;//set pos_min to the current index of array
		
		for (int j=i+1; j < n; j++)
		{
            
            if (arr[j] < arr[pos_min])
                pos_min=j;
            //pos_min will keep track of the index that min is in, this is needed when a swap happens
		}
		
        //if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
        if (pos_min != i)
        {
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
        }
	}
}
