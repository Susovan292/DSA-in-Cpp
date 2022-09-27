#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target){
        return i;
    }
  }
  return -1;
}

int main() {
  // write your code here

  int myarr[6] = {0, 4, 5, 2, 7, 8};

  cout << "Enter a key to search : ";
  int key;
  cin >> key;
  cout << endl;

  int index = linear_search(myarr, 6, key);
  if (index >= 0) {
    cout << "found " << key << " at index " << index << endl;
  } else {
    cout << "key not found" << endl;
  }
  return 0;
}