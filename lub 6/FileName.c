#include <stdio.h>
#include <locale.h>
main() {
	task();
}
task() {
	int x, y;
	float y1, y2;
	setlocale(LC_ALL, "RUS");
	printf("������� x \n");
	scanf("%i",&x);
	printf("������� y \n");
	scanf("%i", &y);
	y1 = (((-4) * x) / 3) + (23 / 3);
	y2 = ((5 * x) / 3) + (-23 / 3);
	if (((x >= 2) && (x <= 5)) && ((y <= y1) && (y >= y2))) printf("����� ����������� ����������� ������� \n");
	else printf("����� �� ����������� ����������� ������� \n");
}
