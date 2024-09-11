#include <stdio.h>

int topScores(int current, int *best, int *second_best){
    if(current > *best){
        *second_best = *best;
        *best = current;
    }
    else if(current > *second_best ){
        *second_best = current;
    }

    return 0;
}

int main(){
    int last, current, best = 0, second_best = 0;

    for(int i =0; i< 6; i++){
        printf("Enter %d result: ", i + 1);
        scanf("%d", &current);
        if(i == 0){
            best = current;
        }
        else{
            topScores(current, &best, &second_best);
            if(current > last){
                printf("This result is better than the previous one by %d meters\n", (current - last));
            }
            if(current < last){
                printf("This result is worse than the previous  one by %d meters\n", (last - current));
            }
        }
        last = current;
    }
    printf("best result: %d \nsecond best result: %d\n", best,second_best);
    return 0;
}

            
            
         
  
