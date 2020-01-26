#include<iostream>

using std::cin; using std::cout;
using std::endl;

// Prototype for binary_search
void binary_search(int key, int amount, int array[]);

int main() {
  int amount;
  cin >> amount;

  int array[amount];
  for (auto &i: array) {
    cin >> i;
  }

  int key;
  cin >> key;

  // Using binary_search to search the number
  binary_search(key, amount, array);
}

void binary_search(int key, int amount, int array[]) {
  int start = 0;
  int end = amount - 1;

  // Until the there is no number between start and close
  while (start <= end) {
    // Set the mid value to cut down the number and avoid easy overflow of the number
    int mid = start + (end - start) / 2;

    if (key > array[mid]) {
      // Search the front part
      start = mid + 1;
    }
    else if (key < array[mid]) {
      // Search the back part
      end = mid - 1;
    }
    else {
      cout << "Find " << key << " at index " << mid << endl;
      return;
    }
  }

  cout << key << " not found" << endl;
}
