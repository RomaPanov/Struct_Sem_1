#include <iostream>
#include<locale.h>
#include "..\Struct_Sem_1\Proverka.h"

int Obmenom(int* mass, int size) {
	int prov = 0;
	prov = Proverka(mass, size);
	if (prov == 1) {
		return 0;
	}
	setlocale(LC_ALL, "RUS");
	std::cout << "\n Исходный массив\n ";
	for (int i = 0; i < size; i++) {
		std::cout << mass[i] << " | ";
	}
	std::cout << "\n Сортировка обменом\n ";
	int sled, a;
	for (int i = 0; i < size - 1; i++) {
		sled = i + 1;
		std::cout << "\n Проход " << i + 1;
		int p = 0;
		for (sled; sled < size; sled++) {
			if (sled != size) {
				if (mass[i] > mass[sled]) {
					a = mass[i];
					mass[i] = mass[sled];
					mass[sled] = a;
				}
				std::cout << "\n	Итерация " << ++p << "  ";
				for (int i = 0; i < size; i++) {
					if (mass[i] < 10 && mass[i] >= 0) {
						std::cout << " ";
						std::cout << mass[i] << " |  ";
					}
					else
						std::cout << mass[i] << " |  ";
				}
			}
		}
	}
	std::cout << "\n\n Итоговый результет сортировки\n ";
	for (int i = 0; i < size; i++) {
		std::cout << mass[i] << " | ";
	}
	std::cout << "\n";
	return 0;
}

int Obmenom(float* mass, int size) {
	int prov = 0;
	prov = Proverka(mass, size);
	if (prov == 1) {
		return 0;
	}
	setlocale(LC_ALL, "RUS");
	std::cout << "\n Исходный массив\n ";
	for (int i = 0; i < size; i++) {
		std::cout << mass[i] << " | ";
	}
	std::cout << "\n Сортировка обменом\n ";
	int sled;
	float a;
	for (int i = 0; i < size - 1; i++) {
		sled = i + 1;
		std::cout << "\n Проход " << i + 1;
		int p = 0;
		for (sled; sled < size; sled++) {
			if (sled != size) {
				if (mass[i] > mass[sled]) {
					a = mass[i];
					mass[i] = mass[sled];
					mass[sled] = a;
				}
				std::cout << "\n	Итерация " << ++p << "  ";
				for (int i = 0; i < size; i++) {
					if (mass[i] < 10 && mass[i] >= 0) {
						std::cout << " ";
						std::cout << mass[i] << " |  ";
					}
					else
						std::cout << mass[i] << " |  ";
				}
			}
		}
	}
	std::cout << "\n\n Итоговый результет сортировки\n ";
	for (int i = 0; i < size; i++) {
		std::cout << mass[i] << " | ";
	}
	std::cout << "\n";
	return 0;
}

int Obmenom(double* mass, int size) {
	int prov = 0;
	prov = Proverka(mass, size);
	if (prov == 1) {
		return 0;
	}
	setlocale(LC_ALL, "RUS");
	std::cout << "\n Исходный массив\n ";
	for (int i = 0; i < size; i++) {
		std::cout << mass[i] << " | ";
	}
	std::cout << "\n Сортировка обменом\n ";
	int sled;
	double a;
	for (int i = 0; i < size - 1; i++) {
		sled = i + 1;
		std::cout << "\n Проход " << i + 1;
		int p = 0;
		for (sled; sled < size; sled++) {
			if (sled != size) {
				if (mass[i] > mass[sled]) {
					a = mass[i];
					mass[i] = mass[sled];
					mass[sled] = a;
				}
				std::cout << "\n	Итерация " << ++p << "  ";
				for (int i = 0; i < size; i++) {
					if (mass[i] < 10 && mass[i] >= 0) {
						std::cout << " ";
						std::cout << mass[i] << " |  ";
					}
					else
						std::cout << mass[i] << " |  ";
				}
			}
		}
	}
	std::cout << "\n\n Итоговый результет сортировки\n ";
	for (int i = 0; i < size; i++) {
		std::cout << mass[i] << " | ";
	}
	std::cout << "\n";
	return 0;
}