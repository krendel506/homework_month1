#include <stdio.h>

int main() {
    int N = 0;
    int number;
    int odd = 0;
    int even = 0;


    do{
        printf("How many numbers do you want to enter: ");
        scanf("%d", &N);
    }while(N < 3 || N > 15);
    
    
    for(int i = 0; i<N; i++){
        printf("Input %d number: ", i + 1);
        scanf("%d",&number);
        if(number & 1){
            odd = odd + 1;
        }
        else{
            even = even + 1;
        }
    }

    printf("Out of %d numbers: \n", N);
    printf("%d were even\n", even);
    printf("%d were odd\n", odd);
    return 0;
}