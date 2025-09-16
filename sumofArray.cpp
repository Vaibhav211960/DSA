#include <iostream>
using namespace std;
int sumOfArray(int arr[], int size) {
    int sum = 0;
    if(size <= 0) {
        return sum;
    }
    return arr[size-1] + sumOfArray(arr, size - 1);
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << sumOfArray(arr,size);
}
