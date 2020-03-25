/*工程创建者：宫敬哲  学号：2019211914  班级：2019211501  创建时间：2019年10月8日*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <graphics.h>
#include<math.h>
#include<iostream>
void DrawingBar()
{
	setcolor(WHITE);
	line(0, 50, 1280, 50);  /*划线，用于分割不同区域*/
	outtextxy(20, 10, L"打开");   /*功能区内容显示*/
	outtextxy(60, 10, L"清除屏幕");
	outtextxy(130, 10, L"保存");
	setcolor(WHITE);
	line(180, 0, 180, 50);
	outtextxy(190, 10, L"工");   /*工具区内容显示*/
	outtextxy(190, 30, L"具");
	outtextxy(220, 10, L"直线");
	outtextxy(260, 10, L"矩形");
	outtextxy(300, 10, L"圆形");
	outtextxy(220, 30, L"画笔");
	outtextxy(260, 30, L"笔刷");
	outtextxy(300, 30, L"橡皮");
	setcolor(WHITE);
	line(350, 0, 350, 50);
	outtextxy(360, 10, L"颜");   /*颜色区内容展示*/
	outtextxy(360, 30, L"色");
	setfillcolor(BLUE);
	bar(400, 10, 420, 40);
	setfillcolor(GREEN);
	bar(430, 10, 450, 40);
	setfillcolor(RED);
	bar(460, 10, 480, 40);
	setfillcolor(BROWN);
	bar(490, 10, 510, 40);
	setfillcolor(YELLOW);
	bar(520, 10, 540, 40);
	setfillcolor(CYAN);
	bar(550, 10, 570, 40);
	setfillcolor(MAGENTA);
	bar(580, 10, 600, 40);
	setfillcolor(LIGHTGRAY);
	bar(610, 10, 630, 40);
	setfillcolor(WHITE);
	bar(640, 10, 660, 40);
	line(700, 0, 700, 50);
	outtextxy(710, 10, L"大");
	outtextxy(710, 30, L"小");
	fillellipse(750, 25, 5, 5);
	fillellipse(775, 25, 10, 10);
	fillellipse(815, 25, 15, 15);
	fillellipse(860, 25, 20, 20);
	line(900, 0, 900, 50);
	outtextxy(910, 10, L"多边形");
	outtextxy(1000, 10, L"退出");
	setcolor(WHITE);

}
int checkUppercase(char* String)
{
	int is = 0;
	char* p = String;
	for (int i = 0; i < strlen(String); i++)
	{
		is += isupper(*p);
		p++;
	}
	if (is == strlen(String))
		return 1;
	else
		return 0;
}
typedef  struct {
	int type; /* 圆形为1，直线为2，矩形为3，画笔为4 */
	int x1;
	int y1;
	int x2;
	int y2;
	int r;
} SHAPE;
int main() {
	SHAPE shape[5000] = { 0 };
	int x1, y1;   /*x1 y1 分别为鼠标所在的X、Y坐标*/
	int x2, y2;   /*x2,y2 分别为判断鼠标点击时的变量*/
	int choice;   /*choice决定程序能否继续循环下去*/
	int radius;   /*radius为圆的半径*/
	char save;
	int line_x, line_y;
	int i = 0, j = 0, k = 0, z = 0, z_xy = 0;
	int count = 0;
	int t = 0;
	mouse_msg msg = { 0 };
	initgraph(1280, 720);      /*画板初始分辨率为1280*720*/
	setbkcolor(BLACK);
	DrawingBar();
	mousepos(&x1, &y1);
	while (1)
	{
		mousepos(&x1, &y1);/*扫描鼠标坐标并赋值给x1、y1*/
		getchar();
		while (mousemsg())
		{
			msg = getmouse();  /*检测鼠标状态*/
		}
		if (x1 >= 20 && x1 <= 50 && y1 >= 10 && y1 <= 30) {
			setcolor(WHITE);
			rectangle(19, 9, 51, 31);
			//delay_ms(500);
		}
		else if (x1 >= 60 && x1 <= 120 && y1 >= 10 && y1 <= 30) {
			setcolor(WHITE);
			rectangle(59, 9, 121, 31);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 130 && x1 <= 160 && y1 >= 10 && y1 <= 30)
		{
			setcolor(WHITE);
			rectangle(129, 9, 161, 31);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 220 && x1 <= 250 && y1 >= 10 && y1 <= 30)
		{
			setcolor(WHITE);
			rectangle(219, 9, 251, 31);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 260 && x1 <= 290 && y1 >= 10 && y1 <= 30)
		{
			setcolor(WHITE);
			rectangle(259, 9, 291, 31);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 300 && x1 <= 330 && y1 >= 10 && y1 <= 30)
		{
			setcolor(WHITE);
			rectangle(299, 9, 331, 31);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 220 && x1 <= 250 && y1 >= 30 && y1 <= 50)
		{
			setcolor(WHITE);
			rectangle(219, 29, 251, 50);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 260 && x1 <= 290 && y1 >= 30 && y1 <= 50)
		{
			setcolor(WHITE);
			rectangle(259, 29, 291, 50);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 300 && x1 <= 330 && y1 >= 30 && y1 <= 50)
		{
			setcolor(WHITE);
			rectangle(299, 29, 331, 50);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 400 && x1 <= 420 && y1 >= 10 && y1 <= 40)
		{
			setcolor(WHITE);
			rectangle(399, 9, 421, 41);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 430 && x1 <= 450 && y1 >= 10 && y1 <= 40)
		{
			setcolor(WHITE);
			rectangle(429, 9, 451, 41);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 460 && x1 <= 480 && y1 >= 10 && y1 <= 40)
		{
			setcolor(WHITE);
			rectangle(459, 9, 481, 41);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 490 && x1 <= 510 && y1 >= 10 && y1 <= 40)
		{
			setcolor(WHITE);
			rectangle(489, 9, 511, 41);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 520 && x1 <= 540 && y1 >= 10 && y1 <= 40)
		{
			setcolor(WHITE);
			rectangle(519, 9, 541, 41);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 550 && x1 <= 570 && y1 >= 10 && y1 <= 40)
		{
			setcolor(WHITE);
			rectangle(549, 9, 571, 41);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 580 && x1 <= 600 && y1 >= 10 && y1 <= 40)
		{
			setcolor(WHITE);
			rectangle(579, 9, 601, 41);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 610 && x1 <= 630 && y1 >= 10 && y1 <= 40)
		{
			setcolor(WHITE);
			rectangle(609, 9, 631, 41);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 745 && x1 <= 755 && y1 >= 20 && y1 <= 30)
		{
			setcolor(WHITE);
			rectangle(744, 19, 756, 31);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 765 && x1 <= 785 && y1 >= 15 && y1 <= 35)
		{
			setcolor(WHITE);
			rectangle(764, 14, 786, 36);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 800 && x1 <= 830 && y1 >= 10 && y1 <= 40)
		{
			setcolor(WHITE);
			rectangle(799, 9, 831, 41);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 840 && x1 <= 880 && y1 >= 5 && y1 <= 45)
		{
			setcolor(WHITE);
			rectangle(839, 4, 881, 46);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 910 && x1 <= 960 && y1 >= 10 && y1 <= 30)
		{
			setcolor(WHITE);
			rectangle(909, 9, 961, 31);
			//delay_ms(500);
			//setcolor(BLACK);
		}
		else if (x1 >= 1000 && x1 <= 1040 && y1 >= 10 && y1 <= 30) {
			setcolor(WHITE);
			rectangle(999, 9, 1031, 31);
		}
		else {
			setcolor(BLACK);
			rectangle(19, 9, 51, 31);
			rectangle(59, 9, 121, 31);
			rectangle(129, 9, 161, 31);
			rectangle(219, 9, 251, 31);
			rectangle(259, 9, 291, 31);
			rectangle(299, 9, 331, 31);
			rectangle(219, 29, 251, 50);
			rectangle(259, 29, 291, 50);
			rectangle(299, 29, 331, 50);
			rectangle(399, 9, 421, 41);
			rectangle(429, 9, 451, 41);
			rectangle(459, 9, 481, 41);
			rectangle(489, 9, 511, 41);
			rectangle(519, 9, 541, 41);
			rectangle(549, 9, 571, 41);
			rectangle(579, 9, 601, 41);
			rectangle(609, 9, 631, 41);
			rectangle(744, 19, 756, 31);
			rectangle(764, 14, 786, 36);
			rectangle(799, 9, 831, 41);
			rectangle(839, 4, 881, 46);
			rectangle(909, 9, 961, 31);
			rectangle(969, 9, 1021, 31);
			setcolor(WHITE);
		}
		setcolor(WHITE);
		if (msg.is_left())  /*通过判断坐标来进行赋值*/
		{
			if (x1 >= 20 && x1 <= 50 && y1 >= 10 && y1 <= 30) {
				int read, number = 0;
				int type, x1, y1, x2, y2, r;
				FILE* fp = fopen("D:/storage.txt", "r");
				if (fp == NULL) {
					read = 0;
				}
				else {
					read = 1;
				}
				for (; fscanf(fp, "%d %d %d %d %d %d\n", &shape[number].type, &shape[number].x1, &shape[number].y1, &shape[number].x2, &shape[number].y2, &shape[number].r) != EOF; number++) {
					if (shape[number].type == 1) {
						setcolor(WHITE);
						circle(shape[number].x1, shape[number].y1, shape[number].r);
					}
					if (shape[number].type == 3 || shape[number].type == 2) {
						setcolor(WHITE);
						line(shape[number].x1, shape[number].y1, shape[number].x2, shape[number].y2);
					}
				}
				fclose(fp);
			}
			else if (x1 >= 60 && x1 <= 120 && y1 >= 10 && y1 <= 30) {
				cleardevice();
				DrawingBar();
			}
			else if (x1 >= 130 && x1 <= 160 && y1 >= 10 && y1 <= 30) {
				FILE* fp = fopen("D:/storage.txt", "w");
				for (int k = 0; k < count + 1; k++) {
					fprintf(fp, "%d %d %d %d %d %d\n", shape[k].type, shape[k].x1, shape[k].y1, shape[k].x2, shape[k].y2, shape[k].r);
				}
				fclose(fp);
			}

			else if (x1 >= 220 && x1 <= 250 && y1 >= 10 && y1 <= 30)
				j = 1;
			else if (x1 >= 260 && x1 <= 290 && y1 >= 10 && y1 <= 30)
				j = 2;
			else if (x1 >= 300 && x1 <= 330 && y1 >= 10 && y1 <= 30)
				j = 3;
			else if (x1 >= 220 && x1 <= 250 && y1 >= 30 && y1 <= 50)
				j = 4;
			else if (x1 >= 260 && x1 <= 290 && y1 >= 30 && y1 <= 50)
				j = 5;
			else if (x1 >= 300 && x1 <= 330 && y1 >= 30 && y1 <= 50)
				j = 6;
			else if (x1 >= 910 && x1 <= 960 && y1 >= 10 && y1 <= 30)
				j = 7;
			else if (x1 >= 910 && x1 <= 960 && y1 >= 10 && y1 <= 30)
				j = 8;
			else if (x1 >= 400 && x1 <= 420 && y1 >= 10 && y1 <= 40)
				k = 1;
			else if (x1 >= 430 && x1 <= 450 && y1 >= 10 && y1 <= 40)
				k = 2;
			else if (x1 >= 460 && x1 <= 480 && y1 >= 10 && y1 <= 40)
				k = 3;
			else if (x1 >= 490 && x1 <= 510 && y1 >= 10 && y1 <= 40)
				k = 4;
			else if (x1 >= 520 && x1 <= 540 && y1 >= 10 && y1 <= 40)
				k = 5;
			else if (x1 >= 550 && x1 <= 570 && y1 >= 10 && y1 <= 40)
				k = 6;
			else if (x1 >= 580 && x1 <= 600 && y1 >= 10 && y1 <= 40)
				k = 7;
			else if (x1 >= 610 && x1 <= 630 && y1 >= 10 && y1 <= 40)
				k = 8;
			else if (x1 >= 670 && x1 <= 690 && y1 >= 0 && y1 <= 50)
				k = 9;
			else if (x1 >= 745 && x1 <= 755 && y1 >= 20 && y1 <= 30)
				z = 1;
			else if (x1 >= 765 && x1 <= 785 && y1 >= 15 && y1 <= 35)
				z = 2;
			else if (x1 >= 800 && x1 <= 830 && y1 >= 10 && y1 <= 40)
				z = 3;
			else if (x1 >= 840 && x1 <= 880 && y1 >= 5 && y1 <= 45)
				z = 4;
			else if (x1 >= 1000 && x1 <= 1040 && y1 >= 10 && y1 <= 30) {
				closegraph();
			}
		}


		switch (k) {   /*选择颜色*/
		case 1:setcolor(BLUE); break;
		case 2:setcolor(GREEN); break;
		case 3:setcolor(RED); break;
		case 4:setcolor(BROWN); break;
		case 5:setcolor(YELLOW); break;
		case 6:setcolor(CYAN); break;
		case 7:setcolor(MAGENTA); break;
		case 8:setcolor(LIGHTGRAY); break;
		case 9:setcolor(WHITE); break;
		default:break;
		}

		switch (z)
		{
		case 1:z_xy = 5; break;
		case 2:z_xy = 10; break;
		case 3:z_xy = 15; break;
		case 4:z_xy = 20; break;
		default:break;
		}

		if (j == 4) {   /*画笔功能*/
			choice = 0;
			while (1) {
				msg = getmouse();
				if (msg.y >= 0 && msg.y <= 50)
				{
					break;
				}
				if (msg.is_left())
				{
					if (choice == 0)
					{
						x1 = msg.x;
						y1 = msg.y;
						choice = 1;
					}
				}
				else if (choice == 1) {
					x2 = msg.x;
					y2 = msg.y;
					line((int)x1, (int)y1, (int)x2, (int)y2);
					shape[count].type = 3;
					shape[count].x1 = x1;
					shape[count].y1 = y1;
					shape[count].x2 = x2;
					shape[count].y2 = y2;
					count += 1;
					x1 = x2;
					y1 = y2;
				}
				if (msg.is_up()) {
					choice = 0;
				}
			}
		}
		else if (j == 1) {   /*直线功能*/
			choice = 0;
			while (1)
			{
				msg = getmouse();
				if (msg.y >= 0 && msg.y <= 50) {
					break;
				}
				if (msg.is_left()) {
					if (choice == 0) {
						x1 = msg.x;
						y1 = msg.y;
						choice = 1;
					}
				}if (msg.is_up())
				{
					if (msg.is_left()) {
						if (choice == 1) {
							x2 = msg.x;
							y2 = msg.y;
							line((int)x1, (int)y1, (int)x2, (int)y2);
							shape[count].type = 2;
							shape[count].x1 = x1;
							shape[count].y1 = y1;
							shape[count].x2 = x2;
							shape[count].y2 = y2;
							count += 1;
							x1 = x2;
							y1 = y2;
						}
					}
				}
			}
		}
		else if (j == 2) {   /*矩形功能*/
			choice = 0;
			while (1)
			{
				msg = getmouse();
				if (msg.y >= 0 && msg.y <= 50) {
					break;
				}
				if (msg.is_left()) {

					if (choice == 0) {
						x1 = msg.x;   /*此时x1/y1为圆心坐标*/
						y1 = msg.y;
						choice = 1;
					}
					else if (choice == 1) {
						if (msg.is_up()) {
							x2 = msg.x;
							y2 = msg.y;
							rectangle((int)x1, (int)y1, (int)x2, (int)y2);
							shape[count].type = 3;
							shape[count].x1 = x1;
							shape[count].y1 = y1;
							shape[count].x2 = x2;
							shape[count].y2 = y2;
							count += 1;

							choice = 0;
						}
					}
				}
			}
		}
		else if (j == 3) {   /*画圆功能*/
			choice = 0;
			while (1)
			{
				msg = getmouse();
				if (msg.y >= 0 && msg.y <= 50) {
					break;
				}
				if (msg.is_left()) {
					if (choice == 0) {
						x1 = msg.x;
						y1 = msg.y;
						choice = 1;
					}
					else if (choice == 1) {
						if (msg.is_up()) {
							x2 = msg.x;
							y2 = msg.y;
							radius = sqrt((x2 - x1) * (x2 - x1) - (y2 - y1) * (y2 - y1));
							circle((int)x1, (int)y1, (int)radius);
							shape[count].type = 1;
							shape[count].x1 = x1;
							shape[count].y1 = y1;
							shape[count].r = radius;
							count += 1;
							choice = 0;
						}
					}

				}

			}

		}
		else if (j == 5) {
			choice = 0;
			switch (k) {   /*选择颜色*/
			case 1:setfillcolor(BLUE); break;
			case 2:setfillcolor(GREEN); break;
			case 3:setfillcolor(RED); break;
			case 4:setfillcolor(BROWN); break;
			case 5:setfillcolor(YELLOW); break;
			case 6:setfillcolor(CYAN); break;
			case 7:setfillcolor(MAGENTA); break;
			case 8:setfillcolor(LIGHTGRAY); break;
			case 9:setfillcolor(WHITE); break;
			default:break;
			}
			while (1)
			{
				while (mousemsg()) {
					msg = getmouse();
				}
				if (msg.y >= 0 && msg.y <= 50)
				{
					break;
				}
				if (msg.is_left())
				{
					if (choice == 0)
					{
						x1 = msg.x;
						y1 = msg.y;
						choice = 1;
					}
				}
				else if (choice == 1) {
					x2 = msg.x;
					y2 = msg.y;
					fillellipse((int)x1, (int)y1, (int)z_xy, (int)z_xy);
					x1 = x2;
					y1 = y2;
				}
				if (msg.is_up()) {
					choice = 0;
				}

			}
		}
		else if (j == 6) {
			choice = 0;
			setfillcolor(BLACK);
			setcolor(BLACK);
			while (1)
			{
				while (mousemsg()) {
					msg = getmouse();
				}
				if (msg.y >= 0 && msg.y <= 50)
				{
					break;
				}
				if (msg.is_left())
				{
					if (choice == 0)
					{
						x1 = msg.x;
						y1 = msg.y;
						choice = 1;
					}
				}
				else if (choice == 1) {
					x2 = msg.x;
					y2 = msg.y;
					fillellipse((int)x1, (int)y1, (int)z_xy, (int)z_xy);
					x1 = x2;
					y1 = y2;
				}
				if (msg.is_up()) {
					choice = 0;
				}

			}

		}
		else if (j == 7) {
			choice = 0;
			char points[100];
			int coord[100];
			inputbox_getline("多边形顶点坐标输入框", "请输入颜色、坐标，并以逗号进行分割", points, 100);
			char* tokenPtr = strtok(points, ",");
			char* color = tokenPtr;
			if (checkUppercase(color) == 0);
			xyprintf(1200, 700, "format error");
			tokenPtr = strtok('\0', ",");
			int i = 0;
			while (tokenPtr != '\0') {
				coord[i++] = atoi(tokenPtr);
				tokenPtr = strtok('\0', ",");
			}
			fillpoly((i + 1) / 2, coord);
		}
	}
}
