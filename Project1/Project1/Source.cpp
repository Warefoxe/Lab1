#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, ".1251");

	/*1. ���� ���(������, �������, �������).������ ������ ������ ������� �� ������� ����.
	����������� � ������� ���������.*/



	/*int const min_in_hour = 60, sec_in_min = 60;
	int hour1, min1, sec1 , res;

	cout << "����i�� ������: ";
	cin >> hour1;

	cout << "����i�� �������: ";
	cin >> min1;

	cout << "����i�� ������� : ";
	cin >> sec1;

	res = hour1 * min_in_hour*sec_in_min + min1 *sec_in_min +sec1;

	cout << "�������: " << res << endl;*/





	/*2. ���� ���� � �������.������� �������� ��������� �
	�������
	����
	������(�� ��.)
	����������� � ������� ���������.
	�������� ��� �������� ��� 2 ����� ���� ��������� ������.*/




	/*const float dollar = 26.74f, euro = 31.39f, rubli = 2.17f;
	int uah;
	double  usd, eur, rub;
	cout << "������ �����: ";
	cin >> uah;

	usd = uah / dollar;
	eur = uah / euro;
	rub = uah * rubli ;

	cout << "USD = " << fixed << setprecision(2) << usd << '\n';
	cout << "EURO = " << fixed << setprecision(2) << eur << '\n';
	cout << "RUB = " << fixed << setprecision(2) << rub << '\n';*/





	/*3. "������".� ��� ����� ����   ���� � �����(��������, ������ �� ��.).
	���������, ������ � 1 - � ���� �������� 200 ���, � 2 - � - 150 ���, � 3 - � - 80 ���.
	�������� ������ � ����������� ������ ��� ���� ������ ������ � ����� ����.
	�������� �������� ���� � ���.�� ���������� ������ � ����� ���� � ������
	1 ���� :  2 ������ �� 200 ��� = 400 ���.
	� �.�.
	�������� �������� �������� ����(��� �����).
	�������� ������ � ������� ����� �� ������ � "����" �����.*/



	const int gate1 = 70, gate2 = 80, gate3 = 90;
	int Gate1, Gate2, Gate3, res, resgate1, resgate2, resgate3, oplata, zdacha;

	cout << "���� 1 = " << gate1 << " �������" << endl;
	cout << "���� 2 = " << gate2 << " �������" << endl;
	cout << "���� 3 = " << gate3 << " �������" << endl;

	cout << "ʳ������ ����� � ���� 1:  " << endl;
	cin >> Gate1;
	cout << "ʳ������ ����� � ���� 2: " << endl;
	cin >> Gate2;
	cout << "ʳ������ ����� � ���� 3: " << endl;
	cin >> Gate3;

	resgate1 = Gate1 * gate1;
	resgate2 = Gate2 * gate2;
	resgate3 = Gate3 * gate3;


	cout << "�� ����� � ���� 1  " << Gate1 << " ������(-��) ���� �������� " << resgate1 << " �������" << endl;
	cout << "�� ����� � ���� 2  " << Gate2 << " ������(-��) ���� �������� " << resgate2 << " �������" << endl;
	cout << "�� ����� � ���� 3  " << Gate3 << " ������(-��) ���� �������� " << resgate3 << " �������" << endl;

	res = resgate1 + resgate2 + resgate3;

	cout << "��� ���� ������� = " << res << endl;
	cout << "�������: " << endl;
	cin >> oplata;


	zdacha = oplata - res;
	cout << "���� ����� = " << zdacha << " �������(-�) " << endl;



	system("pause");
	return 0;
}
