#include<iostream>
using std::cin; using std::cout;
using std::endl;

// Swap the number
void swap(int &a, int &b);
// Sort the array in descending way
void optimised_bubble_sort_descending(int amount, int array[]);

int main() {

  int amount;
  cin >> amount;

  // Use range base to read in numbers
  int array[amount];
  for (auto &i: array) {
    cin >> i;
  }

  // Sort the array
  optimised_bubble_sort_descending(amount, array);

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

void optimised_bubble_sort_descending(int amount, int array[]) {

  for (int i = amount - 2; i >= 0; --i)

    // Use flag to check if the array had already sorted
    int flag = 0;

    for (int j = 0; j <= i; ++j) {

      // Check whether the number need to change
      if (array[j] < array[j + 1]) {
        swap(array[j], array[j + 1]);
        flag = 1;
      }

    }

    (flag == 0)? break : continue;

}
