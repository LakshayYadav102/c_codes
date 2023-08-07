#include<stdio.h>
#include<math.h>
// DO WHILE LOOP

int main() {
    int n;
    printf("ENTER NUMBER:");
    scanf("%d", &n);

    int i=0;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=5);
    return 0;
}