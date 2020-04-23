#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int ans = 1;
    for(int i=n; i>=1; i--){
        ans = ans * i;
    }
    printf("%d", ans);
}