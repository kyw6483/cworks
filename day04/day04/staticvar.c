#include <stdio.h>

void count() {
	static int x = 0;   //지역변수
	int y = 0;        //정적(고정) 변수(static 키워드 사용)
	x += 1;
	y += 1;
	printf("x = %d, y = %d\n", x, y);
}

int main() {


	count();  //x, y변수 계산후 수명(해제)
	count();
	count();

	return 0;
}