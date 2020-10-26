#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (int stars = 1; stars <= (2 * row) - 1; stars++)
        {
            if (stars == 1 || stars == (2 * row) - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int row = n; row >= 1; row--)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (int stars = 1; stars <= (2 * row) - 1; stars++)
        {
            if (stars == 1 || stars == (2 * row) - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}