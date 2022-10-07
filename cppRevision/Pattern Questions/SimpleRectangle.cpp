/ *****
// *****
// *****
// *****
// *****

#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows: \n";
    cin >> rows;
    cout << "Enter the number of columns: \n";
    cin >> cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}