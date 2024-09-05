// Tori Casto
// UCFID: 3978588
// September 5th, 2024
// Assignment 1- Fracturing
// Professor Parra

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// a helper function that will be used for user input in other functions
double distancestatement()
{
    double x1,x2,y1,y2,totalDistance; // variables that will be used for points on a circle

    // Ask the user for the 'x' values of each point

    printf("Enter two numbers for the 'x' values (x1,x2)\n");
    scanf("%lf%lf", &x1, &x2);

    // Ask the user for the 'y' values of each point

    printf("Enter two numbers for the 'y' values (y1,y2)\n");
    scanf("%lf%lf", &y1, &y2);

    // Outputs both 'x' and 'y' values entered by the user

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf \n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf \n", x2, y2);

    totalDistance= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)); // will calculate the distance between the given points
    return totalDistance;
}

double calculateDistance()
{    
    double distance=0; // variable used to capture distance

    distance=distancestatement(); // calls the helper function to gather the 'x' and 'y' points being used

    // outputs the distance between the two points given from the helper function using the equation totalDistance in distancestatement

    printf("The distance between the two points is %.3lf \n", distance);
    return distance;
}

double calculatePerimeter()
{
    double totalPerimeter=0; // used to capture the perimeter
    double radius=0; // used to capture the radius

    radius=distancestatement()/2; // calculating the radius using the helper function distancestatement

    totalPerimeter=2*PI*radius; // calculating the perimeter of a circle 

    // will output the perimeter 
    
    printf("The perimeter of the city encompassed by your request is %.3lf \n", totalPerimeter);

    double difficultyLevel=3.5; // the difficulty level at which I found creating this function to be
    return difficultyLevel;
}

double calculateArea(){
    
    double totalArea=0; // used to capture the area of the circle
    double radius=0; // used to capture the radius

    radius=distancestatement()/2; // calculating the radius using the helper function distancestatement

    totalArea=PI*radius*radius;  // calculating the area of a circle 

    // will output the area
    
    printf("The area of the city encompassed by your request is %.3lf \n", totalArea);

    double difficultyLevel=2.0;  // the difficulty level at which I found creating this function to be
    return difficultyLevel;
}

double calculateWidth(){

    double width=0; // used to capture the width of the circle

    width=distancestatement(); // calculating the width using the helper function distancestatement

    // will output the width

    printf("The width of the city encompassed by your request is %.3lf \n",width);

    double difficultyLevel=1.5; // the difficulty level at which I found creating this function to be
    return difficultyLevel;
}

double calculateHeight(){

    double height=0; // used to capture the height of the circle

    height=distancestatement(); // calculating the height using the helper function distancestatement

    // will output the width

    printf("The height of the city encompassed by your request is %.3lf \n",height);

    double difficultyLevel=1.0;  // the difficulty level at which I found creating this function to be
    return difficultyLevel;
}

int main(int argc, char**argv){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}