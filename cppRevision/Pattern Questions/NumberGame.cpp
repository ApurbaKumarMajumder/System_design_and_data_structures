// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        for (int j = x - i + 1; j >= 1; j--)
        {
            cout << i << "  ";
        }
        cout << "\n";
    }
}