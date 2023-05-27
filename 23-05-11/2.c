#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
    float input = 0;
    int menu = 0;
 
    while (1) {
        printf(" ----------- 단위변환 프로그램 ---------------------\n");
        printf("[길이]\n");
        printf("   11. inch -> cm           12. cm -> inch\n");
        printf("   13. yard -> cm           14. cm -> yard\n");
        printf("   15. mile -> cm           16. cm -> mile\n");
        printf("----------------------------------------------------\n");
        printf("[프로그램] 00. 종료\n");  //00 : 프로그램 종료
 
        printf("변환할 번호를 선택하세요: ");
        scanf("%d", &menu);
        if (menu != 0)
        {
            printf("변환할 값을 입력하세요: ");
            scanf("%f", &input);
        }
 
        printf("\n");
        printf(">> 결과 : ");
        switch (menu)
        {
            case 00:
                exit(0);
            case 11: 
                printf("%.2f inch = %.2f cm\n", input, input * 2.54);
                break;
            case 12:
                printf("%.2f cm = %.2f inch\n", input, input / 2.54);
                break;
            case 13: 
                printf("%.4f yard = %.4f cm\n", input, input * 91.44);
                break;
            case 14:
                printf("%.4f cm = %.4f yard\n", input, input / 91.44);
                break;
            case 15: 
                printf("%.5f mile = %.5f cm\n", input, input * 160934.4);
                break;
            case 16:
                printf("%.5f cm = %.5f mile\n", input, input / 160934.4);
                break;
            default:
                break;
    
    return 0;
        }
    }
}
