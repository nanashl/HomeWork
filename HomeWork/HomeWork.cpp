////#include <iostream>
////#include <cstdlib>
////#include <ctime>
//#include <stdio.h>
//#include <malloc.h>
//#include <stdlib.h>
//#include <locale.h>
//#include <iostream>
//using namespace std;
////#include "header1.h"
//
//void FindDupl(int* ass)
//{
//	int count;
//	bool found_duplicates = false;
//	for (int l = 0; l < 5; l++)
//	{
//		count = 0;
//		for (int t = 0; t < 5; t++)
//		{
//			if (ass[l] == ass[t])
//			{
//				count++;
//				
//			}
//		}
//		if (count > 1)
//		{
//			found_duplicates = true;
//			cout << "Chislo " << ass[l] << " count " << count << endl;
//		}
//		if (!found_duplicates)cout << "HUI TEBE" << endl;
//	}
//
//	
//}
//
//int main()
//{
//	system("chcp 1251>null");
//	//srand(time(NULL));
//	int** player, * colomns, *score, *results;
//	int rows = 0, cols = 1, var = 1, result = 0, count = 0, k=0, bonus = 0;
//	int winner = 0, r = 0, bonus_count = 0, count_bn = 0, sc = 0;
//	int bonus1 = 0, bonus2 = 0, bonus3 = 0, bonus4=0, bonus5=0, bonus6=0;
//	//cout << "Enter players: "; cin >> rows;
//	player = (int**)malloc(sizeof(int*) * rows);
//	score = (int*)malloc(sizeof(int) * 5);
//	results = (int*)malloc(sizeof(int) * rows);
//	//int n = sizeof(arr) / sizeof(int);
//	int arr[5];
//	//int n = sizeof(arr) / sizeof(int);
//
//	bool found_duplicates = false;
//	for (int i = 0; i < 5; i++)
//	{
//		score[i] = rand() % 6 + 1;
//		cout << score[i] << "\t";
//	}
//	cout << endl << endl;
//	FindDupl(score);
//
//}
//
////int main() 
////{
////	int arr[] = { 2, 3, 4, 5, 3, 6, 7, 8, 5, 9, 9 };
////	int n = sizeof(arr) / sizeof(arr[0]);
////
////	bool found_duplicates = false;
////	for (int i = 0; i < n; i++) {
////		int count = 0;
////		for (int j = 0; j < n; j++) {
////			if (arr[i] == arr[j]) {
////				count++;
////			}
////		}
////		if (count > 1) {
////			found_duplicates = true;
////			cout << "Число " << arr[i] << " повторяется " << count << " раз(а)." << endl;
////		}
////	}
////
////	if (!found_duplicates) {
////		cout << "Дубликатов не найдено." << endl;
////	}
////
////	return 0;
////}
//
//
////
////using namespace std;
////
////void draw_dice(int num); // Функция для рисования кости в псевдографике
////
////int main()
////{
////    srand(time(NULL)); // Инициализация генератора случайных чисел
////	system("chcp 1251");
////
////    int num_players, num_rounds;
////
////    cout << "Введите количество игроков: ";
////    cin >> num_players;
////
////    cout << "Введите количество раундов: ";
////    cin >> num_rounds;
////
////    int* scores = new int[num_players]; // Создание динамического массива для хранения очков игроков
////
////    for (int i = 0; i < num_players; i++) {
////        scores[i] = 0;
////    }
////
////    int current_player = 0; // Индекс текущего игрока
////    int current_round = 0; // Номер текущего раунда
////
////    while (current_round < num_rounds) {
////        int roll1 = rand() % 6 + 1; // Бросок первого кубика
////        int roll2 = rand() % 6 + 1; // Бросок второго кубика
////
////        cout << "Игрок " << current_player + 1 << ", бросайте кости (раунд " << current_round + 1 << "):" << endl;
////        //cout << "Кость 1: ";
////        draw_dice(roll1); // Рисуем первую кость
////        cout << endl;
////       // cout << "Кость 2: ";
////        draw_dice(roll2); // Рисуем вторую кость
////        cout << endl;
////		draw_dice(roll3);
////
////        int total = roll1 + roll2; // Сумма граней костей
////
////        if (roll1 == roll2) {
////            cout << "Бонус за одинаковые грани: +" << total << endl;
////            scores[current_player] += total; // Добавляем бонус к очкам игрока
////        }
////        else {
////            scores[current_player] += total;
////        }
////
////        cout << "Очки игрока " << current_player + 1 << ": " << scores[current_player] << endl;
////
////        current_player = (current_player + 1) % num_players; // Переходим к следующему игроку
////        if (current_player == 0) {
////            current_round++;
////            cout << "Раунд " << current_round << " закончен." << endl;
////        }
////    }
////
////    cout << "Игра окончена. Очки игроков:" << endl;
////    for (int i = 0; i < num_players; i++) {
////        cout << "Игрок " << i + 1 << ": " << scores[i] << endl;
////    }
////
////    delete[] scores; // Освобождаем память, выделенную под массив очков
////
////    return 0;
////}
////
////void draw_dice(int num)
////{
////	switch (num)
////	{
////	case 1:
////	{
////		cout << "   ----------------\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   |      ##      |\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   ----------------\n\t\t\t\t";
////
////		break;
////	}
////	case 2:
////	{
////		cout << "   ----------------\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   |   ##         |\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   |          ##  |\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   ----------------\n\t\t\t\t";
////		break;
////	}
////	case 3:
////	{
////		cout << "   ----------------\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   |   ##         |\n\t\t\t\t";
////		cout << "   |      ##      |\n\t\t\t\t";
////		cout << "   |          ##  |\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   ----------------\n\t\t\t\t";
////		break;
////	}
////	case 4:
////	{
////		cout << "   ----------------\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   |   ##     ##  |\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   |   ##     ##  |\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   ----------------\n\t\t\t\t";
////		break;
////	}
////	case 5:
////	{
////		cout << "   ----------------\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   |   ##     ##  |\n\t\t\t\t";
////		cout << "   |      ##      |\n\t\t\t\t";
////		cout << "   |   ##     ##  |\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   ----------------\n\t\t\t\t";
////		break;
////	}
////	case 6:
////	{
////		cout << "   ----------------\n\t\t\t\t";
////		cout << "   |   ##    ##   |\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   |   ##    ##   |\n\t\t\t\t";
////		cout << "   |              |\n\t\t\t\t";
////		cout << "   |   ##    ##   |\n\t\t\t\t";
////		cout << "   ----------------\n\t\t\t\t";
////		break;
////	}
////
////
////
////	default:
////		break;
////	}
////
////
////}
////
////
