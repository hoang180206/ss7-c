#include <stdio.h>

int main() {
    int n;  

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
	printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
	return 0;
}

