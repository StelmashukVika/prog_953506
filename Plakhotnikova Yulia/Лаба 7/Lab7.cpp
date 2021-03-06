#include "pch.h"
#include <iostream>
#define NUM_OF_MARKS 4
#include <windows.h>
#include <math.h>

typedef struct Info 
{
	char firstname[20];
	char lastname[30];
	char middlename[20];
	char passport;
	char placeOfLiving[50];
	int school;
};

typedef struct TotalScore
{
	int marks[NUM_OF_MARKS];
	double averageMark;
};

void menu(int *choose1) {
	printf("Выберите подходящий пункт в меню:\n1.Ввести ФИО.\n2.Ввести баллы ЦТ и средний балл аттестата.\n4.Ввести номер паспорта.\n5.Ввести место проживания.\n6.Ввести номер школы.\n");
	scanf_s("%d", &*choose1);
}

void point(int *choose1) {
	printf("Введите следующий пункт меню: ");
	scanf_s("%d", &*choose1);
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int choose, select;
    Info *head = NULL;
	enum faculties { FKP = 1, FITiU, FRE, FKSiS, FIK, IEF, VF };
	enum faculties faculty;
	enum specialities {
		programmable_mobile_systems = 1, medical_electronics, ecetronic_security_systems,
		artificial_intelligence, industrial_electronics, nanotechnology, radio_informatics, information_technology_software,
		comp_science_and_progtech, infocommunication_systems, inf_secyrity_in_telecom, el_business_econ, ecectronic_marceting,
		comp_systems_and_networks
	};
	enum specialities speciality;
	char fac[][10] = { "ФКП", "ФИТиУ", "ФРЭ", "ФКСиС", "ФИК", "ИЭФ", "ВФ" };
	char spec[][100] = { "Программируемые мобильные системы", "Медицинская электроника", "Электртонные системы безопасности",
		"Искусственный интеллект", "Промышленная элекроника", "Нанотехнологии", "Радиоинформатика",
		"Программное обеспечение информационных технологий", "Информатика и технологии программирования", "Системы инфокоммуникаций",
		"Защита информации в телекоммуникациях", "Экономика электронного бизнеса", "Электронный маркетинг",
		"Вычислительные машины и сети" };
	struct Info *info;
	info = (struct Info*)malloc(20 * sizeof(struct Info));

	printf("Вы хотите: \n1.Подать заявление\n2.Забрать заявление\n3.Увидеть проходные баллы\n");
	scanf_s("%d", &select);
	printf("Выберите факультет:\n1.ФКП\n2.ФИТиУ\n3.ФРЭ\n4.ФКСиС\n5.ФИК\n6.ИЭФ\n7.ВФ\n");
	scanf_s("%d", &faculty);
	
	switch(faculty){
	case 1: {
		printf("Выберите специальность:\n1.Программируемые мобильные системы\n2.Медицинская электроника\n3.Электртонные системы безопасности\n");
		scanf_s("%d", &speciality);
	}
	case 2: {
		printf("Выберите специальность:\n1.Искусственный интеллект\n2.Промышленная элекроника\n");
		scanf_s("%d", &speciality);
	}
	case 3: {
		printf("Выберите специальность:\n1.Нанотехнологии\n2.Радиоинформатика\n");
		scanf_s("%d", &speciality);
	}
	case 4: {
		printf("Выберите специальность:\n1.Программное обеспечение информационных технологий\n2.Информатика и технологии программирования\n");
		scanf_s("%d", &speciality);
	}
	case 5: {
		printf("Выберите специальность:\n1.Системы инфокоммуникаций\n2.Защита информации в телекоммуникациях\n");
		scanf_s("%d", &speciality);
	}
	case 6: {
		printf("Выберите специальность:\n1.Экономика электронного бизнеса\n2.Электронный маркетинг\n");
		scanf_s("%d", &speciality);
	}
	case 7: {
		printf("Выберите специальность:\n1.Вычислительные машины и сети\n");
		scanf_s("%d", &speciality);
	}


	switch(select){
	case 1:
	{ menu(&choose);

	switch (choose) {
	case 1: {
		printf("Введите Ваши ФИО: ");
		scanf_s("%s", )
		AddFio(&windows, &balconies, &floor);
		point(&choose);
	}
	case 2: parameters(&windows, &balconies, &floor, &area, &windowscost, &balconiescost, &percent);
		point(&choose);
	case 3: amount(&windowscost, &balconiescost, &finally);
		point(&choose);
	case 4: printf("Компания Пони-Пласт\nУстановка окон ПВХ и баклонных дверей с 2010 года\nг.Минск,ул.Академика Карского, 17\nТел. +375296478733\n");
		point(&choose);
	case 5: exit(0);
	default:
		printf("Неверно, введите число от 1 до 5!\n");
		menu(&choose);
	}
	}
	case 2:
	case 3:

	system("pause");
	return 0;
}

