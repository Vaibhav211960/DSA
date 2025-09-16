#include <iostream>
using namespace std;
int printReverse(int n) {
    if(n <= 0) {
        return n;
    }
    cout << n << " ";
    return printReverse(n - 1);
}

int main(){
    int n;
    cout << "enter a number: ";
    cin >> n;
    printReverse(n);
}
