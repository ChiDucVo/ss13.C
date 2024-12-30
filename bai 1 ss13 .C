#include <stdio.h>

// Ham nhap ma tran 2 chieu
void nhapMaTran(int maTran[][100], int soHang, int soCot) {
    printf("Nhap gia tri cho ma tran (%d x %d):\n", soHang, soCot);
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("Nhap gia tri tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }
}

// Ham in ma tran ra man hinh
void inMaTran(int maTran[][100], int soHang, int soCot) {
    printf("\nMa tran (%d x %d) la:\n", soHang, soCot);
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int maTran[100][100];
    int soHang, soCot;

    // Nhap so hang va so cot
    printf("Nhap so hang: ");
    scanf("%d", &soHang);
    printf("Nhap so cot: ");
    scanf("%d", &soCot);

    // Nhap va in ma tran
    nhapMaTran(maTran, soHang, soCot);
    inMaTran(maTran, soHang, soCot);

    return 0;
}
