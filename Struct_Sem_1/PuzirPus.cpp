#include <iostream>
#include <locale.h>
#include "..\Struct_Sem_1\Proverka.h"

int PuzirPus(int* mass, int size) {
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
	std::cout << "\n Сортировка пузырьком с улучшениями\n ";
	int sled;
	int proh, iter, ostalos;
	bool k = true;
	proh = 1; iter = 1;
	ostalos = size - 1;
	for (int j = size - 1; j > 0; j--) {
		std::cout << "\n Проход " << proh;
		for (int i = 0; i < ostalos; i++) {
			std::cout << "\n	Итерация " << iter << "  ";
			sled = mass[i + 1];
			if (mass[i] > sled) {
				mass[i + 1] = mass[i];
				mass[i] = sled;
				k = true;
			} else k = false;
			for (int i = 0; i < size; i++) {
				if (mass[i] < 10 && mass[i] >= 0) {
					std::cout << " ";
					std::cout << mass[i] << " |  ";
				}
				else
					std::cout << mass[i] << " |  ";
			}
			iter++;
		}
		if (k == false)
			break;
		proh++; iter = 1;
		ostalos--;
	}
	std::cout << "\n\n Итоговый результет сортировки\n ";
	for (int i = 0; i < size; i++) {
		std::cout << mass[i] << " | ";
	}
	std::cout << "\n";
	return 0;
}

int PuzirPus(float* mass, int size) {
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
	std::cout << "\n Сортировка пузырьком с улучшениями\n ";
	float sled;
	int proh, iter, ostalos;
	bool k = true;
	proh = 1; iter = 1;
	ostalos = size - 1;
	for (int j = size - 1; j > 0; j--) {
		std::cout << "\n Проход " << proh;
		for (int i = 0; i < ostalos; i++) {
			std::cout << "\n	Итерация " << iter << "  ";
			sled = mass[i + 1];
			if (mass[i] > sled) {
				mass[i + 1] = mass[i];
				mass[i] = sled;
				k = true;
			}
			else k = false;
			for (int i = 0; i < size; i++) {
				if (mass[i] < 10 && mass[i] >= 0) {
					std::cout << " ";
					std::cout << mass[i] << " |  ";
				}
				else
					std::cout << mass[i] << " |  ";
			}
			iter++;
		}
		if (k == false)
			break;
		proh++; iter = 1;
		ostalos--;
	}
	std::cout << "\n\n Итоговый результет сортировки\n ";
	for (int i = 0; i < size; i++) {
		std::cout << mass[i] << " | ";
	}
	std::cout << "\n";
	return 0;
}

int PuzirPus(double* mass, int size) {
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
	std::cout << "\n Сортировка пузырьком с улучшениями\n ";
	double sled;
	int proh, iter, ostalos;
	bool k = true;
	proh = 1; iter = 1;
	ostalos = size - 1;
	for (int j = size - 1; j > 0; j--) {
		std::cout << "\n Проход " << proh;
		for (int i = 0; i < ostalos; i++) {
			std::cout << "\n	Итерация " << iter << "  ";
			sled = mass[i + 1];
			if (mass[i] > sled) {
				mass[i + 1] = mass[i];
				mass[i] = sled;
				k = true;
			}
			else k = false;
			for (int i = 0; i < size; i++) {
				if (mass[i] < 10 && mass[i] >= 0) {
					std::cout << " ";
					std::cout << mass[i] << " |  ";
				}
				else
					std::cout << mass[i] << " |  ";
			}
			iter++;
		}
		if (k == false)
			break;
		proh++; iter = 1;
		ostalos--;
	}
	std::cout << "\n\n Итоговый результет сортировки\n ";
	for (int i = 0; i < size; i++) {
		std::cout << mass[i] << " | ";
	}
	std::cout << "\n";
	return 0;
}