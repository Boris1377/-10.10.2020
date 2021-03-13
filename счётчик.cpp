#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class counter {
private:
	int a = 0;
public:
	int	GetA() {
		return a;
	}

	void SetA(int valueA) {
		a = valueA;
	}

	void upA() {
		a++;
	}

	void downA() {
		a--;
	}

	void PrintA() {
		cout << "a = " << a;
	}

};


int main() {

	setlocale(LC_ALL, "ru");


	counter value;
	int valueProfil = 0;

	cout << "Введите значение счётчика от 0 до 9 : ";
	
	while (true) {
		cin >> valueProfil;
		cout << endl;
	if (valueProfil >= 0 && valueProfil <= 9) {
		value.SetA(valueProfil);
		break;
	}
	else{
		cout << "Недопустимое значение, повторите попытку : ";
	}

}

	value.PrintA();
	cout << endl;
	cout << "Чтобы увеличить введите +, чтобы уменьшить введите -, чтобы выйти введите stop";
	cout << endl;

	while (true) {
		string operation;
		cin >> operation;
		if (operation == "+"){
			value.upA();
			value.PrintA();
			cout << endl;
		}

		else if (operation == "-") {
			value.downA();
			value.PrintA();
			cout << endl;
		}
		else if (operation == "stop") {
			break;
		}
		else
		{
			cout << "Недопутимая операция" << endl;
		}
	}

	return 0;
}
