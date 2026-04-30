#include<stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int opinions[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &opinions[i]);
    }
    
    int flag = 0;
    
    for (int i=0; i<n; i++){
        if (opinions[i] == 1) {
            flag = 1;
            break;
        }
    }

    if (flag==0)
        printf("Easy");
    else 
        printf("Hard");

    return 0;
}