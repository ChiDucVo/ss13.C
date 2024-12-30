#include <stdio.h>

// Ham tinh uoc chung lon nhat (UCLN)
int ucln(int a, int b) {
    if (a == 0 || b == 0) {
        return a + b;
    }
    while (a != b) {
        if (a > b) {
            a= a - b;   //Thay the so lon hon bang hieu cua hai so
        } else {
            b= b - a;
        }
    }
    return a; //b
}

int main() {
    int a, b;

    // Nhap gia tri cho a va b
    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

    // Kiem tra tinh hop le
    if (a <= 0 || b <= 0) {
        printf("Khong hop le! a va b phai la so nguyen duong.\n");
    } else {
        // Tim UCLN neu hop le
        int result = ucln(a, b);
        printf("UCLN cua %d va %d la: %d\n", a, b, result);
    }

    return 0;
}

