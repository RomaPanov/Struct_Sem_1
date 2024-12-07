#include <iostream>
#include <locale.h>

int Proverka(int* mass, int size) {
	setlocale(LC_ALL, "RUS");
	if(size == 1){
		if (mass[0] == 0)
			std::cout << "\n Нуливой массив\n ";
		else
			std::cout << "\n Массив из одного элемента \n ";
		return 1;
	}
	int min;
	int zamen = 0;
	for (int i = 0; i < size; i++) {
		min = mass[i];
		for (int j = i + 1; j < size; j++) {
			if (min > mass[j]) {
				zamen++;
				break;
			}
		}
	}
	if (zamen == 0 || zamen == (size - 1)) {
		std::cout << "\n Массив отсортирован\n ";
		if (mass[0] <= mass[size - 1]) {
			for (int i = 0; i < size; i++) {
				std::cout << mass[i] << " | ";
			}
		} else if (mass[0] >= mass[size - 1]) {
			for (int i = size - 1; i >= 0; i--) {
				std::cout << mass[i] << " | ";
			}
		}
		return 1;
	} else
		return 0;
}

int Proverka(float* mass, int size) {
	setlocale(LC_ALL, "RUS");
	if (size == 1) {
		if (mass[0] == 0)
			std::cout << "\n Нуливой массив\n ";
		else
			std::cout << "\n Массив из одного элемента \n ";
		return 1;
	}
	float min;
	int zamen = 0;
	for (int i = 0; i < size; i++) {
		min = mass[i];
		for (int j = i + 1; j < size; j++) {
			if (min > mass[j]) {
				zamen++;
				break;
			}
		}
	}
	if (zamen == 0 || zamen == (size - 1)) {
		std::cout << "\n Массив отсортирован\n ";
		if (mass[0] <= mass[size - 1]) {
			for (int i = 0; i < size; i++) {
				std::cout << mass[i] << " | ";
			}
		}
		else if (mass[0] >= mass[size - 1]) {
			for (int i = size - 1; i >= 0; i--) {
				std::cout << mass[i] << " | ";
			}
		}
		return 1;
	}
	else
		return 0;
}

int Proverka(double* mass, int size) {
	setlocale(LC_ALL, "RUS");
	if (size == 1) {
		if (mass[0] == 0)
			std::cout << "\n Нуливой массив\n ";
		else
			std::cout << "\n Массив из одного элемента \n ";
		return 1;
	}
	double min;
	int zamen = 0;
	for (int i = 0; i < size; i++) {
		min = mass[i];
		for (int j = i + 1; j < size; j++) {
			if (min > mass[j]) {
				zamen++;
				break;
			}
		}
	}
	if (zamen == 0 || zamen == (size - 1)) {
		std::cout << "\n Массив отсортирован\n ";
		if (mass[0] <= mass[size - 1]) {
			for (int i = 0; i < size; i++) {
				std::cout << mass[i] << " | ";
			}
		}
		else if (mass[0] >= mass[size - 1]) {
			for (int i = size - 1; i >= 0; i--) {
				std::cout << mass[i] << " | ";
			}
		}
		return 1;
	}
	else
		return 0;
}