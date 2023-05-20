#include<stdio.h>           //header file
#include<conio.h>

void main() {
    //initialize the local variables
    int l = 5, b = 10, ar, pr;
    printf("Length and Breadth of the rectangle is: %d and %d",l,b);
    ar = l *  b   ;          //calculate the area of rectangle
    pr = 2 * (l+b) ;        //calculate perimeter of rectangle    

    printf("\nThe Area of Rectangle is %d", ar);
    printf("\nThe Perimeter of Rectangle is %d", pr);
}