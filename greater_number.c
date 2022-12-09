#include <stdio.h>

int main() {
    int a,b;
    
    printf("enter two no. a and b:\n\n");
    
    scanf("%d %d",&a, &b);
    
    (a>b)?printf("greater is: %d",a):printf("greater is:%d",b);
    
    return 0;
}
