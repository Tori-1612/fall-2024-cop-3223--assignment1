// Tori Casto
// UCFID: 3978588

#include <stdio.h>
#include <math.h>
#define PI 3.14159

double distancestatement(){

    double x1,x2,y1,y2,totalDistance;

    printf("Enter two numbers for the 'x' values (x1,x2)\n");
    scanf("%lf%lf", &x1, &x2);

    printf("Enter two numbers for the 'y' values (y1,y2)\n");
    scanf("%lf%lf", &y1, &y2);

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf \n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf \n", x2, y2);

    totalDistance= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    return totalDistance;
}

double calculateDistance(){
    
    double distance=0;

    distance=distancestatement();

    printf("The distance between the two points is %.3lf \n", distance);

    return distance;
}

double calculatePerimeter(){

    double totalPerimeter=0;

    double radius=0;

    radius=distancestatement() / 2;

    totalPerimeter=2*PI*radius;
    
    printf("The perimeter of the city encompassed by your request is %.3lf \n", totalPerimeter);

    double difficultyLevel=3.5;

    return difficultyLevel;
}

double calculateArea(){
    
    double totalArea=0;

    double radius=0;

    radius=distancestatement() / 2;

    totalArea=PI*radius*radius;
    
    printf("The area of the city encompassed by your request is %.3lf \n", totalArea);

    double difficultyLevel=2.0;
    
    return difficultyLevel;
}

double calculateWidth(){

    double width=0;

    width=distancestatement();

    printf("The width of the city encompassed by your request is %.3lf \n",width);

    double difficultyLevel=1.5; 

    return difficultyLevel;
}

double calculateHeight(){

    double height=0;

    height=distancestatement();

    printf("The height of the city encompassed by your request is %.3lf \n",height);

    double difficultyLevel=1.0;

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