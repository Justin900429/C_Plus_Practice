#include<iostream>
#include<string>

// template for swap the single
template<typename T>
void swap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

// Template for swap the array
template<typename T>
void swap(T a[], T b[], int size) {
  // Change the element inside array
  for (int i = 0; i < size; ++i) {
    T temp = a[i];
    a[i] = b[i];
    b[i] = temp;
  }
}

int main() {
  std::string name1 = "Betty";
  std::string name2 = "Coco";

  swap(name1, name2);
  std::cout << name1 << " " << name2 << std::endl;

  int array1[] = {1, 2, 3, 4, 5};
  int array2[] = {5, 4, 3, 2, 1};

  swap(array1, array2, 5);
  for(auto i: array1) {
    std::cout << i << " ";
  }

  std::cout << std::endl;

  for (auto i: array2) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
}
