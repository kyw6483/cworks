#include <stdio.h>

int main() {
	//구구단 한단만 출력하기 - 단을 입력받기
	int dan = 4;
	int i, j;
	/*printf("단을 입력하세요 : ");
	scanf_s("%d", &dan);

	for (i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, (dan * i));
	}*/

	//전체 구구단 출력하기
	for (i = 2; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}


	return 0;
}