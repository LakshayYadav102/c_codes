#include<stdio.h>
#include<math.h>
//using ternary statement

int main() {
    int marks;
    printf("ENTER MARKS:");
    scanf("%d",&marks);
    
    marks>=30? printf("STUDENT IS PASS") : printf("STUDENT IS FAIL");
}