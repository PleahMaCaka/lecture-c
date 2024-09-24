#include <stdio.h>

int main() {
    int start, end;
    
    while (1) {
        printf("시작 단과 끝 단을 입력하세요 (2~9): ");
        scanf("%d %d", &start, &end);
        
        if (start < 2 || start > 9 || end < 2 || end > 9) {
            printf("프로그램을 종료합니다.\n");
            break;
        }
        
        if (start <= end) {
            for (int i = start; i <= end; i++) {
                printf("\n%d단:\n", i);
                for (int j = 1; j <= 9; j++) {
                    printf("%d x %d = %d\n", i, j, i*j);
                }
            }
        } else {
            for (int i = start; i >= end; i--) {
                printf("\n%d단:\n", i);
                for (int j = 1; j <= 9; j++) {
                    printf("%d x %d = %d\n", i, j, i*j);
                }
            }
        }
    }
    
    return 0;
}
