#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <ctype.h>

int MyAtoi(const char* str) {
	if (str == NULL) {
		return 0;
	}
	while (isspace(*str)) {
		str++;
	}
	int flag = 1;
	if (*str == '+') {
		flag = 1;
		str++;
	}
	else if (*str == '-') {
		flag = -1;
		str++;
	}
	long long res = 0;
	while (*str != '\0') {
		if (isdigit(*str)) {
			res = res * 10 + (*str - '0') * flag;
			str++;
			if (res > INT_MAX) {
				res = INT_MAX;
				return res;
			}
			else if (res < INT_MIN) {
				res = INT_MIN;
			}
		}
		else {
			return (int)res;
		}
	}
	return int(res);
}

int main() {
	const char* str = "1236";
	int a = MyAtoi(str);
	std::cout << a << std::endl;
	std::cout << 3 << std::endl;
	return 0;
}