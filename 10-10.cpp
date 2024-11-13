#include<stdio.h>

int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept) {
	if (x1 == x2)
		return -1;
	else {
		*slope = (float)(y2 - y1) / (x2 - x1);
		*yintercept = y1 - (*slope) * x1;
		return 0;
	}
}
int main(void)
{
	float m, y;
	
	if (get_line_parameter(3, 3, 6, 6, &m, &y) == -1)
		printf("error\n");
	else 
		printf("기울기: %f, y절편: %f\n", m, y);
		
	return 0;
}