//Voloshin AO
//Task 1
//09.10.2022
#include <iostream>
using namespace std;
int main() {
	int A, fd, sd;
	cin >> A;
	fd = A % 10;
	sd = A / 10;
	fd *= 10;
	cout << fd + sd;
}