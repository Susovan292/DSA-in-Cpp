#include<iostream>
using namespace std;

void showArr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i] <<  " ";
    }cout << endl;
}

int binarySearch(int arr[], int size, int target){

    int first = 0;
    int last = size-1;
    int mid = (first + (last-first)/2);

    while(first<=last){

        if (arr[mid] == target){
            return mid; 
        }else if (arr[mid] < target){
            first = mid+1;
        }else if (arr[mid] > target){
            last = mid-1;
        }
        mid = (first + (last-first)/2); // chalakk method

    }
    return -1;
}

int main(){
    // write your code here.
    cout << "Hello, world!!! " << endl;
    int myarr[15] = {2, 10, 13, 16, 18, 25, 31, 40, 56, 71, 89, 95, 99, 105, 110};
    showArr(myarr, 15);

    // binary search
    int key;
    cout << "Enter a key to search : ";
    cin >> key;

    int index = binarySearch(myarr, 15, key);
    cout << index << endl;
    if (index>=0){
        cout << "Found " << key << " at index " << index << endl;
    }else{
        cout << "key not found " << endl;
    }
    return 0;
}

