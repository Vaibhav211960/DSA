#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int digit[] = {9, 9, 9, 9, 9, 9};
    int n = sizeof(digit) / sizeof(digit[0]);

    if (digit[n - 1] == 9)
    {
        digit[n - 1] = 0;
        digit[n - 2] += 1;
        for (int i = n - 2; i != 0; i--)
        {
            if (digit[i] == 10)
            {

                digit[i] = 0;
                digit[i - 1] += 1;
            }
            cout <<i;
            cout <<endl;
        }
    }
    else
    {
        digit[n - 1] += 1;
    }
    for(int i=0 ; i!=n; i++){
        cout << digit[i];
    }

    return 0;
}
