#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, ".1251");

	/*1. Дано час(години, хвилини, секунди).Знайти скільки секунд пройшло від початку доби.
	Використати у програмі константи.*/



	/*int const min_in_hour = 60, sec_in_min = 60;
	int hour1, min1, sec1 , res;

	cout << "Введiть години: ";
	cin >> hour1;

	cout << "Введiть хвилини: ";
	cin >> min1;

	cout << "Введiть секунди : ";
	cin >> sec1;

	res = hour1 * min_in_hour*sec_in_min + min1 *sec_in_min +sec1;

	cout << "Секунди: " << res << endl;*/





	/*2. Дано суму у гривнях.Вивести грошовий еквівалент у
	доларах
	євро
	злотих(чи ін.)
	Використати у програмі константи.
	Виводити для грошових сум 2 знаки після десяткової крапки.*/




	/*const float dollar = 26.74f, euro = 31.39f, rubli = 2.17f;
	int uah;
	double  usd, eur, rub;
	cout << "Введіть гривні: ";
	cin >> uah;

	usd = uah / dollar;
	eur = uah / euro;
	rub = uah * rubli ;

	cout << "USD = " << fixed << setprecision(2) << usd << '\n';
	cout << "EURO = " << fixed << setprecision(2) << eur << '\n';
	cout << "RUB = " << fixed << setprecision(2) << rub << '\n';*/





	/*3. "Квитки".Є три цінові зони   місць у театрі(кінотеатрі, стадіоні чи ін.).
	Наприклад, квитки з 1 - ї зони коштують 200 грн, з 2 - ї - 150 грн, з 3 - ї - 80 грн.
	Програма запитує у користувача скільки той хоче купити квитків з кожної зони.
	Програма виводить суму у грн.по замовлених китках з кожної зони у вигляді
	1 зона :  2 квитки по 200 грн = 400 грн.
	і т.д.
	Програма виводить загальну суму(усіх білетів).
	Програма запитує у покупця гроші до оплати і "видає" здачу.*/



	const int gate1 = 70, gate2 = 80, gate3 = 90;
	int Gate1, Gate2, Gate3, res, resgate1, resgate2, resgate3, oplata, zdacha;

	cout << "Зона 1 = " << gate1 << " гривень" << endl;
	cout << "Зона 2 = " << gate2 << " гривень" << endl;
	cout << "Зона 3 = " << gate3 << " гривень" << endl;

	cout << "Кількість білетів з зони 1:  " << endl;
	cin >> Gate1;
	cout << "Кількість білетів з зони 2: " << endl;
	cin >> Gate2;
	cout << "Кількість білетів з зони 3: " << endl;
	cin >> Gate3;

	resgate1 = Gate1 * gate1;
	resgate2 = Gate2 * gate2;
	resgate3 = Gate3 * gate3;


	cout << "Ти купив з зони 1  " << Gate1 << " квитка(-ів) вони коштують " << resgate1 << " гривень" << endl;
	cout << "Ти купив з зони 2  " << Gate2 << " квитка(-ів) вони коштують " << resgate2 << " гривень" << endl;
	cout << "Ти купив з зони 3  " << Gate3 << " квитка(-ів) вони коштують " << resgate3 << " гривень" << endl;

	res = resgate1 + resgate2 + resgate3;

	cout << "Вся сума дорівнює = " << res << endl;
	cout << "Оплатіть: " << endl;
	cin >> oplata;


	zdacha = oplata - res;
	cout << "Ваша здача = " << zdacha << " гривень(-ні) " << endl;



	system("pause");
	return 0;
}
