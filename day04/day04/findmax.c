#include <stdio.h>


int findMax(int[], int);
int findMaxIdx(int[], int);
int main() {
	//최대값 찾기
	int num[] = { 21, 35, 71, 100, 2, 66, 97 };

	int maxval = findMax(num, 7);
	int maxIdx = findMaxIdx(num, 7);

	printf("최대값 : %d\n", maxval); //100
	printf("최대값의 위치 : %d\n", maxIdx); //3

	return 0;
}
	

int findMax(int num[], int len) {//배열을 매개변수로 전달
	//최대값 설정(배열의 첫번째값)
	int max = num[0];
	int i;

	//반복하면서 비교
	for (i = 0; i < len; i++) {
		if (max < num[i]) {
			max = num[i];
		}
	}
	//i = 1, 21 < 35, max = 35
	//i = 2, 35 < 71, max = 35
	//i = 3, 71 < 2, max = 35
	//i = 4, 71 < 66, max = 35
	//i = 5, 71 < 35, max = 35

	return max;
}

int findMaxIdx(int num[], int len) { //최대값의 위치
	int maxIdx = 0;
	int i;

	for (i = 0; i < len; i++) {
		if (num[maxIdx] < num[i])
		maxIdx = i;
	}

	return maxIdx;
}
