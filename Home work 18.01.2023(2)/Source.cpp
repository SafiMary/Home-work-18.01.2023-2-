#include "Header.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Variable<int, double, float> a;
	a.sum_all(1, 2.7, 4.f);


}