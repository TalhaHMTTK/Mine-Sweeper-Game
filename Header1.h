#pragma once
#include <iostream>
#include "Header.h"
#include<ctime>
#include<random>
#include<conio.h>
#include<iomanip>
#include <time.h>
using namespace std;
class medium :public game
{
	int Xx, Yy;
public:
	medium() {
		Xx = 0;
		Yy = 0;
	}
	medium(int x, int y) {
		Xx = x;
		Yy = y;
		printEverything(Xx, Yy);
	}
	void PrintGrid(int row, int col)
	{
		for (int i = 0; i <= row * 50; i = i + 50)
		{
			myLine(space, i + space, col * 50 + space, i + space, 255, 255, 255);

		}
		for (int i = 0; i <= col * 50; i = i + 50)
		{
			myLine(i + space, space, i + space, row * 50 + space, 255, 255, 255);
		}
	}
	void PrintSquare(int i, int j) {
		game::PrintSquare(i, j);
		//myRect((i * 50) + space + 5, (j * 50) + space + 5, (i * 50) + space + 45, (j * 50) + space + 45, 255, 255, 0);
	}
	void check(int x1, int y1, int** arxy, int count, int row, int col) {
		bool t1 = true;
		for (int i = 0; i < count; i++) {
			if (arxy[i][0] == x1 && arxy[i][1] == y1) {
				t1 = false;
			jump:
				mt19937 x(time(0));
				int X, Y;

				X = x();
				Y = x();
				if (X < 0) {
					X = -X;
				}
				if (Y < 0) {
					Y = -Y;
				}
				X %= col;
				Y %= row;
				for (int i = 0; i < count; i++) {
					if (arxy[i][0] == X && arxy[i][1] == Y) {
						goto jump;
					}
				}
				//PrintSquare(X, Y);
				arxy[count][0] = X;
				arxy[count][1] = Y;
				break;
			}

		}
		if (t1 == true) {
			//PrintSquare(x1, y1);
			arxy[count][0] = x1;
			arxy[count][1] = y1;
		}
	}
	void PrintMine(int** arxy, int row, int col) {
		int cc = 0;
		if (row == 9 && col == 9) {
			cc = 10;
		}
		else if (row == 16 && col == 16) {
			cc = 40;
		}
		else if (row == 16 && col == 30) {
			cc = 99;
		}
		for (int i = 0; i < cc; i++) {
			PrintSquare(arxy[i][0], arxy[i][1]);
		}
	}

	void random(int flg, int** arxy, int row, int col)
	{
		int cc = 0;
		if (row == 9 && col == 9) {
			cc = 10;
		}
		else if (row == 16 && col == 16) {
			cc = 40;
		}
		else if (row == 16 && col == 30) {
			cc = 99;
		}

		mt19937 x(time(0));
		int X, Y;
		if (flg == 0) {
			for (int i = 0; i < cc; i++) {
				X = x();
				Y = x();
				if (X < 0) {
					X = -X;
				}
				if (Y < 0) {
					Y = -Y;
				}
				X %= col;
				Y %= row;
				if (i == 0) {
					//	PrintSquare(X , Y );
					arxy[0][0] = X;
					arxy[0][1] = Y;
				}
				else {
					check(X, Y, arxy, i, row, col);
				}
			}
		}
	}

	void PutMines(int** MainAr, int** arxy, int row, int col)
	{
		int cc = 0;
		if (row == 9 && col == 9) {
			cc = 10;
		}
		else if (row == 16 && col == 16) {
			cc = 40;
		}
		else if (row == 16 && col == 30) {
			cc = 99;
		}

		for (int i = 0; i < cc; i++) {
			MainAr[arxy[i][1]][arxy[i][0]] = 9;
		}

	}
	void countmine(int** MainAr, int row, int col)
	{
		game::countmine(MainAr, row, col);

	}
	void placenumbers(int** MainAr, int row, int col)
	{
		game::placenumbers(MainAr, row, col);
	}

	void MoveRight()
	{
		game::MoveRight();
	}
	void MoveLeft()
	{
		game::MoveLeft();
	}
	void MoveUp()
	{
		game::MoveUp();
	}
	void MoveDown()
	{
		game::MoveDown();
	}
	void DrawCursor()
	{
		game::DrawCursor();
	}

	void Printblack(int j, int i)
	{
		game::Printblack(j, i);
	}
	void Printzero(int x, int  y, int** sys, int** MainAr, int** arxy, int& systop, int row, int col)
	{
		game::Printzero(x, y, sys, MainAr, arxy, systop, row, col);
	}
	void flagesystem(int i, int  j, int** sys, int** MainAr, int** arxy, int& systop, int row, int col)
	{
		game::flagesystem(i, j, sys, MainAr, arxy, systop, row, col);
	}
	void  printsystem(int i, int  j, int** sys, int** MainAr, int** arxy, int& systop, int row, int col)
	{
		game::printsystem(i, j, sys, MainAr, arxy, systop, row, col);
	}
	void printall(int** sys, int** arxy, int row, int col)
	{
		game::printall(sys, arxy, row, col);
	}
	void printEverything(int row, int col) {
		game::printEverything(row, col);
	}
};