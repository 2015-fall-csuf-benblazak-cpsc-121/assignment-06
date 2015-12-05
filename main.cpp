#include <iostream>
using std::cout;
using std::endl;


//instead of using 2D array, I use 1D array and endl after 7 terms
void print_array(int n, int a[]){
        int multiple = 1;
        for(int i = 0; i < n; i++){
                if(i == multiple*7){
                        cout << endl;
                        multiple++;
                }
                cout << a[i] << " ";
        }
}

void selection_sort(int a[]){
int length = sizeof(a)/sizeof(*a);
int n = 35;
int mult = 1;
while(n < 35){
        for(int i; i < mult * 7; i++){
                int min = i;
                for(int j = i; i < mult * 7; j++){
                        if(a[j] < a[min]){
                                min = j;
                        }
                }

                int temp = a[i];
                a[i] = a[min];
                a[min] = temp;

        }
        mult++;
}

}

int main(){

        //int[5][7] = int[35]
        int a[35] = {
                1,2,3,4,5,6,7,
                22,1,63,67,11,17,12,
                45,53,64,7,25,79,54,
                34,21,35,84,16,10,36,
                41,2,85,94,69,9,92
                };

        print_array(35,a);
        cout << endl << endl;
        selection_sort(a);
        print_array(35,a);
        return 0;
}
       

