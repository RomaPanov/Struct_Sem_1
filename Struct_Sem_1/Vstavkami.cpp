#include <iostream>
#include <locale.h>
#include "..\Struct_Sem_1\Proverka.h"

int Vstavkami(int* mass, int size) {
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
	std::cout << "\n Сортировка вставками\n ";
	int key, pered_key, a;
	for (int i = 1; i <= size - 1; i++) {
		key = i;
		pered_key = key - 1;
		if (key != size) {
			for (pered_key; pered_key >= 0; pered_key--) {
				if (mass[pered_key] > mass[key]) {
					a = mass[key];
					mass[key] = mass[pered_key];
					mass[pered_key] = a;
					key--;
				}
			}
		}
		std::cout << "\n Итерация " << i << "  ";
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

int Vstavkami(float* mass, int size) {
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
	std::cout << "\n Сортировка вставками\n ";
	int key, pered_key;
	float a;
	for (int i = 1; i <= size - 1; i++) {
		key = i;
		pered_key = key - 1;
		if (key != size) {
			for (pered_key; pered_key >= 0; pered_key--) {
				if (mass[pered_key] > mass[key]) {
					a = mass[key];
					mass[key] = mass[pered_key];
					mass[pered_key] = a;
					key--;
				}
			}
		}
		std::cout << "\n Итерация " << i << "  ";
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

int Vstavkami(double* mass, int size) {
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
	std::cout << "\n Сортировка вставками\n ";
	int key, pered_key;
	double a;
	for (int i = 1; i <= size - 1; i++) {
		key = i;
		pered_key = key - 1;
		if (key != size) {
			for (pered_key; pered_key >= 0; pered_key--) {
				if (mass[pered_key] > mass[key]) {
					a = mass[key];
					mass[key] = mass[pered_key];
					mass[pered_key] = a;
					key--;
				}
			}
		}
		std::cout << "\n Итерация " << i << "  ";
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