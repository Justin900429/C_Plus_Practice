#include<iostream>

int main() {
  int **array;

  array = new int*[3];

  for (int i = 0; i < 3; ++i) {
    array[i] = new int[4];
  }

  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 4; ++j) {
      std::cin >> array[i][j];
    }
  }
  
  // Change row
  int *p = array[1];
  array[1] = array[2];
  array[2] = p;

  // Change column
  for (int i = 0; i < 3; ++i) {
    int temp = array[i][2];
    array[i][2] = array[i][3];
    array[i][3] = temp;
  }

  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 4; ++j) {
      std::cout << array[i][j] << " ";
    }

    std::cout << std::endl;
  }

  for (int i = 0; i < 3; ++i) {
    delete[] array[i];
  }

  delete[] array;
}
