// temp02.cpp: определяет точку входа для консольного приложения.
// start 00
// mod 01
// mod 02
// after 2 revert mod 3 -> mod 2 = mod 4
// go 0
// go 1
// go 2
// go 3
// go 4 after rus


#include "stdafx.h"
#include <stdlib.h>
#include <locale.h> /* Для русского языка ...........................*/


int main()
{

	setlocale(LC_ALL, "Rus"); /* Обязательно должно быть первым........ */



	system("pause");
    return 0;
}

