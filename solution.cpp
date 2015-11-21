/* ----------------------------------------------------------------------------
 * Copyright & copy; 2015 Matthew Low <mcorelow@csu.fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */
 
 #include <iostream>
 using std::cout;
 using std::endl;
 
 void selection_sort_in_place(int size, int a[]){
	//TODO
 }
 
 void print_array(int size, const int a[]){
	 cout << "( ";
	 for (int i = 0; i < size; i++){
		 cout << a[i] << " ";
	 }
	 cout << ")";
 }
 
 int main(){
	 int a[7] = {1,2,3,4,5,6,7};
	 
	 print_array(7,a);
	 cout << endl;
return 0;
 }
 
 
