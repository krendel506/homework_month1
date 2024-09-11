#include <stdio.h>
#include <math.h>

int main(){
    float scores[5];
    float avg;
    float current;
    double diff =0;
    double maxDiff = 0;
    int index =0;
  

    printf("5 tasters rate a drink from 0 to 10\n");

    for(int i =0; i<5; i++){
        printf("Enter %d taster score: ", i + 1);
        scanf("%f",&current);
        if(current >= 0 && current <= 10){
        scores[i] = current;
        avg = avg + current;
        }
        else{
            printf("Input has to be between 0 and 10\n");
            break;
        }
    }
    
    avg = avg / 5;

//find the index of score that differed the most from average
    for(int a = 0; a < 5; a++){
        
        diff = scores[a] - avg;
        double res = fabs(diff);

        if(res > maxDiff){
            
            maxDiff = diff;
            index = a + 1;
        }
    }

    printf("Average score: %.0f\n", avg);
    if(index == 0){
        printf("All tasters scored the same\n");
    }
    else{
        printf("Taster %d score differed the most from the average.\n", index);
    }
    return 0;
}