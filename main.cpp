//1 task

//#include <iostream>

//using namespace std;

//int main() {

	//int a, b, * ptr_a, * ptr_b;

	//cout << "Enter two numbers: ";

	//cin >> a >> b;


	//ptr_a = &a;

	//ptr_b = &b;


	//if (*ptr_a > *ptr_b) {

		//cout << " first number whats equal:" << *ptr_a << ", greater than second" << endl;

	//}
	//else {
		//cout << " second number whats equal:" << *ptr_b << ", greater than first" << endl;

	//}

	//return 0;

//}

//2 task
//#include <iostream>

//int main() {

	//int num;

	//std::cout << "Enter a number: ";

	//std::cin >> num;

	//if (*(&num) < 0) {

		//std::cout << "The number is negative." << std::endl;

	//}

	//else if (*(&num) > 0) {

		//std::cout << "The number is positive." << std::endl;

	//}

	//else {

		//std::cout << "The number is zero." << std::endl;

	//}

	//return 0;

//}
// task 3
//#include <iostream>
//using std::cout;
//using std::cin;
//
//int main() {
//
//	int input1, input2, cont1, cont2;
//
//	cout << "Enter a first and second message ";
//
//	cin >> input1 >> input2;
//
//	cont1 = (*(&input1));
//
//	cont2 = (*(&input2));
//
//	input2 = (*(&cont1));
//
//	input1 = (*(&cont2));
//
//	cout << "input1:" << input1 << "input2:" << input2;
//
//	return 0;
//
//}
//task 4
//#include <iostream>
//using std::cout;
//using std::cin;
//
//int main() {
//	char oper;
//	int num1, num2;
//	cout << "Enter first,second number and oper";
//	cin >> num1 >> num2 >> oper;
//	switch (oper) {
//	case '+':
//		cout << num1 << " + " << num2 << " = " << num1 + num2;
//		break;
//
//
//	case '-':
//		cout << num1 << " - " << num2 << " = " << num1 - num2;
//		break;
//
//	case '*':
//		cout << num1 << " * " << num2 << " = " << num1 * num2;
//		break;
//
//	case '/':
//		cout << num1 << " / " << num2 << " = " << num1 / num2;
//		break;
//	}
//}
