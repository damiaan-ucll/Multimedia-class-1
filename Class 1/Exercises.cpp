//
//  Exercises.cpp
//  Class 1
//
//  Created by Damiaan Dufaux on 10/02/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "Exercises.h"
using namespace std;

void ex1() {
	cout << "Hello, World!\n";
}

void ex2() {
	cout << "How old are you? ";
	
	int age;
	cin >> age;
	cout << "You are " << age << (age==1 ? " year" : " years") << " old.\n";
}

void ex3() {
	int numbers[] = {9, 4, 81, 49, 25};
	
	//print numbers
	cout << numbers[0];
	for (int i = 1; i<5; ++i)
		cout << " " << numbers[i];
	cout << endl;
	
	//print squares
	cout << numbers[0];
	for (int i = 1; i<5; ++i)
		cout << " " << sqrt(numbers[i]);
	cout << endl;
}

void ex4() {
	cout << "Geef een jaartal in: ";
	int year;
	
	string yes = "Het jaar is een schrikkeljaar\n";
	string no = "Het jaar is geen schrikkeljaar\n";
	
	cin >> year;
	
	if ( !(year%400) )
		cout << yes;
	
	else if ( !(year%100) )
		cout << no;
	
	else if ( !(year%4) )
		cout << yes;
	
	else
		cout << no;
}

void quicksort(int numbers[], int left, int right) {
	int pivot = numbers[(left + right) / 2];
	
//	while (numbers[left] < pivot) {
//		<#statements#>
//	}
}

void quicksort(int numbers[], int length) {
	quicksort(numbers, 0, length-1);
}

void ex6(int numbers[], int length) {
	
	quicksort(numbers, length);
	
	cout << numbers[0];
	for (int i = 1; i<length; ++i)
		cout << " " << numbers[i];
	cout << endl;
}
