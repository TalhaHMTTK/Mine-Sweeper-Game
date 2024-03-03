#include<iostream>
#include"Header.h"
#include"Base.h"
#include"easy.h"
#include"Header1.h"
#include"Header2.h"
using namespace std;
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
void Capitalizer(char text[]) {
	for (int i = 0; i < strlen(text); i++)
		if (text[i] >= 'a' && text[i] <= 'z')
			text[i] -= 32;
}
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
void getcoordlevel(int& level)
{
	POINT p;
	int ix = 0, jy = 0;
	GetCursorPos(&p);
	ix = p.x;
	jy = p.y;

	if (ix > 295 && ix < 574 && jy > 184 && jy < 254)
	{
		level = 1;
	}
	if (ix > 295 && ix < 574 && jy > 262 && jy < 333)
	{
		level = 2;
	}
	if (ix > 295 && ix < 574 && jy > 334 && jy < 498)
	{
		level = 3;
	}
}
void Printlevel(int i, int j)
{
	char g[20] = "minesweeper";
	drawText(30, 370, 20, 176, 196, 222, g, false, 0);
	char s[20] = "Select level";
	drawText(30, 370, 120, 176, 196, 222, s, false, 0);
	char e[5] = "easy";
	myRects((i * 50) + space + 50, (j * 50) + space + 30, (i * 50) + space + 400, (j * 50) + space + 120, 255, 255, 0);
	drawText(30, 400, 220, 176, 196, 222, e, false, 0);

	char m[10] = "medium";
	myRects((i * 50) + space + 50, (j * 50) + space + 130, (i * 50) + space + 400, (j * 50) + space + 220, 255, 255, 0);
	drawText(30, 400, 320, 176, 196, 222, m, false, 0);
	//hard//
	char h[10] = "hard";
	myRects((i * 50) + space + 50, (j * 50) + space + 230, (i * 50) + space + 400, (j * 50) + space + 320, 255, 255, 0);
	drawText(30, 400, 420, 176, 196, 222, h, false, 0);

}

int main() {

	int l = 4;

		while (l == 4)
		{
			Printlevel(3, 0);
			if (GetAsyncKeyState(0x02))
			{
				getcoordlevel(l);
			}

		}
		system("cls");
		game* ptr;


		if (l == 1)
		{
			ptr = new easy(9, 9);
		}
		else if (l == 2)
		{
			ptr = new easy(16, 16);
		}
		else
		{
			ptr = new easy(16, 30);
		}
		ptr->printEverything(9, 9);
		delete[]ptr;
	
		return 0;
}