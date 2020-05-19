#include <iostream>
#include <cmath>
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
string changeC2N(string str)
{
    int i = 0;
    string s;
    while (str[i])
    {
        switch (str[i])
        {
        case 'A':
            s = s + '1';
            break;
        case 'T':
            s = s + '2';
            break;
        case 'G':
            s = s + '3';
            break;
        case 'C':
            s = s + '4';
            break;
        default:
            break;
        }
        i++;
    }
    return s;
}
int **change2M(string str)
{
    int i, j,
        n = str.length();
    int **arr = new int *[n];
    for (i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (j = 0; j < n; j++)
        {
            // cout << a[i] << a[j] << " : ";
            cout << camp(str[i], str[j]) << " ";
            arr[i][j] = camp(str[i], str[j]);
        }
        cout << endl;
    }
    return arr;
}
double dSL(int **a, int **b, int m, int n)
{
    double res;
    int sum = 0;
    if (m == n)
    {
        cout << "if two string length is equal,this is the end" << endl;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                sum += pow(abs(a[i][j] - b[i][j]), 2);
            }
        res = sqrt(sum) / (2 * n * (n - 1));
    }
    else
    {
    }
    return res;
}

int main()
{
    int n, i, j;
    string str1, str2;
    cout << "print str1:";

    cin >> str1;
    // str1 = "GCTA";
    // str2 = "ATGC";
    cout << "print str2:";
    cin >> str2;
    // cout << str1 << "\t" << changeC2N(str1) << "\t" << str1.length() << endl;
    cout << "A 矩阵结果" << endl;
    int **a = change2M(changeC2N(str1));
    cout << "B 矩阵结果" << endl;
    int **b = change2M(changeC2N(str2));
    // cout << a[2][3] + a[1][3] << endl;
    // cout << abs(-90) << endl;

    cout << dSL(a, b, str1.length(), str2.length()) << endl;

    return 0;
}