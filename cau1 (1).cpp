#include <stdio.h>
void nhap(int *&a, int &n) {
    scanf("%d", &n);
    a = new int[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", (a+i));
    }
}
void xuat(int *a, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(a+i));
    }
}
int tong(int *a, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(a+i);
    }
    return sum;
}
int main() {
    int *a, n;
    nhap(a, n);
    int sum1 = tong(a, n);
    xuat(a, n);
    return 0;
}
