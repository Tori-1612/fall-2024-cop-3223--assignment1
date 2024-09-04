// Tori Casto
// UCFID: 3978588

#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calculateDistance(){
    double x1,x2,y1,y2,totalDistance;

    printf("Enter two numbers for point 1 (x1,y1)\n");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter two numbers for point 2 (x2,y2)\n");
    scanf("%lf %lf", &x2, &y2);


    totalDistance= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("The distance between the two points is %.3lf \n", totalDistance);

    return totalDistance;

}
double calculatePerimeter(){

    double totalPerimeter=0;

    totalPerimeter=2*PI*calculateDistance();
    
    printf("The perimeter of the city encompassed by your request is %.3lf \n", totalPerimeter);

    return totalPerimeter;
}




int main(int argc, char**argv){
    calculateDistance();
    calculatePerimeter();


}