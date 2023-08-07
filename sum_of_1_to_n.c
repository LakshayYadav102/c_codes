#include<stdio.h>
#include<math.h>
//sum of natural number

int main() {
    int n;
    printf("ENTER NO : ");
    scanf("%d", &n);

    int sum=0;
    for(int i=1; i<=n; i++) {
        sum=sum+i;
    }

    printf("sum is %d",sum);

    

    return 0;
}