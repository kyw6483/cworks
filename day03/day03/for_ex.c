#include <stdio.h>

int main() {
	//반복문 - for문
	int n;
	int total = 0; //합계
	for (n = 1; n <= 10; n++) { //초기값; 조건값; 증감값;
		total += n;
		//printf("%3d", n); //d앞에 숫자를 넣으면 띄어쓰기 가능
	}
	printf("합계 : %d\n", total);
	return 0;
}
