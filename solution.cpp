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

void selection_sort_in_place(int size, int array[])
{
    for (int currentIndex = 0; currentIndex < size - 1; currentIndex++)
    {
        int minIndex = currentIndex + 1;
        int minValue = array[minIndex];
            
        for (int i = currentIndex + 1; i < size; i++){
                        
                    if (array[i] < minValue){
                                minValue = array[i];
                                minIndex = i;
                    }
        }
                
        if (minValue < array[currentIndex]){
            int temp = array[currentIndex];
                    array[currentIndex] = array[minIndex];
                    array[minIndex] = temp;
        }
    }
}
