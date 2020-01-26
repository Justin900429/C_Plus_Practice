#include<iostream>
#include<algorithm>

using std::cin; using std::cout;
using std::endl;
using std::sort; using std::binary_search;

int main() {
  int amount;
  cin >> amount;

  int array[amount];
  for (auto &i: array) {
    cin >> i;
  }

  // Sort the array first before implement the binary search
  sort(array, array + amount);

  int key;
  cin >> key;

  if (binary_search(array, array + amount, key)) {
    cout << key << " found!" << endl;
  } else {
    cout << key << " not found!" << endl;
  }
}
