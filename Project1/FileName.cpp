#include <iostream>
#include <cmath>
using namespace std;
int fact(int n1)
{
	if (n1 <= 1) return 1;
	else
		return (n1 * fact(n1 - 1));
}
int main(void)
{
	system("chcp 1251>null");
	int n;
	cout << "¬ведите целое число: " << endl;
	cin >> n;
	if (n < 0)
		cout << "ќшибка";
	else
		cout << n << "!=" << fact(n) << endl;
	return 0;
	system("pause");
}