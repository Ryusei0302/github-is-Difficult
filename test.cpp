#include<stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4]) {

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 3; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}

}

void mat_print(const int m[4][4]){
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			printf("%d ", m[i][j]);
		putchar('\n');
	}
}

int main() {

	int m1[4][3];
	int m2[3][4];


	puts("行列1の要素を入力してください。");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("要素[%d][%d]:", i, j);
			scanf_s("%d", &m1[i][j]);
		}
	}

	puts("行列2の要素を入力してください。");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("要素[%d][%d]:", i, j);
			scanf_s("%d", &m2[i][j]);
		}
	}

	int mul[4][4] = { {0} };

	mat_mul(m1, m2, mul);

    puts("計算結果を表示します。");
	mat_print(mul);

}
