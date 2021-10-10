#include <stdio.h>
#define PI 3.1415  //매크로 상수(전처리)
#define MIN_NUM 1
#define MAX_NUM 2

int main() {
	int r = 5;
	float area;

	area = PI * r * r;

	printf("원의 넓이 : %.2f\n", area); //78.54

	//MIN_NUM = 10;

	printf("최대값 : %d\n", MIN_NUM); //1
	printf("최소값 : %d\n", MAX_NUM); //2


	return 0;
}