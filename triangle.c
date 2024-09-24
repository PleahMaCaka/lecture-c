#include <stdio.h>

int main() {
    int n;
    
    printf("정수를 입력하세요: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("프로그램을 종료합니다.\n");
        return 0;
    }
    
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // star
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
