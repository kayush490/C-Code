#include <stdio.h>
int main(){
    int n ; long new_sum ;
    new_sum == 0;
    puts("Enter the number you want to calculate the series :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int sum = (i*i);
        new_sum = new_sum + sum;
    }
    printf("The total sum of series is : %ld",new_sum);
    return 0;
}
