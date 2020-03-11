#include <bits/stdc++.h>
using namespace std;
int f(int n, int m)
{
	if (n == 1)
		return n;
	else
	{
		return (f(n - 1, m) + m - 1) % n + 1;
	}
}
int main()
{
	int n, k;
	cin >> n >> k;
	cout << f(n, k) << endl;
	int a[5] = {1, 2, 3, 3, 1};
	int temp = a[0];
	for (int i = 1; i < 5; i++)
		temp = temp ^ a[i];
	cout << temp << "\n";

	return 0;
}