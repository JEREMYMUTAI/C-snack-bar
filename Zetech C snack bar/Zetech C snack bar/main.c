
/*
zetech c snack bar
created by dit-01-8722/2021
C89 compiler
MIT license
*/

#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int item;
    printf("\today's menu\n");
    printf("1. smokie -ksh 40\n");
    printf("2. milkshake -ksh 150\n");
    printf("3. hamburger - ksh 300\n");
    printf("4. samosa -ksh-50\n");
    printf("5. african tea - ksh 60\n");
    printf("Enter item No:");
    scanf("%d",&item);
    if(item> 0 && item<=3){
    printf("item added to cart\n");
    }
    else{
        printf("invalid item\n");
        menu();

    }

    return item;
}
