#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	float num1, num2, num3;
	int choose;
	// Самый дурацкий калькулятор во вселенной
	cout << "Введите 2 числа: ";
	cin >> num1;
	cout << "Введите 2 числа: ";
	cin >> num2;
	cout << "Какую производить операцию??: 1.+|2.-|3./|4.*|";
	cin >> choose;

	switch (choose)
	{
	case 1:
		num3 = num1 + num2;
		cout << num3 << endl;
		break;
	case 2:
		num3 = num1 - num2;
		cout << num3 << endl;
		break;
	case 3:
		num3 = num1 / num2;
		cout << num3 << endl;
		break;
	case 4:
		num3 = num1 * num2;
		cout << num3 << endl;
		break;
	default:
		cout << "Простите но данной операции не существует" << endl;
		break;
		return 0;
	}
}