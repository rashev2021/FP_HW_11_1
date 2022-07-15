
#include <iostream>
#include <Windows.h>

using namespace std;

void Result(int num, int enter) {

	int result = num * enter;
	cout << endl << " Результат: " << result << endl;
}
int Summa(int a, int b) {
	
	return a + b;
}
void Cart(int a) {
	cout << " Карта " << a;
}
void Number() {
	int a, b, c, d, e, f;
	cout << " Введите шесть цифр: \n";
	cin >> a >> b >> c >> d >> e >> f;
	int sum = a + b + c;
	int sum2 = d + e + f;
	if (sum == sum2) {
		cout << " Число " << a << b << c << d << e << f << " является счастливым" << endl;
	}
	else {
		cout << " Число " << a << b << c << d << e << f << " несчастливое" << endl;
	}

}



int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
  
	
	//Задание 1
	/*
	int num, enter;
	cout << " Введите число которое нужно возвести: ";
	cin  >> num;
	cout << " Введите число на которое нужно возвести: ";
	cin >> enter;

	Result(num, enter);*/

	//Задание 2
	/*
	int res = Summa(2, 5);
	cout << res;*/

	//Задание 3

	//Задание 4
	/*
	
	Cart(2);*/

	//Задание 5
	/*
	
	Number();*/

}

