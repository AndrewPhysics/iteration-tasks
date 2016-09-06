#include "iterationTasks.h"
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
iterationTasks::iterationTasks(){}
iterationTasks::~iterationTasks(){}
int iterationTasks::faktorialFinder(int x){
	int result = 0;
	if (x == 1){result = 1;}
	else { result = faktorialFinder(x - 1)*x;}
	return result;
}
void iterationTasks::_1_Showfaktorial() {
	cout << "PLease type in a number to find it's factorial!" << endl;
	int x = 0;
	cin >> x;
	int factorial = faktorialFinder(x);
	cout << "Factorial of the specified number: " << factorial << endl;
}
//----------------------------------------------------------- 1. task-------------
void iterationTasks::_2_modulus() {
	int a = 10;
	int b = 20;
	int mod = 0;
	mod = b%a;
	cout << "a= " << a << ", b= " << b << ", the modulus after division is : " << mod << endl;
}
//----------------------------------------------------------- 2. task-------------
void iterationTasks::_3_multiplication() {
	const int a = 10;
	const int b = 6;
	int i = 0;
	int sum = 0;
	while (i < b) {
		sum = sum + a;
		i++;
	}
	cout << "Multiplication of numbers a=10 and b=7 is: " << sum <<" ."<< endl;
}
//----------------------------------------------------------- 3. task-------------
void iterationTasks::_4_multiplicationBy2DivisionBy2() {
	int a;
	cout << "Please type in an integer number for a variable:" << endl;
	cin >> a;
	int b;
	cout << "Please type in an integer number for b variable:" << endl;
	cin >> b;
	int i = 0;
	int sum = 0;
	if (a == 1 && b == 1) {
		sum = 1;
		cout << "multiplication of numbers a and b: " << sum << endl;
	}
	else {
		while (i < a) {
			sum += (b * 2) / 2;
			i++;
		}
		cout << "Multiplication of numbers a and b: " << sum <<" ."<< endl;
	}
}
//----------------------------------------------------------- 4. task-------------
void iterationTasks::_5_powerOf(){
	int a;
	cout << "Please type in the power base!" << endl;
	cin >> a;
	int b;
	cout << "Please type in the power exponent!" << endl;
	cin >> b;
	int i = 0;
	int sum = 1;
	while (i < b) {
		sum *= a;
		i++;
	}
	cout << "The result is: " << sum <<" ."<< endl;
}
//----------------------------------------------------------- 5. task-------------
bool iterationTasks::T(int x) { //T property
	return x == 0;
}
//--------------------------------------------------------------------------------
void iterationTasks::_6_greatestCommonDivisor() {
	int a, b;
	do {
		cout << "Please type in the first number!" << endl;
		cin >> a;

		if (a == 0) {
			cout << "Error, the first input was zero!" << endl;
		}
	} while (T(a));
	do {
		cout << "Please type in the second number!" << endl;
		cin >> b;
		if (b == 0) {
			cout << "Error, the second input was zero!" << endl;
		}
	} while (T(b));
	float modulus;
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	modulus = a%b;
	while (modulus > 0) {
		a = b;
		b = modulus;
		modulus = a%b;
	}
	int divisor = 0;
	divisor = b;
	cout << "The gratest common divisor is: " << divisor <<" ."<< endl;
}
//----------------------------------------------------------- 6. task-------------
void iterationTasks::_7_findLeastCommonMultiple() {
	int a;
	cout << "Please type in the first number!" << endl;
	cin >> a;
	int b;
	cout << "PLease type in the second number!" << endl;
	cin >> b;
	float multiple = a*b;
	float modulus;
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	modulus = a%b;
	while (modulus > 0) {
		a = b;
		b = modulus;
		modulus = a%b;
	}
	int divisor = 0;
	divisor = b;
	cout << "The least common multiple is: " << multiple / divisor <<" ."<< endl;
}
//----------------------------------------------------------- 7. task-------------
void iterationTasks::_8_odd() {
	int N = 0;
	cout << "Give me the value of N!" << endl;
	cin >> N;
	int i = 0;
	while (i <= N)
	{
		if (i % 2 == 0) {
			cout << "Even numbers until N: " << i <<" ."<< endl;
		}
		i++;
	}
}
//----------------------------------------------------------- 8. task-------------
void iterationTasks::_9_getSizeAndWriteChar() {
	cout << "Fill the current consol window width with an arbitrary character! " << endl;
	cout << "Please type in the character you would like to use!" << endl;
	char x;
	cin >> x;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	int ret;
	ret = GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	if (ret)
	{
		printf("Console Buffer Width: %d\n", csbi.dwSize.X);
		printf("Console Buffer Height: %d\n", csbi.dwSize.Y);
	}
	for (int i = 0; i < csbi.dwSize.X; i++) {
		cout << x;
	}
}
void iterationTasks::_10_arithmeticSeries() {
//----------------------------------------------------------- 9. task-------------
	cout << "Give me the size of the series!" << endl;
	int size = 0;
	cin >> size;
	int diff = 0;
	cout << "The difference is:" << endl;
	cin >> diff;
	int *p = new int[size];
	//definition of recursion
	//a(n+1)=a(n)+d
	p[0] = 0;
	int i = 1;
	while (i < size) {
		p[i] = p[i - 1] + diff;
		i++;
	}
	for (int i = 0; i < size; i++) {
		cout << "The elements of aritmetic series: " << p[i] << '\t' <<" ."<< endl;
	}
}
//----------------------------------------------------------- 10. task-------------
void iterationTasks::_11_geometricSeries() {
	cout << "Give me the size of the geometric series!" << endl;
	int size;
	cin >> size;
	int q;
	cout << "Give me the quotient!" << endl;
	cin >> q;
	int *p = new int[size];
	int first;
	cout << "Give me the first element of the series!" << endl;
	cin >> first;
	//a(n+1)=a(n)+d
	p[0] = first;
	int i = 1;
	while (i < size) {
		p[i] = p[0] * pow(q, i);
		i++;
	}
	for (int i = 0; i < size; i++) {
		cout << "The elemets of the geometrical series " << p[i] << '\t' <<" ."<< endl;
	}
}
//----------------------------------------------------------- 11. task-------------
void iterationTasks::_12_guessNumber() {
	int x;
	cout << "Let's play a game! Guess a number from 1 to 20!" << endl;
	cin >> x;
	int a = 10;
	int up, down;
	while (x != a) {
		if (x < a) {
			cout << "Guess a bigger number!" << endl;
			cin >> x;
		}
		else {
			cout << "Guess a smaller number!" << endl;
			cin >> x;
		}
	}
	cout << "We have the number, which is x=10! " << endl;
}
//----------------------------------------------------------- 12. task-------------
int iterationTasks::menu() {
	int m = 5;
	int option;
	do {
		cout << "Please, select from the menu: " << endl;
		cout << "(1) Find factorial of an integer number! " << endl;
		cout << "(2) Find modulus without using: / operator! " << endl;
		cout << "(3) Make multiplication without using: * operator! " << endl;
		cout << "(4) Make multiplication using only division by 2 and multiplication by 2! " << endl;
		cout << "(5) Make exponentation without using the power() built in function! " << endl;
		cout << "(6) Find greatest common divisor! " << endl;
		cout << "(7) Find least common multiple! " << endl;
		cout << "(8) Positiv odd numbers until N! " << endl;
		cout << "(9) Fill first line of display with any character! " << endl;
		cout << "(10) Arithmetic series! " << endl;
		cout << "(11) Geometrical series! " << endl;
		cout << "(12) Guess a number! " << endl;
		cout << "(0) Exit program! " << endl;
		cin >> option;
		system("cls");
		switch (option) {
		case 1:
			_1_Showfaktorial();
			break;
		case 2:
			_2_modulus();
			break;
		case 3:
			_3_multiplication();
			break;
		case 4:
			_4_multiplicationBy2DivisionBy2();
			break;
		case 5:
			_5_powerOf();
			break;
		case 6:
			_6_greatestCommonDivisor();
			break;
		case 7:
			_7_findLeastCommonMultiple();
			break;
		case 8:
			_8_odd();
			break;
		case 9:
			_9_getSizeAndWriteChar();
			break;
		case 10:
			_10_arithmeticSeries();
			break;
		case 11:
			_11_geometricSeries();
			break;
		case 12:
			_12_guessNumber();
			break;
		case 0:
			return 0; 
		default:
			cout << "bad input, option does not exist" << endl;
		}
		system("pause");
		system("cls");
	} while (true);
}