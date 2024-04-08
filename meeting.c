#include<stdio.h>
#include<string.h>
int main()
{
    int choise;
    char come[20];
    printf("when can you meet\npress 1 for monday\npress 2 for friday\npress 3 for saturday\npress 4 for sunday\n");
    scanf("%d",&choise);
    switch(choise){
        case 1:
        printf("sure we can meet monday");
        break;
        case 2:
        printf("sure we can meet friday");
        break;
        case 3:
        printf("sure we can meet saturday");
        break;
        case 4:
        printf("sure we can meet sunday");
        break;
        default:
        printf("invalid");
        
    }
    return 0;
    }
