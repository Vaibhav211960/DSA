// leetcode 26 problem of array

#include <iostream>
#include <vector>

using namespace std;
int removeDuplicates(vector<int>& arr, int n){
        vector<int> temp;
        temp.push_back(arr[0]);
        int k = 1;
        for(int i=1; i!=n ; i++){
            if(arr[i] == arr[i-1]){
                continue;
            }
            else{
                temp.push_back(arr[i]);
                k++;
            }
        }

        for(int i=0 ; i!=k; i++){
            arr[i] = temp[i];
        }
        return k;
    }
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for(int i=0; i != n; i++){
        cin >> arr[i];
    }

    int k = removeDuplicates(arr, n);

    cout << "The array after removing duplicates is: ";
    for(int i=0; i!=k; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "The size of array after removing duplicates is: " << k << endl;
    return 0;

}
