#include <iostream>
#include <locale.h>
#include "..\Struct_Sem_1\Proverka.h"

int Viborom(int* mass, int size) {
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
	std::cout << "\n Сортировка выбором\n ";
	int j, a;
	int min;
	for (int i = 0; i < size; i++) {
		min = mass[i];
		j = i;
		for (j; j < size; j++) {
			if (mass[j] < min) {
				min = mass[j];
			}
		}
		j = i;
		for (j; j < size; j++) {
			if (mass[j] == min) {
				mass[j] = mass[i];
				mass[i] = min;
			}
		}
		std::cout << "\n Итерация " << i + 1 << "  ";
		for (int i = 0; i < size; i++) {
			if (mass[i] < 10 && mass[i] >= 0) {
				std::cout << " ";
				std::cout << mass[i] << " |  ";
			}
			else
				std::cout << mass[i] << " |  ";
		}
	}
	std::cout << "\n\n Итоговый результет сортировки\n ";
	for (int i = 0; i < size; i++) {
		std::cout << mass[i] << " | ";
	}
	std::cout << "\n";
	return 0;
}

int Viborom(float* mass, int size) {
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
	std::cout << "\n Сортировка выбором\n ";
	int j, a;
	float min;
	for (int i = 0; i < size; i++) {
		min = mass[i];
		j = i;
		for (j; j < size; j++) {
			if (mass[j] < min) {
				min = mass[j];
			}
		}
		j = i;
		for (j; j < size; j++) {
			if (mass[j] == min) {
				mass[j] = mass[i];
				mass[i] = min;
			}
		}
		std::cout << "\n Итерация " << i + 1 << "  ";
		for (int i = 0; i < size; i++) {
			if (mass[i] < 10 && mass[i] >= 0) {
				std::cout << " ";
				std::cout << mass[i] << " |  ";
			}
			else
				std::cout << mass[i] << " |  ";
		}
	}
	std::cout << "\n\n Итоговый результет сортировки\n ";
	for (int i = 0; i < size; i++) {
		std::cout << mass[i] << " | ";
	}
	std::cout << "\n";
	return 0;
}

int Viborom(double* mass, int size) {
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
	std::cout << "\n Сортировка выбором\n ";
	int j, a;
	double min;
	for (int i = 0; i < size; i++) {
		min = mass[i];
		j = i;
		for (j; j < size; j++) {
			if (mass[j] < min) {
				min = mass[j];
			}
		}
		j = i;
		for (j; j < size; j++) {
			if (mass[j] == min) {
				mass[j] = mass[i];
				mass[i] = min;
			}
		}
		std::cout << "\n Итерация " << i + 1 << "  ";
		for (int i = 0; i < size; i++) {
			if (mass[i] < 10 && mass[i] >= 0) {
				std::cout << " ";
				std::cout << mass[i] << " |  ";
			}
			else
				std::cout << mass[i] << " |  ";
		}
	}
	std::cout << "\n\n Итоговый результет сортировки\n ";
	for (int i = 0; i < size; i++) {
		std::cout << mass[i] << " | ";
	}
	std::cout << "\n";
	return 0;
}