/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 Jaemin Jin <jaemin_95@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * Do selection sort and merge sort.
 */

#include <iostream>
#include <algorithm>
#include <vector>
using std::cout;
using std::endl;

void print_array(int, const int[]);
void selection_sort_in_place(int, int[]);
std::vector<int> merge_sort(const std::vector<int> &);

int main()
{
    cout << "Testing Selection Sort \n\n";
    
    int a[7] = { 1, 2, 3, 4, 5, 6, 7, };
    print_array(7,a);                           // print_array
    cout << endl;
    
    // test selection sort
    
    int arrays[5][7] = {
        { 1, 2, 3, 4, 5, 6, 7 },
        { 22, 1, 63, 67, 11, 17, 12, },
        { 45, 53, 64, 7, 25, 79, 54, },
        { 34, 21, 35, 84, 16, 10, 36, },
        { 41, 2, 85, 94, 69, 9, 92, },
    };
    
    for (int i = 0; i < 5; i++) {
        print_array(7, arrays[i]);
        
        selection_sort_in_place(7, arrays[i]);
        
        print_array(7, arrays[i]);
        cout << endl;
    }
    
    // Referenced on a Wikipedia
    cout << "Testing Merge Sort \n\n";
    
    std::vector<int> v{ 1, 2, 3, 4, 5, 6, 7, };
    cout << &v << endl;
    
    merge_sort(v);
    
    // test merge sort
    
    std::vector<int> vectors[] =
    {
        std::vector<int>{ 1, 2, 3, 4, 5, 6, 7 },
        std::vector<int>{ 22, 1, 63, 67, 11, 17, 12, },
        std::vector<int>{ 45, 53, 64, 7, 25, 79, 54, },
        std::vector<int>{ 34, 21, 35, 84, 16, 10, 36, },
        std::vector<int>{ 41, 2, 85, 94, 69, 9, 92, },
    };
    
    for (const std::vector<int> & v : vectors)
    {
        cout << &v << endl;
        cout << merge_sort(v) << endl;
        cout << endl;
    }
    
    return 0;
}

void print_array(int size, const int array[])
{
    for (int count = 0; count < size; count++)
        cout << array[count] << " ";
    cout << endl;
}

// Referenced on textbook, Gaddis.
void selection_sort_in_place(int size, int array[])
{
    int startValue, minIndex, minValue;
    
    for (startValue = 0; startValue < (size - 1); startValue++)
    {
        minIndex = startValue;
        minValue = array[startValue];
        for (int index = startValue + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startValue];
        array[startValue] = minValue;
    }
}

std::vector<int> merge_sort(const std::vector<int> &)
{
    if(std::vector<int> = 1)
    {
        return std::vector<int>
    }
    
    // Referenced on stackoverflow
    std::vector<int> lines;
    std::size_t const half_size = lines.size() / 2;
    std::vector<int> split_lo(lines.begin(), lines.begin() + half_size);
    std::vector<int> split_hi(lines.begin() + half_size, lines.end());
    
    left = merge_sort(std::left);
    right = merge_sort(std::right);
    
    return std::vector<int>;
}
