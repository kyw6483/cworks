#include <stdio.h>

int main() {
	//�ݺ��� - for��
	int n;
	int total = 0; //�հ�
	for (n = 1; n <= 10; n++) { //�ʱⰪ; ���ǰ�; ������;
		total += n;
		//printf("%3d", n); //d�տ� ���ڸ� ������ ���� ����
	}
	printf("�հ� : %d\n", total);
	return 0;
}
