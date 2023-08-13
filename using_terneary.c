#include<stdio.h>
#include<math.h>


int main() {
    int marks;
    printf("ENTER MARKS:");
    scanf("%d",&marks);
    
    marks>=30? printf("STUDENT IS PASS") : printf("STUDENT IS FAIL");
}
