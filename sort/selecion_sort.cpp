#include<iostream>
using std::cin; using std::cout;
using std::endl;

// Swap the number
void swap(int &a, int &b);
// Find the max number index
int find_max_index(int amount, int* ptr);
// Sort the array in descending way
void selection_sort_descending(int amount, int array[]);

int main() {

  int amount;
  cin >> amount;

  // Use range base to read in numbers
  int array[amount];
  for (auto &i: array) {
    cin >> i;
  }

  // Sort the array
  selection_sort_descending(amount, array);

  // Use range base to print the number in array
  for (auto i: array) {
    cout << i << " ";
  }

  // Release the buffer
  cout << endl;

}

void swap(int &a, int &b) {

  // Use call by reference to swap the number
  int temp = a;
  a = b;
  b = temp;

}

int find_max_index(int amount, int* ptr) {

  // Record the max number
  int *test = ptr;
  // Record the max number index
  int temp = ptr[0];

  for (int i = 1; i < amount; ++i) {
    // Check if the number is smaller than the min number so far
    if (*(ptr + i) > temp) {
      temp = *(ptr + i);
      test = ptr + i;
    }
  }

  // Return the index
  return test - ptr;

}

void selection_sort_descending(int amount, int array[]) {

  // Use loop to record the position and check until the second to last number
  for (int i = 0; i < amount - 1; ++i) {

    // Find the max number of the remain array
    int max_index = find_max_index(amount - (i + 1), array + (i + 1));

    // Check whether the position need to change
    if (array[max_index + (i + 1)] > array[i]) {    //  Plus 1 to ensure the number is at the right of the target number
      swap(array[max_index + (i + 1)], array[i]);
    }
  }

}
