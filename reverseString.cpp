#include <iostream>
#include <string>

using namespace std;

string reverseString(string str) {
    if(str.size() == 0) {
        return "";
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Reversed string: " << reverseString(str) << endl;
    return 0;
}