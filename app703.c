#include <stdio.h>
void main(){
    int choice;
    float radius,circum,area;
    printf("\n1.Circumference of the circle\n\n");
    printf("2.Area of the circle\n");
    printf("\nEnter your choice 1 or 2 : ");
    scanf("%d", &choice);
    printf("Enter radius of the circle : ");
    scanf("%f", &radius);
    if(choice == 1){
        circum = 2 * 3.14 * radius; //2*pi*r
        printf("\nCircumference of the circle = %.2f\n ", circum);

    }
    else{
        area = 3.14*radius*radius; //pi*r^2
        printf("\nArea of the circle = %.2f\n", area);
    }
}