﻿#include "tasks.h"

/*	Task 02. Ordering Numbers [упорядочивание чисел]
 *
 *	Даны три числа. Упорядочите их в порядке неубывания.
 *
 *	Формат входных данных [input]
 *	На вход даётся три числа в диапазоне целочисленного типа int.
 *
 *	Формат выходных данных
 *	Возвратите в виде строки три числа, которые упорядочены в порядке неубывания.
 *	Числа в строке должны быть разделены друг от друга ОДНИМ пробелом.
 *
 *	[ input 1]: 7 6 1
 *	[output 1]: 1 6 7
 *
 *	[ input 2]: 6 7 2
 *	[output 2]: 2 6 7
 *
 *	[ input 3]: 7 4 7
 *	[output 3]: 4 7 7
 */

string task02(int a, int b, int c) {	
	if (a < b || a < c) {
		if (b < c) {
			return to_string(a) + " " + to_string(b) + " " + to_string(c);
		}
		else {
			return to_string(a) + " " + to_string(c) + " " + to_string(b);
		}
	}
	else {
		if (b < a || b < c) {
			if (a < c) {
				return to_string(b) + " " + to_string(a) + " " + to_string(c);
			}
			else {
				return to_string(b) + " " + to_string(c) + " " + to_string(a);
			}
		}
		else {
			if (a < b) {
				return to_string(c) + " " + to_string(a) + " " + to_string(b);
			}
			else {
				return to_string(c) + " " + to_string(b) + " " + to_string(a);
			}
		}
	}

	
}