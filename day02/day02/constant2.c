#include <stdio.h>
#define PI 3.1415  //��ũ�� ���(��ó��)
#define MIN_NUM 1
#define MAX_NUM 2

int main() {
	int r = 5;
	float area;

	area = PI * r * r;

	printf("���� ���� : %.2f\n", area); //78.54

	//MIN_NUM = 10;

	printf("�ִ밪 : %d\n", MIN_NUM); //1
	printf("�ּҰ� : %d\n", MAX_NUM); //2


	return 0;
}