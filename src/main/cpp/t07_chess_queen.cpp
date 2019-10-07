//Шахматный ферзь ходит по диагонали, горизонтали или вертикали. Даны две различные клетки шахматной доски, определите, может ли ферзь попасть с первой клетки на вторую одним ходом.
//
//Формат входных данных
//        Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
//Формат выходных данных
//        Программа должна вывести YES, если из первой клетки ходом ферзя можно попасть во вторую или NO в противном случае.
//Sample Input 1:
//
//1
//1
//2
//2
//Sample Output 1:
//
//YES
//        Sample Input 2:
//
//1
//1
//2
//3
//Sample Output 2:
//
//NO

#include "t07_chess_queen.h"
#include <iostream>

using namespace std;

int t07_chess_queen() {
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	cin >> x1 >> y1 >> x2 >> y2;
	if ((x1 == x2 || y1 == y2) || (x1 - x2) * (x1 - x2) == (y1 - y2) * (y1 - y2)) { cout << "YES"; }
	else cout << "NO";
};