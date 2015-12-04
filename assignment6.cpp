/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 Ben Blazak <bblazak@fullerton.edu>
                        Samir Mandal<mandalsamir@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 This program will sort a given list using SELECT SORT algorithm
 * ------------------------------------------------------------------------- */


#include <iostream>
using namespace std;

void print_array(size, arr[]);
void select_sort(size, arr[]);

int main(){
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
return 0;
}

//Function to print array
void print_array(size, arr[]){
  cout << "(";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    cout << ")";
}

//Function for Selection sort algorithm

void select_sort(size, arr[]){

  for ( int i=0; i < size; i++){
      int min =i;//set first index as the minimum index
  
  //compare given element in index "min" with other elements in array
        for ( int j=i; j < size; j++){
          if (arr[min] > arr[j]){
          min = j;
          }
  
  //swap the elements to move minimum element to the left side of array
  
      int temp = arr[min];
      arr[min = arr[j];
      arr[j] = temp;
  }
  }
  
