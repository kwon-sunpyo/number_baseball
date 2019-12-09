#include <ctime>
#include <iostream>
#include <math.h>

int rndNum(int level) {
	int sum = 0;
	int a[6] = { 0 };
	srand((unsigned)time(NULL));
	for (;;) {
		for (int i = 0; i < level; i++) {
			if (i == level - 1) {
				a[i] = rand() % 9 + 1;
			}
			else {
				a[i] = rand() % 10;
			}
		}
		int flag = 1;
		for (int i = 0; i < level; i++) {
			for (int j = 0; j < level; j++) {
				if (i != j) {
					if (a[i] == a[j]) {
						flag = 0;
					}
				}
			}
		}
		if (flag == 1) {
			for (int i = 0; i < level; i++) {
				sum += a[i] * pow(10, i);
			}
			break;
		}
	}
	return sum;
}