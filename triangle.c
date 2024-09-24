#include <stdio.h>

int main() {
    int n;
    
    printf("정수를 하나 입력하세요: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("1 이상의 정수를 입력하세요.\n");
        return 0;
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
