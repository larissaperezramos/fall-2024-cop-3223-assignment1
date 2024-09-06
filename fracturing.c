//********************************************************
// fracturing.c
// Author: Larissa Perez
// Date: 09/05/24
// Class: COP 3223, Professor Parra
// Purpose: This program prints calculations using
// user input. The main purpose of this assignment is to
// calculate the measurements of a circle using user input.
// Input: Coordinate points.
// Output: A circle's measurements.
// //********************************************************
#include <math.h>
#include <stdio.h>

#define PI 3.14159 // Defining the value for Pi

//********************************************************
// double calculateDistance ()
//
// Purpose:         Calculate the distance between two points.
// Input:           Two coordinate point values.
// Output:          Prints the calculated distance value.
// Precondition:    None.
// Postcondition:   None.
//********************************************************

double calculateDistance(){
    // Point #1 Input
    int x1=0;
    int y1=0; 
    scanf("%d%d", &x1, &y1);

    // Print statement for Point #1
    printf("Point #1 entered: x1 = %d y1 = %d\n", x1, y1);

    // Point #2 Input
    int x2=0;
    int y2=0; 
    scanf("%d%d", &x2, &y2);

    // Print statement for Point #2
    printf("Point #2 entered: x2 = %d y2 = %d\n", x2, y2);

    // Defining distance with all information input
    double distance= sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    printf("The distance between the two points is %f\n", distance);

    return distance;

}

//********************************************************
// double calculatePerimeter ()
//
// Purpose:         Calculate the perimeter of a circle.
// Input:           Two coordinate point values.
// Output:          Prints the calculated perimeter value.
// Precondition:    None.
// Postcondition:   None.
//********************************************************

double calculatePerimeter(){
    // Point #1 Input
    int x1=0;
    int y1=0; 
    scanf("%d%d", &x1, &y1);

    // Print statement for Point #1
    printf("Point #1 entered: x1 = %d y1 = %d\n", x1, y1);

    // Point #2 Input
    int x2=0;
    int y2=0; 
    scanf("%d%d", &x2, &y2);

    // Print statement for Point #2
    printf("Point #2 entered: x2 = %d y2 = %d\n", x2, y2);

    double perimeter=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2)) * PI;
    printf("The perimeter of the city encompassed by your request is %f\n", perimeter);

    return 1;

}

//********************************************************
// double calculateArea ()
//
// Purpose:         Calculate the area of a circle.
// Input:           Two coordinate point values.
// Output:          Prints the calculated area value.
// Precondition:    None.
// Postcondition:   None.
//********************************************************

double calculateArea(){
// Point #1 Input
    int x1=0;
    int y1=0; 
    scanf("%d%d", &x1, &y1);

    // Print statement for Point #1
    printf("Point #1 entered: x1 = %d y1 = %d\n", x1, y1);

    // Point #2 Input
    int x2=0;
    int y2=0; 
    scanf("%d%d", &x2, &y2);

    // Print statement for Point #2
    printf("Point #2 entered: x2 = %d y2 = %d\n", x2, y2);

    double radius=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2)) / 2;
    double area= PI * pow(radius,2);

    printf("The area of the city encompassed by your request is %f\n", area);

    return 1;

}

//********************************************************
// double calculateWidth ()
//
// Purpose:         Calculate the width of a circle.
// Input:           Two coordinate point values.
// Output:          Prints the calculated width value.
// Precondition:    None.
// Postcondition:   None.
//********************************************************

double calculateWidth(){
    // Point #1 Input
    int x1=0;
    int y1=0; 
    scanf("%d%d", &x1, &y1);

    // Print statement for Point #1
    printf("Point #1 entered: x1 = %d y1 = %d\n", x1, y1);

    // Point #2 Input
    int x2=0;
    int y2=0; 
    scanf("%d%d", &x2, &y2);

    // Print statement for Point #2
    printf("Point #2 entered: x2 = %d y2 = %d\n", x2, y2);

    // Defining width with all information input
    double width= sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    printf("The width of the city encompassed by your request is %f\n", width);

    return 1;

}

//********************************************************
// double calculateHeight ()
//
// Purpose:         Calculate the height of a circle.
// Input:           Two coordinate point values.
// Output:          Prints the calculated height value.
// Precondition:    None.
// Postcondition:   None.
//********************************************************

double calculateHeight(){
    // Point #1 Input
    int x1=0;
    int y1=0; 
    scanf("%d%d", &x1, &y1);

    // Print statement for Point #1
    printf("Point #1 entered: x1 = %d y1 = %d\n", x1, y1);

    // Point #2 Input
    int x2=0;
    int y2=0; 
    scanf("%d%d", &x2, &y2);

    // Print statement for Point #2
    printf("Point #2 entered: x2 = %d y2 = %d\n", x2, y2);

    // Defining height with all information input
    double height= sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    printf("The height of the city encompassed by your request is %f\n", height);

    return 1;
}

//********************************************************
// int main(int argc, char **argv)
//
// Purpose:         Call and execute all necessary functions.
// Output:          Prints all the requests for input and calculation outputs.
// Precondition:    None.
// Postcondition:   None.
//********************************************************

int main(int argc, char **argv){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}