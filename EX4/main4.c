#include <stdio.h>

int main()
{
    int num = 12345;
    int a[5] = {}, n=10000;
    for(int i=0; i<5; i++){
        a[i] = num/n;
        num = num-a[i]*n;
        n = n/10;
    }
    printf("%d%d%d%d%d", a[0],a[4],a[2],a[3],a[1]);
    return 0;
}