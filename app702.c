#include <stdio.h>
void main(){
    int score;
    printf("Please Enter Number : ");
    scanf("%d", &score);
    if (score >= 80 && score<=100)
        printf("Grade A : %d\n", score);
    else if (score >= 75 && score <= 79)
        printf("Grade B+ : %d\n", score);
    else if (score >= 70 && score <= 74)
        printf("Grade B : %d\n", score);
    else if (score >= 65 && score <= 69)
        printf("Grade C+ : %d\n", score);
    else if (score >= 60 && score <= 64)
        printf("Grade C : %d\n", score);
    else if (score >= 55 && score <= 59)
        printf("Grade D+ : %d\n", score);
    else if (score >= 50 && score <= 54)
        printf("Grade D : %d\n", score);
    else if(score >= 0 && score <= 49)
        printf("Grade F : %d\n", score);
}