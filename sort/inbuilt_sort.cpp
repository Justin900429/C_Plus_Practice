#include<iostream>
#include<algorithm>

using std::cin; using std::cout;
using std::endl;

int main() {

  int amount;
  cin >> amount;

  // Use range base to read in numbers
  int array[amount];
  for (auto &i: array) {
    cin >> i;
  }

  // Sort the array
  sort(array, array + amount);

  // Use range base to print the number in array
  for (auto i: array) {
    cout << i << " ";
  }

  // Release the buffer
  cout << endl;

}
