#include <stdio.h>

int main()
{
    int x,y;
    for(int i=1; i<=81;i++){
        x = (i-1)/9 + 1;
        y = (i-1)%9 + 1;
        printf("%d*%d=%2d\t", x, y, x*y);
        if(y==9){
            printf("\n");
        }
    }
    return 0;
}