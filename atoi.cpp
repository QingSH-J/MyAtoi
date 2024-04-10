#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <ctype.h>

int MyAtoi(const char* str) {
	if (str == '\0') {
		return 0;
	}
	if (str == NULL) {
		return 0;
	}
	while (isspace(*str)) {
		str++;
	}
	int flag = 0;
	if (*str == '+') {
		flag = 1;
		str++;
	}
	else if (*str == '-') {
		flag = 0;
		str++;
	}
	long long res = 0;
	while (*str) {
		res = res * 10 + (*str - '0') * flag;
		if (res > INT_MAX) {
			res = INT_MAX;
			return res;
		}
		else if (res < INT_MIN) {
			res = INT_MIN;
		}
	}
	return int(res);
}

int main() {
	const char* str = "1000";
	int a = MyAtoi(str);
	std::cout << a << std::endl;
	std::cout << 3 << std::endl;
	return 0;
}