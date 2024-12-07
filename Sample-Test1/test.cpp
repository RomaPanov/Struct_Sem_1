#include "pch.h"
#include "..\Struct_Sem_1\Vstavkami.h"
#include "..\Struct_Sem_1\Viborom.h"
#include "..\Struct_Sem_1\Obmenom.h"
#include "..\Struct_Sem_1\Puzirkom.h"
#include "..\Struct_Sem_1\PuzirPus.h"

TEST(Test, TestINTVstavkami) {
	int mass[]{ 2,3,6,9,1,2 };
	int size = sizeof(mass) / sizeof(mass[0]);
	Vstavkami(mass, size);
	int mass2[]{ 1,2,2,3,6,9 };
	EXPECT_EQ(*mass, *mass2);
}
TEST(Test, TestFloatVstavkami) {
	float mass[]{ 2.3,3.8,3.2,6.6,6.69,9,-1.5,-1.6,2 };
	int size = sizeof(mass) / sizeof(mass[0]);
	Vstavkami(mass, size);
	float mass2[]{ -1.6,-1.5,2,2,3.2,3.8,6.6,6.69,9 };
	EXPECT_EQ(*mass, *mass2);
}
TEST(Test, TestPustoiVstavkami) {
	double mass[]{NULL};
	int size = sizeof(mass) / sizeof(mass[0]);
	Vstavkami(mass, size);
	double mass2[]{NULL};
	EXPECT_EQ(*mass, *mass2);
}
TEST(Test, TestINTViborom) {
	int mass[]{ 2,3,6,9,1,2 };
	int size = sizeof(mass) / sizeof(mass[0]);
	Vstavkami(mass, size);
	int mass2[]{ 1,2,2,3,6,9 };
	EXPECT_EQ(*mass, *mass2);
}
TEST(Test, TestFloatViborom) {
	float mass[]{ 2.3,3.8,3.2,6.6,6.69,9,-1.5,-1.6,2 };
	int size = sizeof(mass) / sizeof(mass[0]);
	Viborom(mass, size);
	float mass2[]{ -1.6,-1.5,2,2,3.2,3.8,6.6,6.69,9 };
	EXPECT_EQ(*mass, *mass2);
}
TEST(Test, TestPustoiViborom) {
	double mass[]{ NULL };
	int size = sizeof(mass) / sizeof(mass[0]);
	Viborom(mass, size);
	double mass2[]{ NULL };
	EXPECT_EQ(*mass, *mass2);
}
TEST(Test, TestINTPuzirPus) {
	int mass[]{ 2,3,6,9,1,2 };
	int size = sizeof(mass) / sizeof(mass[0]);
	PuzirPus(mass, size);
	int mass2[]{ 1,2,2,3,6,9 };
	EXPECT_EQ(*mass, *mass2);
}
TEST(Test, TestFloatPuzirPus) {
	float mass[]{ 2.3,3.8,3.2,6.6,6.69,9,-1.5,-1.6,2 };
	int size = sizeof(mass) / sizeof(mass[0]);
	PuzirPus(mass, size);
	float mass2[]{ -1.6,-1.5,2,2,3.2,3.8,6.6,6.69,9 };
	EXPECT_EQ(*mass, *mass2);
}
TEST(Test, TestPustoiPuzirPus) {
	double mass[]{ NULL };
	int size = sizeof(mass) / sizeof(mass[0]);
	PuzirPus(mass, size);
	double mass2[]{ NULL };
	EXPECT_EQ(*mass, *mass2);
}
TEST(Test, TestINTPuzirkom) {
	int mass[]{ 2,3,6,9,1,2 };
	int size = sizeof(mass) / sizeof(mass[0]);
	Puzirkom(mass, size);
	int mass2[]{ 1,2,2,3,6,9 };
	EXPECT_EQ(*mass, *mass2);
}
TEST(Test, TestFloatPuzirkom) {
	float mass[]{ 2.3,3.8,3.2,6.6,6.69,9,-1.5,-1.6,2 };
	int size = sizeof(mass) / sizeof(mass[0]);
	Puzirkom(mass, size);
	float mass2[]{ -1.6,-1.5,2,2,3.2,3.8,6.6,6.69,9 };
	EXPECT_EQ(*mass, *mass2);
}
TEST(Test, TestPustoiPuzirkom) {
	double mass[]{ NULL };
	int size = sizeof(mass) / sizeof(mass[0]);
	Puzirkom(mass, size);
	double mass2[]{ NULL };
	EXPECT_EQ(*mass, *mass2);
}
TEST(Test, TestINTObmenom) {
	int mass[]{ 2,3,6,9,1,2 };
	int size = sizeof(mass) / sizeof(mass[0]);
	Obmenom(mass, size);
	int mass2[]{ 1,2,2,3,6,9 };
	EXPECT_EQ(*mass, *mass2);
}
TEST(Test, TestFloatObmenom) {
	float mass[]{ 2.3,3.8,3.2,6.6,6.69,9,-1.5,-1.6,2 };
	int size = sizeof(mass) / sizeof(mass[0]);
	Obmenom(mass, size);
	float mass2[]{ -1.6,-1.5,2,2,3.2,3.8,6.6,6.69,9 };
	EXPECT_EQ(*mass, *mass2);
}
TEST(Test, TestPustoiObmenom) {
	double mass[]{ NULL };
	int size = sizeof(mass) / sizeof(mass[0]);
	Obmenom(mass, size);
	double mass2[]{ NULL };
	EXPECT_EQ(*mass, *mass2);
}