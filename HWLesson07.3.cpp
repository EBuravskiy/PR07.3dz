#include <stdio.h>

int Sqrt(int a) {
	int x = 0;
	while (x * x < a) {
		x++;
	}
	if (x * x == a) {
		return 1;
	}
	else return 0;
}

int Sqrt(int a, int* pcount) {
		Sqrt(a);
		if (Sqrt(a) == 1) {
			*pcount += 1;
		}
	return 0;
}

int Sqrt(int a, int& countRef) {
		Sqrt(a);
		if (Sqrt(a) == 1) {
			countRef += 1;
		}
	return 0;
}

int main() {
	int count = 0;
	int* pcount = &count;
	int& countRef = count;
	int a;
	printf("Enter three integers: \n");
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &a);
		count += Sqrt(a);
	}
	printf("Of the entered number, %d are the square of an integer\n", count);
	printf("----------------------------------------------------------------\n");
	count = 0;
	printf("Enter three integers: \n");
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &a);
		Sqrt(a, &count);
	}
	printf("Of the entered number, %d are the square of an integer\n", count);
	printf("----------------------------------------------------------------\n");
	count = 0;
	printf("Enter three integers: \n");
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &a);
		Sqrt(a, countRef);
	}
	printf("Of the entered number, %d are the square of an integer\n", count);
	return 0;
}