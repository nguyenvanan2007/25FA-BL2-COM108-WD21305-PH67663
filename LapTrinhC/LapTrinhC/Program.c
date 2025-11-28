#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void kiemTraSoNguyen()
{
	int n;

	printf("Nhap 1 so nguyen: ");
	scanf("%d", &n);

	if (n > 0) {
		printf("Day la so nguyen duong\n");
	}
	else if (n < 0) {
		printf("Day la so nguyen am\n");
	}
	else {
		printf("Day la so 0\n");
	}

	if (n % 2 == 0) {
		printf("Day la so chan\n");
	}
	else {
		printf("Day la so le\n");

	}
}
void BaiMot()
{
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);

	int mang[1000];
	int i;
	for (i = 0; i < n; i++) {
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf("%d", &mang[i]);
	}

	float tong = 0;
	int count = 0;

	for (i = 0; i < n; i++) {
		if (mang[i] % 3 == 0) {
			tong += mang[i];
			count++;
		}
	}

	if (count == 0)
		printf("Khong co so nao chia het cho 3\n");
	else
		printf("Trung binh la %.2f\n", tong / count);

	return 0;
}

void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			// ham goi chuc nang 2
			BaiMot();
			break;
		case 3:
			// ham goi chuc nang 3
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3]");
			break;
		}

		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}

}

int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. Tinh TBC Cac So Chia Het Cho 3 Trong Mang");
		printf("\n");
		printf("3. TEN chuc nang 3");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}


// GV: AnhTT184