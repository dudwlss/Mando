#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand() {
    return rand() % 2;  
}

int main() {
    int user_choice;
    int computer_result;
    
    srand(time(NULL));  
    
    printf("동전 던지기 게임: 0(뒷면) 또는 1(앞면) 선택\n");
    printf("선택하세요 (0 또는 1): ");
    scanf("%d", &user_choice);
    
    computer_result = b_rand();
    
    printf("사용자 선택: %d\n", user_choice);
    printf("컴퓨터 결과: %d\n", computer_result);
    
    if (user_choice == computer_result) {
        printf("축하합니다! 사용자가 이겼습니다.\n");
    } else {
        printf("아쉽습니다. 사용자가 졌습니다.\n");
    }
    
    return 0;
}
