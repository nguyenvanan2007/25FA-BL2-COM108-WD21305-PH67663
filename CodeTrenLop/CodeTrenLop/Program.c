#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void kiemTraSoNguyen()
{
	printf("Kiem Tra So Nguyen");
	printf("\n");
}

void sapXepPhanTu() 
{
	int integerArray[100];
	int tmp;
	int length;
	printf("nhap kich thuoc mang :");
	scanf("%d", &length);
	printf("nhap du lieu cho %d mang phan tu\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d] = ", i);
		scanf("%d", &integerArray[i]);
	}
	printf("sap xep tang dan du lieu mang %d phan tu\n", length);
	for (int i = 0; i < length - 1; i++)
	{
		if (integerArray[i] > integerArray[i + 1])
		{
			tmp = integerArray[i];
			integerArray[i] = integerArray[i + 1];
			integerArray[i + 1] = tmp;
			i = -1;
		}
	}
	printf("xuat du lieu mang %d phan tu\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d] = %d\n", i, integerArray[i]);
	}

}

void demoMangHaiChieu()
{
	int array[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("mang[%d][%d] = ", i, j);
			scanf("%d", &array[i][j]);
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d, ", array[i][j]);
		}
		printf("\n");
	}
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
			sapXepPhanTu();
			break;
		case 3:
			demoMangHaiChieu();
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
		printf("2. sap Xep Phan Tu");
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
