#include <stdio.h>

int main() {
	//학점을 판정하는 프로그램
	//90점 이상 A, 80점 이상 B, 70점 이상 C, 60점 이상 D, 60점 미만 F
	int score = 77;
	char ch = 'A';

	//조건 처리
	if(score >= 90) {
		ch = 'A';
	}
	else if (score >= 80) {
		ch = 'B';
	}
	else if (score >= 70) {
		ch = 'C';
	}
	else if (score >= 60) {
		ch = 'D';
	}
	else {
		ch = 'F';
	}
	print("%d학점입니다.");



	return 0;
}