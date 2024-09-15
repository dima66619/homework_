//1 question

#include <iostream>

using namespace std;

int main() {

	int a, b, * ptr_a, * ptr_b;

	cout << "Enter two numbers: ";

	cin >> a >> b;


	ptr_a = &a;

	ptr_b = &b;


	if (*ptr_a > *ptr_b) {

		cout << " first number whats equal:" << *ptr_a << ", greater than second" << endl;

	}
	else {
		cout << " second number whats equal:" << *ptr_b << ", greater than first" << endl;

	}

	return 0;

}