#include<iostream>

using std::cin; using std::cout;
using std::endl;


inline int linear_sort(int key, int amount, int array[]);

int main() {
  int amount;
  cin >> amount;

  int array[amount];
  // Using range base to read in numbr to array
  for (auto &i: array) {
    cin >> i;
  }

  int key;
  cin >> key;

  // Search the key by linear sort
  int result = linear_sort(key, amount, array);

  // Check the answer and response to user
  (result != -1)? (cout << "Find " << key << " at index " << result << endl) : (cout << key << " not found" << endl);
}


int linear_sort(int key, int amount, int array[]) {
  for (int i = 0; i < amount; ++i) {
    if (key == array[i]) {

      // return the index
      return i;
    }
  }

  // Return -1 if key not found
  return -1;
}
