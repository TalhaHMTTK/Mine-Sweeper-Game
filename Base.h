#pragma once
#include <iostream>
#include "Header.h"
#include<ctime>
#include<fstream>
#include<random>
#include<conio.h>
#include<iomanip>
#include <time.h>
using namespace std;
int x1 = 0, yy1 = 0, x2 = 50, y2 = 50;
int space = 170;
int arrX = 0, arrY = 0;
int seconds = 0;
class game {

public:
	virtual void PrintGrid(int row, int col) = 0;
	void PrintSquare(int i, int j) {
		myRect((i * 50) + space + 5, (j * 50) + space + 5, (i * 50) + space + 45, (j * 50) + space + 45, 255, 0, 0);
	}
	void lettersnNumbers(char chr, int x1, int x2, int y1, int y2, int size, int R = 0, int G = 0, int B = 0) {
		x1 += 5;
		x2 -= 5;
		y1 += 5;
		y2 -= 5;
		int mid_x = (x1 + x2) / 2;
		int mid_y = (y1 + y2) / 2;

		if (chr == 'A') {
			myLines(mid_x, y1, x1, y2, R, G, B);
			myLines(mid_x, y1, x2, y2, R, G, B);
			myLines(x1 + 2, mid_y + size / 2, x2 - 3, mid_y + size / 2, R, G, B);
		}
		else if (chr == 'B') {
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, y1, mid_x + size / 4, y1 + size / 8, R, G, B);
			myLines(mid_x + size / 4, y1 + size / 8, mid_x, mid_y, R, G, B);
			myLines(x1, mid_y, mid_x, mid_y, R, G, B);
			myLines(mid_x, mid_y, x2, mid_y + size / 4, R, G, B);
			myLines(x2, mid_y + size / 4, mid_x + size / 8, y2, R, G, B);
			myLines(mid_x + size / 8, y2, x1, y2, R, G, B);
		}
		else if (chr == 'C') {
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x2, y1, x2, y1 + size / 4, R, G, B);
			myLines(x2, y2, x2, y2 - size / 4, R, G, B);
			myLines(x1, y2, x2, y2, R, G, B);
		}
		else if (chr == 'D') {
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, y1, mid_x + size / 4, y1 + size / 4, R, G, B);
			myLines(mid_x + size / 4, y1 + size / 4, mid_x + size / 4, y2 - size / 4, R, G, B);
			myLines(mid_x + size / 4, y2 - size / 4, x1, y2, R, G, B);
		}
		else if (chr == 'E') {
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x1, mid_y, x2, mid_y, R, G, B);
			myLines(x1, y2, x2, y2, R, G, B);
		}
		else if (chr == 'F') {
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x1, mid_y, x2, mid_y, R, G, B);
		}
		else if (chr == 'G') {
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x2, y1, x2, y1 + size / 4, R, G, B);
			myLines(x2, y2, x2, y2 - size / 2, R, G, B);
			myLines(x2, y2 - size / 2, mid_x, y2 - size / 2, R, G, B);
			myLines(x1, y2, x2, y2, R, G, B);
		}
		else if (chr == 'H') {
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x2, y1, x2, y2, R, G, B);
			myLines(x1, mid_y, x2, mid_y, R, G, B);
		}
		else if (chr == 'I') {
			myLines(mid_x, y1, mid_x, y2, R, G, B);
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x1, y2, x2, y2, R, G, B);
		}
		else if (chr == 'J') {
			myLines(x2, y1, x2, y2, R, G, B);
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x2, y2, x1, y2, R, G, B);
			myLines(x1, y2, x1, y2 - size / 2, R, G, B);
		}
		else if (chr == 'K') {
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, mid_y, x2, y1, R, G, B);
			myLines(x1, mid_y, x2, y2, R, G, B);
		}
		else if (chr == 'L') {
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, y2, x2, y2, R, G, B);
		}
		else if (chr == 'M') {
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, y1, mid_x, mid_y, R, G, B);
			myLines(mid_x, mid_y, x2, y1, R, G, B);
			myLines(x2, y1, x2, y2, R, G, B);
		}
		else if (chr == 'N') {
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, y1, x2, y2, R, G, B);
			myLines(x2, y1, x2, y2, R, G, B);
		}
		else if (chr == 'O') {
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x1, y2, x2, y2, R, G, B);
			myLines(x2, y1, x2, y2, R, G, B);
		}
		else if (chr == 'P') {
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, y1, mid_x + size / 4, y1 + size / 8, R, G, B);
			myLines(mid_x + size / 4, y1 + size / 8, mid_x, mid_y, R, G, B);
			myLines(x1, mid_y, mid_x, mid_y, R, G, B);

		}
		else if (chr == 'Q') {
			myLines(x1, y1, x1, y2 - 5, R, G, B);
			myLines(x1, y1, mid_x + 3, y1, R, G, B);
			myLines(mid_x + 3, y1, mid_x + 3, y2 - 5, R, G, B);
			myLines(x1, y2 - 5, mid_x + 3, y2 - 5, R, G, B);
			myLines(mid_x - 2, mid_y, mid_x + 3, y2 - 5, R, G, B);
			myLines(mid_x + 3, y2 - 5, x2, y2, R, G, B);
		}
		else if (chr == 'R') {
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, y1, mid_x + size / 4, y1 + size / 8, R, G, B);
			myLines(mid_x + size / 4, y1 + size / 8, mid_x, mid_y, R, G, B);
			myLines(x1, mid_y, mid_x, mid_y, R, G, B);
			myLines(mid_x, mid_y, x2, y2, R, G, B);
		}
		else if (chr == 'S') {
			myLines(mid_x, y1, x2, y1 + size / 2, R, G, B);
			myLines(mid_x, y1, x1, y1 + size / 2, R, G, B);
			myLines(x1, y1 + size / 2, x2, y2 - size / 2, R, G, B);
			myLines(x2, y2 - size / 2, mid_x, y2, R, G, B);
			myLines(mid_x, y2, x1, y2 - size / 2, R, G, B);
		}
		else if (chr == 'T') {
			myLines(mid_x, y1, mid_x, y2, R, G, B);
			myLines(x1, y1, x2, y1, R, G, B);
		}
		else if (chr == 'U') {
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, y2, x2, y2, R, G, B);
			myLines(x2, y1, x2, y2, R, G, B);

		}
		else if (chr == 'V') {
			myLines(x1, y1, mid_x, y2, R, G, B);
			myLines(mid_x, y2, x2, y1, R, G, B);
		}
		else if (chr == 'W') {
			myLines(x1, y1, mid_x - size / 8, y2, R, G, B);
			myLines(mid_x - size / 8, y2, mid_x, mid_y, R, G, B);
			myLines(mid_x, mid_y, mid_x + size / 8, y2, R, G, B);
			myLines(mid_x + size / 8, y2, x2, y1, R, G, B);
		}
		else if (chr == 'X') {
			myLines(x1, y1, x2, y2, R, G, B);
			myLines(x2, y1, x1, y2, R, G, B);

		}
		else if (chr == 'Y') {
			myLines(x1, y1, mid_x, mid_y, R, G, B);
			myLines(x2, y1, x1, y2, R, G, B);
		}
		else if (chr == 'Z') {
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x2, y1, x1, y2, R, G, B);
			myLines(x1, y2, x2, y2, R, G, B);
		}
		else if (chr == '.') {
			myRects(x2, y2 - size / 8, mid_x + size / 4, y2, R, G, B);
		}
		else if (chr == ',') {
			myRects(x2, y2 - size / 3, mid_x + size / 4, y2 - size / 6, R, G, B);
			myLines(x2, y2 - size / 3, x2, y2, R, G, B);
			myLines(x2, y2, mid_x + size / 4, y2, R, G, B);
		}
		else if (chr == '!') {
			myRects(mid_x - size / 8, y1, mid_x - 1, y2 - size / 3, R, G, B);
			myRects(mid_x - size / 8, y2 - size / 8, mid_x, y2, R, G, B);
		}
		else if (chr == ':') {
			myRects(x2, y2 - 20, mid_x + size / 4, y2 - 16, R, G, B);
			myRects(x2, y2 - 4, mid_x + size / 4, y2, R, G, B);
		}
		else if (chr == '0') {
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x2, y1, x2, y2, R, G, B);
			myLines(x1, y2, x2, y2, R, G, B);
			myLines(x2, y1, x1, y2, R, G, B);
		}
		else if (chr == '1') {
			myLines(x1, mid_y - size / 2, mid_x, y1, R, G, B);
			myLines(mid_x, y1, mid_x, y2, R, G, B);
			myLines(x1, y2, x2, y2, R, G, B);
		}
		else if (chr == '2') {
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x2, y1, x2, mid_y, R, G, B);
			myLines(x2, mid_y, x1, mid_y, R, G, B);
			myLines(x1, mid_y, x1, y2, R, G, B);
			myLines(x1, y2, x2, y2, R, G, B);
		}
		else if (chr == '3') {
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x2, y1, x2, mid_y, R, G, B);
			myLines(x2, mid_y, x1, mid_y, R, G, B);
			myLines(x2, mid_y, x2, y2, R, G, B);
			myLines(x2, y2, x1, y2, R, G, B);
		}
		else if (chr == '4') {
			myLines(x1, y1, x1, mid_y, R, G, B);
			myLines(x1, mid_y, x2, mid_y, R, G, B);
			myLines(mid_x + size / 6, y1, mid_x + size / 6, y2, R, G, B);
		}
		else if (chr == '5') {
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x1, y1, x1, mid_y, R, G, B);
			myLines(x1, mid_y, x2, mid_y, R, G, B);
			myLines(x2, mid_y, x2, y2, R, G, B);
			myLines(x2, y2, x1, y2, R, G, B);
		}
		else if (chr == '6') {
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, mid_y, x2, mid_y, R, G, B);
			myLines(x2, mid_y, x2, y2, R, G, B);
			myLines(x2, y2, x1, y2, R, G, B);
		}
		else if (chr == '7') {
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x2, y1, x2, y2, R, G, B);
		}
		else if (chr == '8') {
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x1, y1, x1, y2, R, G, B);
			myLines(x1, mid_y, x2, mid_y, R, G, B);
			myLines(x2, y1, x2, y2, R, G, B);
			myLines(x2, y2, x1, y2, R, G, B);
		}
		else if (chr == '9') {
			myLines(x1, y1, x2, y1, R, G, B);
			myLines(x1, y1, x1, mid_y, R, G, B);
			myLines(x1, mid_y, x2, mid_y, R, G, B);
			myLines(x2, y1, x2, y2, R, G, B);
			myLines(x2, y2, x1, y2, R, G, B);
		}
		else if (chr == '-')
			myRects(x1 - 5, y1 - 5, x2 + 5, y2 + 5, 0, 0, 0);
	}
	//This Function Converts a Cstring to uppercase
	void Capitalizer(char text[]) {
		for (int i = 0; i < strlen(text); i++)
			if (text[i] >= 'a' && text[i] <= 'z')
				text[i] -= 32;
	}
	//This Function to print Text on Screen
	void drawText(int size, int start_x, int start_y, int R, int G, int B, char text[], bool isNum = true, int num = 10) {
		int idx = 0;
		int idx_x = 0;
		int idx_y = 0;
		int x1, x2, y1, y2;
		int digit_count = 0;
		int len = strlen(text);
		char temp[100];

		strcpy_s(temp, text);
		//If this function takes a number to print then he converts the number into atring using following loop
		if (isNum == true) {
			int reverse_num = 0;
			int i;

			for (; num > 0; num /= 10, digit_count++)
				reverse_num = (reverse_num * 10) + num % 10;

			for (i = len; i - len < digit_count; i++, reverse_num /= 10)
				temp[i] = (reverse_num % 10) + 48;

			temp[i] = '\0';
		}
		//Now the cstring is converted into upper case letters
		Capitalizer(temp);
		//This loop prints each individual letter on the screen
		for (idx = 0; idx < strlen(temp); idx++)
		{
			x1 = start_x + size * idx_x;
			x2 = start_x + size * (idx_x + 1);

			if (x2 > 1585 - size) {
				idx_y++;
				idx_x = 0;
				x1 = start_x + size * idx_x;
				x2 = start_x + size * (idx_x + 1);

			}

			y1 = start_y + 2 * size * idx_y;
			y2 = start_y + 2 * size * (idx_y + 1);
			lettersnNumbers(temp[idx], x1, x2, y1, y2, size, R, G, B);
			idx_x++;
		}

	}
	virtual void check(int x1, int y1, int** arxy, int count, int row, int col) = 0;
	virtual void PrintMine(int** arxy, int row, int col) = 0;
	virtual void random(int flg, int** arxy, int row, int col) = 0;
	virtual void PutMines(int** MainAr, int** arxy, int row, int col) = 0;
	//	virtual void countmine(int** MainAr, int row, int col) = 0;
	void countmine(int** MainAr, int row, int col)
	{


		int c = 0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (MainAr[i][j] != 9 && i != 0 && i != row - 1 && j != 0 && j != col - 1)
				{
					if (MainAr[i][j + 1] == 9)
					{
						c++;
					}
					if (MainAr[i][j - 1] == 9)
					{
						c++;
					}
					if (MainAr[i - 1][j] == 9)
					{
						c++;
					}
					if (MainAr[i + 1][j] == 9)
					{
						c++;
					}
					if (MainAr[i + 1][j - 1] == 9)
					{
						c++;
					}
					if (MainAr[i + 1][j + 1] == 9)
					{
						c++;
					}
					if (MainAr[i - 1][j - 1] == 9)
					{
						c++;
					}
					if (MainAr[i - 1][j + 1] == 9)
					{
						c++;
					}
					MainAr[i][j] = c;
					c = 0;
				}
				if (MainAr[i][j] != 9 && i == 0 && j >= 1 && j <= col - 2)
				{
					if (MainAr[i][j + 1] == 9)
					{
						c++;
					}
					if (MainAr[i][j - 1] == 9)
					{
						c++;
					}
					if (MainAr[i + 1][j] == 9)
					{
						c++;
					}


					if (MainAr[i + 1][j - 1] == 9)
					{
						c++;
					}
					if (MainAr[i + 1][j + 1] == 9)
					{
						c++;
					}
					MainAr[i][j] = c;
					c = 0;
				}
				if (MainAr[i][j] != 9 && i == row - 1 && j >= 1 && j <= col - 2)
				{
					if (MainAr[i][j + 1] == 9)
					{
						c++;
					}
					if (MainAr[i][j - 1] == 9)
					{
						c++;
					}
					if (MainAr[i - 1][j] == 9)
					{
						c++;
					}


					if (MainAr[i - 1][j - 1] == 9)
					{
						c++;
					}
					if (MainAr[i - 1][j + 1] == 9)
					{
						c++;
					}
					MainAr[i][j] = c;
					c = 0;
				}
				if (MainAr[i][j] != 9 && i >= 1 && i <= row - 2 && j == 0)
				{
					if (MainAr[i][j + 1] == 9)
					{
						c++;
					}

					if (MainAr[i - 1][j] == 9)
					{
						c++;
					}
					if (MainAr[i + 1][j] == 9)
					{
						c++;
					}

					if (MainAr[i + 1][j + 1] == 9)
					{
						c++;
					}

					if (MainAr[i - 1][j + 1] == 9)
					{
						c++;
					}
					MainAr[i][j] = c;
					c = 0;
				}
				if (MainAr[i][j] != 9 && i >= 1 && i <= row - 2 && j == col - 1)
				{
					if (MainAr[i][j - 1] == 9)
					{
						c++;
					}

					if (MainAr[i - 1][j] == 9)
					{
						c++;
					}
					if (MainAr[i + 1][j] == 9)
					{
						c++;
					}

					if (MainAr[i + 1][j - 1] == 9)
					{
						c++;
					}

					if (MainAr[i - 1][j - 1] == 9)
					{
						c++;
					}
					MainAr[i][j] = c;
					c = 0;
				}

				if (MainAr[i][j] != 9 && i == 0 && j == 0)
				{
					if (MainAr[i][j + 1] == 9)
					{
						c++;
					}

					if (MainAr[i + 1][j] == 9)
					{
						c++;
					}

					if (MainAr[i + 1][j + 1] == 9)
					{
						c++;
					}

					MainAr[i][j] = c;
					c = 0;
				}

				if (MainAr[i][j] != 9 && i == 0 && j == col - 1)
				{

					if (MainAr[i][j - 1] == 9)
					{
						c++;
					}

					if (MainAr[i + 1][j] == 9)
					{
						c++;
					}
					if (MainAr[i + 1][j - 1] == 9)
					{
						c++;
					}

					MainAr[i][j] = c;
					c = 0;
				}

				if (MainAr[i][j] != 9 && i == row - 1 && j == 0)
				{
					if (MainAr[i][j + 1] == 9)
					{
						c++;
					}

					if (MainAr[i - 1][j] == 9)
					{
						c++;
					}

					if (MainAr[i - 1][j + 1] == 9)
					{
						c++;
					}
					MainAr[i][j] = c;
					c = 0;
				}

				if (MainAr[i][j] != 9 && i == row - 1 && j == col - 1)
				{

					if (MainAr[i][j - 1] == 9)
					{
						c++;
					}
					if (MainAr[i - 1][j] == 9)
					{
						c++;
					}
					if (MainAr[i - 1][j - 1] == 9)
					{
						c++;
					}
					MainAr[i][j] = c;
					c = 0;
				}
			}

		}


	}
	void Printflage(int j, int i)
	{
		myRect((i * 50) + space + 15, (j * 50) + space + 5, (i * 50) + space + 45, (j * 50) + space + 27, 0, 100, 0);
		myLines((i * 50) + space + 10, (j * 50) + space + 4, (i * 50) + space + 10, (j * 50) + space + 40, 255, 255, 255);
	}
	void Printnumber0(int j, int i)
	{
		char text[2] = "0";
		if (i < 28)
		{
			drawText(22, (i * 50) + space + 10, (j * 50) + space, 0, 0, 255, text, false, 0);
		}
		else
		{
			myEllipse((i * 50) + space + 5, (j * 50) + space + 2, (i * 50) + space + 45, (j * 50) + space + 42, 0, 0, 255);
		}
	}
	void Printnumber1(int j, int i)
	{


		char text[2] = "1";
		if (i < 28)
		{
			drawText(22, (i * 50) + space + 10, (j * 50) + space, 0, 0, 255, text, false, 0);
		}
		else
		{
			myLines((i * 50) + space + 25, (j * 50) + space + 4, (i * 50) + space + 25, (j * 50) + space + 40, 0, 0, 255);
		}
	}
	void Printnumber2(int j, int i)
	{

		char text[2] = "2";
		if (i < 28)
		{
			drawText(22, (i * 50) + space + 10, (j * 50) + space, 0, 0, 255, text, false, 0);
		}
		else
		{
			myLines((i * 50) + space + 15, (j * 50) + space + 4, (i * 50) + space + 15, (j * 50) + space + 40, 0, 0, 255);
			myLines((i * 50) + space + 35, (j * 50) + space + 4, (i * 50) + space + 35, (j * 50) + space + 40, 0, 0, 255);
		}

	}
	void Printnumber3(int j, int i)
	{

		char text[2] = "3";
		if (i < 28)
		{
			drawText(22, (i * 50) + space + 10, (j * 50) + space, 0, 0, 255, text, false, 0);
		}
		else
		{
			myLines((i * 50) + space + 10, (j * 50) + space + 4, (i * 50) + space + 10, (j * 50) + space + 40, 0, 0, 255);
			myLines((i * 50) + space + 25, (j * 50) + space + 4, (i * 50) + space + 25, (j * 50) + space + 40, 0, 0, 255);
			myLines((i * 50) + space + 40, (j * 50) + space + 4, (i * 50) + space + 40, (j * 50) + space + 40, 0, 0, 255);
		}

	}
	void Printnumber4(int j, int i)
	{

		char text[2] = "4";
		if (i < 28)
		{
			drawText(22, (i * 50) + space + 10, (j * 50) + space, 0, 0, 255, text, false, 0);
		}
		else
		{
			myLines((i * 50) + space + 10, (j * 50) + space + 4, (i * 50) + space + 10, (j * 50) + space + 40, 0, 0, 255);
			myLines((i * 50) + space + 20, (j * 50) + space + 4, (i * 50) + space + 30, (j * 50) + space + 40, 0, 0, 255);
			myLines((i * 50) + space + 40, (j * 50) + space + 4, (i * 50) + space + 30, (j * 50) + space + 40, 0, 0, 255);
		}

	}
	void Printnumber5(int j, int i)
	{

		char text[2] = "5";
		if (i < 28)
		{
			drawText(22, (i * 50) + space + 10, (j * 50) + space, 0, 0, 255, text, false, 0);
		}
		else
		{
			myLines((i * 50) + space + 10, (j * 50) + space + 4, (i * 50) + space + 25, (j * 50) + space + 40, 0, 0, 255);
			myLines((i * 50) + space + 40, (j * 50) + space + 4, (i * 50) + space + 25, (j * 50) + space + 40, 0, 0, 255);
		}


	}
	void Printnumber6(int j, int i)
	{
		char text[2] = "6";
		if (i < 28)
		{
			drawText(22, (i * 50) + space + 10, (j * 50) + space, 0, 0, 255, text, false, 0);
		}
		else
		{
			myLines((i * 50) + space + 10, (j * 50) + space + 4, (i * 50) + space + 20, (j * 50) + space + 40, 0, 0, 255);
			myLines((i * 50) + space + 30, (j * 50) + space + 4, (i * 50) + space + 20, (j * 50) + space + 40, 0, 0, 255);
			myLines((i * 50) + space + 40, (j * 50) + space + 4, (i * 50) + space + 40, (j * 50) + space + 40, 0, 0, 255);
		}
	}
	void Printnumber7(int j, int i)
	{
		char text[2] = "7";
		if (i < 28)
		{
			drawText(22, (i * 50) + space + 10, (j * 50) + space, 0, 0, 255, text, false, 0);
		}
		else
		{
			myLines((i * 50) + space + 10, (j * 50) + space + 4, (i * 50) + space + 20, (j * 50) + space + 40, 0, 0, 255);
			myLines((i * 50) + space + 30, (j * 50) + space + 4, (i * 50) + space + 20, (j * 50) + space + 40, 0, 0, 255);
			myLines((i * 50) + space + 38, (j * 50) + space + 4, (i * 50) + space + 38, (j * 50) + space + 40, 0, 0, 255);
			myLines((i * 50) + space + 45, (j * 50) + space + 4, (i * 50) + space + 45, (j * 50) + space + 40, 0, 0, 255);
		}
	}
	void Printnumber8(int j, int i)
	{
		char text[2] = "8";
		if (i < 28)
		{
			drawText(22, (i * 50) + space + 10, (j * 50) + space, 0, 0, 255, text, false, 0);
		}
		else
		{
			myLines((i * 50) + space + 10, (j * 50) + space + 4, (i * 50) + space + 20, (j * 50) + space + 40, 0, 0, 255);
			myLines((i * 50) + space + 30, (j * 50) + space + 4, (i * 50) + space + 20, (j * 50) + space + 40, 0, 0, 255);
			myLine((i * 50) + space + 35, (j * 50) + space + 4, (i * 50) + space + 35, (j * 50) + space + 40, 0, 0, 255);
			myLine((i * 50) + space + 42, (j * 50) + space + 4, (i * 50) + space + 42, (j * 50) + space + 40, 0, 0, 255);
			myLine((i * 50) + space + 47, (j * 50) + space + 4, (i * 50) + space + 47, (j * 50) + space + 40, 0, 0, 255);
		}
	}

	void placenumbers(int** MainAr, int row, int col)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (MainAr[i][j] == 10)
				{
					Printflage(i, j);
				}

				else if (MainAr[i][j] == 0)
				{
					Printnumber0(i, j);
				}
				else if (MainAr[i][j] == 1)
				{
					Printnumber1(i, j);
				}
				else if (MainAr[i][j] == 2)
				{
					Printnumber2(i, j);
				}
				else if (MainAr[i][j] == 3)
				{
					Printnumber3(i, j);
				}
				else if (MainAr[i][j] == 4)
				{
					Printnumber4(i, j);
				}
				else if (MainAr[i][j] == 5)
				{
					Printnumber5(i, j);
				}
				else if (MainAr[i][j] == 6)
				{
					Printnumber6(i, j);
				}
				else if (MainAr[i][j] == 7)
				{
					Printnumber7(i, j);
				}
				else if (MainAr[i][j] == 8)
				{
					Printnumber8(i, j);
				}


			}

		}
	}

	void MoveRight()
	{
		x1 = x1 + 50;
		x2 = x2 + 50;
		arrX = arrX + 1;
	}
	void MoveLeft()
	{
		x1 = x1 - 50;
		x2 = x2 - 50;
		arrX = arrX - 1;
	}
	void MoveUp()
	{
		yy1 = yy1 - 50;
		y2 = y2 - 50;
		arrY = arrY - 1;
	}
	void MoveDown()
	{
		yy1 = yy1 + 50;
		y2 = y2 + 50;
		arrY = arrY + 1;
	}
	void DrawCursor()
	{
		myRects(x1 + space, yy1 + space, x2 + space, y2 + space, 255, 0, 0);
	}
	void Printblack(int j, int i)
	{

		myRect((i * 50) + space + 1, (j * 50) + space + 1, (i * 50) + space + 49, (j * 50) + space + 49, 0, 0, 0);

	}

	void Printzero(int x, int  y, int** sys, int** MainAr, int** arxy, int& systop, int row, int col)
	{
		int c = 0;

		int** temp;
		temp = new int* [row];
		for (int i = 0; i < row; i++)
		{
			temp[i] = new int[col];
		}
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{

				temp[i][j] = MainAr[i][j];

			}
		}


		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (MainAr[i][j] == 0) {
					c++;
				}
			}
		}

		int** index = new int* [c];
		for (int i = 0; i < c; i++) {
			index[i] = new int[2];
		}
		int k = 0;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (temp[i][j] == 0) {
					index[k][0] = i;
					index[k][1] = j;
					k++;
				}
			}
		}
		int** task = new int* [c];
		for (int i = 0; i < c; i++) {
			task[i] = new int[2];
		}
		int t = 0;



		if (temp[x][y] == 0) {
			t = 0;
			task[0][0] = x;
			task[0][1] = y;
		}

		int m, n;
		int current_position = 0;
		for (int i = 0; i < c; i++) {
			if (index[i][0] == x && index[i][1] == y) {
				m = index[i][0];
				n = index[i][1];
				index[i][0] = -2;
				index[i][1] = -2;
				break;
			}
		}

		for (int i = 0; i <= t; i++) {
			//cout << "yes lr4l4r," << endl;
			for (int j = 0; j < c; j++) {
				if (index[j][0] == m && index[j][1] == n + 1) {
					t++;

					task[t][0] = index[j][0];
					task[t][1] = index[j][1];
					index[j][0] = -2;
					index[j][1] = -2;
				}
				if (index[j][0] == m && index[j][1] == n - 1) {
					t++;

					task[t][0] = index[j][0];
					task[t][1] = index[j][1];
					index[j][0] = -2;
					index[j][1] = -2;
				}
				if (index[j][0] == m - 1 && index[j][1] == n) {
					t++;

					task[t][0] = index[j][0];
					task[t][1] = index[j][1];
					index[j][0] = -2;
					index[j][1] = -2;
				}
				if (index[j][0] == m + 1 && index[j][1] == n) {
					t++;

					task[t][0] = index[j][0];
					task[t][1] = index[j][1];
					index[j][0] = -2;
					index[j][1] = -2;
				}
				if (index[j][0] == m + 1 && index[j][1] == n + 1) {
					t++;

					task[t][0] = index[j][0];
					task[t][1] = index[j][1];
					index[j][0] = -2;
					index[j][1] = -2;
				}
				if (index[j][0] == m - 1 && index[j][1] == n + 1) {
					t++;

					task[t][0] = index[j][0];
					task[t][1] = index[j][1];
					index[j][0] = -2;
					index[j][1] = -2;
				}
				if (index[j][0] == m + 1 && index[j][1] == n - 1) {
					t++;

					task[t][0] = index[j][0];
					task[t][1] = index[j][1];
					index[j][0] = -2;
					index[j][1] = -2;
				}
				if (index[j][0] == m - 1 && index[j][1] == n - 1) {
					t++;

					task[t][0] = index[j][0];
					task[t][1] = index[j][1];
					index[j][0] = -2;
					index[j][1] = -2;
				}
			}
			if (current_position < t) {
				current_position++;
				m = task[i + 1][0];
				n = task[i + 1][1];
			}
		}



		for (int i = 0; i <= current_position; i++) {
			x = task[i][0];
			y = task[i][1];
			if (x != 0 && x != row - 1 && y != 0 && y != col - 1)
			{
				temp[x][y + 1] = -2;



				temp[x][y - 1] = -2;



				temp[x - 1][y] = -2;



				temp[x + 1][y] = -2;



				temp[x + 1][y - 1] = -2;



				temp[x + 1][y + 1] = -2;



				temp[x - 1][y - 1] = -2;



				temp[x - 1][y + 1] = -2;



				temp[x][y] = -2;

			}
			if (x == 0 && y >= 1 && y <= col - 2)
			{
				temp[x][y + 1] = -2;



				temp[x][y - 1] = -2;



				temp[x + 1][y] = -2;





				temp[x + 1][y - 1] = -2;



				temp[x + 1][y + 1] = -2;



				temp[x][y] = -2;

			}
			if (x == row - 1 && y >= 1 && y <= col - 2)
			{
				temp[x][y + 1] = -2;

				temp[x][y - 1] = -2;

				temp[x - 1][y] = -2;


				temp[x - 1][y - 1] = -2;


				temp[x - 1][y + 1] = -2;


				temp[x][y] = -2;

			}
			if (x >= 1 && x <= row - 2 && y == 0)
			{
				temp[x][y + 1] = -2;




				temp[x - 1][y] = -2;



				temp[x + 1][y] = -2;



				temp[x + 1][y + 1] = -2;



				temp[x - 1][y + 1] = -2;



				temp[x][y] = -2;

			}
			if (x >= 1 && x <= row - 2 && y == col - 1)
			{
				temp[x][y - 1] = -2;




				temp[x - 1][y] = -2;



				temp[x + 1][y] = -2;

				temp[x + 1][y - 1] = -2;




				temp[x - 1][y - 1] = -2;



				temp[x][y] = -2;

			}

			if (x == 0 && y == 0)
			{
				temp[x][y + 1] = -2;




				temp[x + 1][y] = -2;




				temp[x + 1][y + 1] = -2;




				temp[x][y] = -2;

			}

			if (x == 0 && y == col - 1)
			{

				temp[x][y - 1] = -2;




				temp[x + 1][y] = -2;



				temp[x + 1][y - 1] = -2;



				temp[x][y] = -2;

			}

			if (x == row - 1 && y == 0)
			{
				temp[x][y + 1] = -2;




				temp[x - 1][y] = -2;




				temp[x - 1][y + 1] = -2;



				temp[x][y] = -2;

			}

			if (x == row - 1 && y == col - 1)
			{

				temp[x][y - 1] = -2;



				temp[x - 1][y] = -2;



				temp[x - 1][y - 1] = -2;



				temp[x][y] = -2;

			}

		}


		for (int i = 0; i <= current_position; i++) {
			delete[]task[i];
		}
		delete[]task;
		for (int i = 0; i < c; i++) {
			delete[]index[i];
		}
		delete[]index;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (temp[i][j] == -2 && sys[i][j] != 10)
				{
					sys[i][j] = MainAr[i][j];
				}
			}
			cout << endl;
		}
	}

	void flagesystem(int i, int  j, int** sys, int** MainAr, int** arxy, int& systop, int row, int col)
	{
		if (sys[i][j] != 10 && sys[i][j] == 11)
		{
			sys[i][j] = 10;
			Printflage(i, j);
		}
		else if (sys[i][j] == 10)
		{
			sys[i][j] = 11;
			Printblack(i, j);
		}
	}
	void  printsystem(int i, int  j, int** sys, int** MainAr, int** arxy, int& systop, int row, int col)
	{
		if (sys[i][j] != 10)
		{
			sys[i][j] = MainAr[i][j];
			if (MainAr[i][j] == 9)
			{
				systop = 1;
				PrintMine(arxy, row, col);
			}
			else if (MainAr[i][j] == 0)
			{
				//Printnumber0(i, j);
				Printzero(i, j, sys, MainAr, arxy, systop, row, col);
				system("cls");
			}
			else if (MainAr[i][j] == 1)
			{
				Printnumber1(i, j);
			}
			else if (MainAr[i][j] == 2)
			{
				Printnumber2(i, j);
			}
			else if (MainAr[i][j] == 3)
			{
				Printnumber3(i, j);
			}
		}

	}
	void printall(int** sys, int** arxy, int row, int col)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (sys[i][j] == 9)
				{
					PrintMine(arxy, row, col);
				}

				if (sys[i][j] == 0)
				{
					Printnumber0(i, j);
				}
				else if (sys[i][j] == 1)
				{
					Printnumber1(i, j);
				}
				else if (sys[i][j] == 2)
				{
					Printnumber2(i, j);
				}
				else if (sys[i][j] == 3)
				{
					Printnumber3(i, j);
				}
				else if (sys[i][j] == 4)
				{
					Printnumber4(i, j);
				}
				else if (sys[i][j] == 5)
				{
					Printnumber5(i, j);
				}
				else if (sys[i][j] == 6)
				{
					Printnumber6(i, j);
				}
				else if (sys[i][j] == 7)
				{
					Printnumber7(i, j);
				}
				else if (sys[i][j] == 8)
				{
					Printnumber8(i, j);
				}
				else if (sys[i][j] == 8)
				{
					Printnumber8(i, j);
				}
				else if (sys[i][j] == 10)
				{
					Printflage(i, j);
				}
				else if (sys[i][j] == 11)
				{
					Printblack(i, j);
				}

			}

		}
	}
	void getcoord(int& x, int& y, int& found, int row, int col)
	{
		POINT p;
		int ix = 0, jy = 0;
		GetCursorPos(&p);
		ix = p.x;
		jy = p.y;
		int idx = 0;
		int jdx = 0;
		for (int i = 158; i < 158 + 40 * row; i = i + 40)
		{
			for (int j = 134; j < 134 + 40 * col; j = j + 40)
			{
				if (ix > j && ix < j + 40 && jy > i && jy < i + 40)
				{
					x = idx;
					y = jdx;
					found = 1;
				}
				jdx++;

			}
			jdx = 0;
			idx++;
		}


	}
	void timer(int& min, int& le)
	{

		char text[10] = "time:";
		seconds++;
		if (seconds == 60 * le)
		{
			min++;
			le++;
			myRect(0, 0, 500, 100, 0, 0, 0);
		}

		drawText(30, 0, 0, 176, 224, 230, text, true, min);
	}
	void youlose()
	{
		char text[100] = "You lose Better luck next time ";
		drawText(30, 0, 0, 176, 196, 222, text, false, 0);
	}
	void youwin()
	{
		char text[100] = "Congratulations You win ";
		drawText(30, 0, 0, 176, 196, 222, text, false, 0);
	}
	bool winner(int** sys, int row, int col)
	{
		int count = 0;
		if (row == 9 && col == 9)
		{
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					if (sys[i][j] == 11 || sys[i][j] == 10)
					{
						count++;
					}

				}
			}
			if (count == 10)
			{
				return true;
			}
		}

		else if (row == 16 && col == 16)
		{
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					if (sys[i][j] == 11 || sys[i][j] == 10)
					{
						count++;
					}
				}
			}
			if (count == 40)
			{
				return true;
			}
		}
		else if (row == 16 && col == 30)
		{
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					if (sys[i][j] == 11 || sys[i][j] == 10)
					{
						count++;
					}
				}
			}
			if (count == 99)
			{
				return true;
			}
		}
		else
			return false;
	}
	void fileuser(string s1, int min)
	{
		ifstream in;
		ofstream out;
		in.open("my_file.txt", ios::out);
		string s;
		in >> s;
		cout << s << endl;
		int pp[5];
		for (int i = 0; i < 5; i++) {
			in >> pp[i];
			cout << "value is " << pp[i] << endl;
		}
		in.close();

		remove("my_file.txt");

		int idx = 10;
		for (int i = 0; i < 5; i++)
		{
			if (pp[i] >= min)
			{
				//updating the time of user 
				pp[i] = min;
				idx = i;
				break;
			}
		}

		if (idx != 10)
		{
			int l = 0, l1 = 0;
			for (int i = 0; s[i] != '\0'; i++)
			{
				l++;
			}

			char* arr = new char[l];
			for (int i = 0; s[i] != '\0'; i++)
			{
				arr[i] = s[i];
			}
			// s1 takes name from the user

			for (int i = 0; s1[i] != '\0'; i++)
			{
				l1++;
			}


			int k = 0;
			int index[5];
			int l2 = 0;
			// arr1 is the update date of players name and have to store back in same file 
			char** arr1 = new char* [5];

			for (int i = 0; s[i] != '\0'; i++)
			{
				l2++;
				if (s[i] == ',')
				{
					index[k] = l2;
					k++;
					l2 = 0;
				}
			}
			index[idx] = l1;
			for (int i = 0; i < 5; i++)
			{
				arr1[i] = new char[index[i]];
			}

			k = 0;
			int p = 0, c = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < index[i]; j++)
				{
					if (i == idx)
					{
						arr1[i][j] = s1[p];
						p++;

					}
					if (i == idx)
					{
						c = k;
						for (int m = c; s[m] != ','; m++)
						{
							k++;
						}

					}
					else
					{
						arr1[i][j] = s[k];
						k++;
					}
				}
			}
			int f = 0;

			for (int i = 0; i < 5; i++)
			{
				f = f + index[i];
			}
			int h = 0;
			char* final = new char[f];
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < index[i]; j++)
				{
					final[h] = arr1[i][j];
					h++;
				}
			}
			out.open("my_file.txt");
			for (int i = 0; i < f; i++)
			{
				out << final[i];
			}
			out << ",";
			out << endl;

			for (int i = 0; i < 5; i++) {
				out << pp[i] << endl;
			}
			out.close();

		}

	}
	void getcoordback(int& back)
	{
		POINT p;
		int ix = 0, jy = 0;
		GetCursorPos(&p);
		ix = p.x;
		jy = p.y;
		
		if (ix > 0 && ix < 100 && jy > 580 && jy < 630)
		{
			back = 1;
		}

	}
	void printback()
	{
		char text[10] = "exit ";
		drawText(30, 0, 700, 176, 196, 222, text, false, 0);
	}
	void printEverything(int row, int col)
	{
		//row = 16; col = 16;
		int back=0 ;
		int win = 0;
		int le = 1;
		int min = 0;
		int found = 0;
		int x = 0, y = 0;
		int idx = 0, jdx = 0;
		int systop = 0;
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
		int** arxy = new int* [cc];
		for (int i = 0; i < cc; i++) {
			arxy[i] = new int[2];
		}
		int flg = 0;
		int** MainAr;
		MainAr = new int* [row];

		for (int i = 0; i < row; i++)
		{
			MainAr[i] = new int[col];

		}
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				MainAr[i][j] = 0;
			}
		}


		int** sys;
		sys = new int* [row];
		for (int i = 0; i < row; i++)
		{
			sys[i] = new int[col];
		}

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				sys[i][j] = 11;
			}
		}


		random(flg, arxy, row, col);
		PutMines(MainAr, arxy, row, col);
		countmine(MainAr, row, col);
			while (systop == 0 || win == 0)
			{
				char g[20] = "minesweeper";
				drawText(30, 370, 20, 176, 224, 230, g, false, 0);
				timer(min, le);
				/*DrawCursor();*/
				win = winner(sys, row, col);
				printall(sys, arxy, row, col);
				PrintGrid(row, col);

				flg = 1;
				int key = 0;
				isCursorKeyPressed(key);
				if (GetAsyncKeyState(0x01))
				{
					getcoord(x, y, found, row, col);
					if (found == 1)
					{
						flagesystem(x, y, sys, MainAr, arxy, systop, row, col);
					}
					found = 0;
					

				}
				else if (GetAsyncKeyState(0x02))
				{
					getcoord(x, y, found, row, col);
					if (found == 1)
					{
						printsystem(x, y, sys, MainAr, arxy, systop, row, col);
					}
					found = 0;
				}
			}
			system("cls");
		int window = 0;
	
		
		if (win == 1)
		{
			while (back==0)
			{
				printback();
				placenumbers(MainAr, row, col);
				PrintMine(arxy, row, col);
				PrintGrid(row, col);
				youwin();
		if (GetAsyncKeyState(0x02))
		{
			getcoordback(back);
		}
			}
			string s1;
			cout << "Enter your name " << endl;
			cin >> s1;
			fileuser(s1, min);
		}

		else
		{
			while (back == 0)
			{
				printback();
				placenumbers(MainAr, row, col);
				PrintMine(arxy, row, col);
				PrintGrid(row, col);
				youlose();
				if (GetAsyncKeyState(0x02))
				{
					getcoordback(back);
				}
			}
		}


		//return 0;

		system("pause");
	}
};