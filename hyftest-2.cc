#include <iostream>
using namespace std;
int camp(int a, int b)
{
    if (a > b)
        return 1;
    if (a < b)
        return -1;
    else
        return 0;
}
int main()
{
    int n, i, j;
    cout << "print n:";
    cin >> n;
    int *a = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        // cout << a[i];
    }
    // cout << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // cout << a[i] << a[j] << " : ";
            cout << camp(a[i], a[j]) << " ";
        }
        cout << endl;
    }

    return 0;
}