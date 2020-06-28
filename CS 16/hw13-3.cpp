#include <ctime> 
#include <cstdlib>  // for srand
#include <ctime>  // for time
#include <iostream> // for cout/cin
using namespace std; 

void sort(int a[], int size);                   // Sorting by selection
int find_next_smallest(int a[], int x, int y);  // Find the next smallest value. Used in sort()
void swap_values(int& v1, int& v2);             // Swap values in array. Used in sort()
void show_array(int a[], int size);             // Print out array. Used in main( )


int main() { 
  const int elements(10000);
  int arr[elements];
  srand (time(NULL));

  for (int i = 0; i < elements; i++) {
    arr[i] = rand() % 999;
  }

  cout << "Unsorted Array: \n";
  show_array(arr, elements);
  
  sort(arr, elements);

  cout << "Sorted Array: \n";
  show_array(arr, elements);
  
  return 0;
}

void sort(int a[], int size) {
    int next_smallest_position;

    for (int index = 0; index < size - 1; index++) {

      next_smallest_position = find_next_smallest(a, index, size);

      swap_values(a[index], a[next_smallest_position]);
    }
 }

int find_next_smallest(int a[], int start_index, int size) {
    
    int min = a[start_index],   index_of_min = start_index;
    
    for (int index = start_index + 1;   index < size;   index++) {
      if (a[index] < min) {
	min = a[index];
	index_of_min = index; }
    }
    return index_of_min;
 }

void swap_values(int &v1, int &v2) {
    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
  }

void show_array(int a[], int size) {
    for (int i = 0 ; i < size ; i++)
      cout << "numbers[" << i << "] = " << a[i] << endl;
    cout << endl;
  }
