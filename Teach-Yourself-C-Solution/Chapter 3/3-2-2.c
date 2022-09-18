#include<stdio.h>
int main()
{
    int optionAnswer;
    printf("What do you want? \n1.Circle\n2.Rectangle\n3.Triangle\n:");
    scanf("%d",&optionAnswer);
    if(optionAnswer==1){
        float radiusOfCircle;
        float areaOfCircle;
        printf("Enter the radius of circle:");
        scanf("%f",&radiusOfCircle);
        areaOfCircle=3.14*radiusOfCircle;
        printf("The area of circle is %f",areaOfCircle);
    }else if(optionAnswer==2){
        float widthOfRectangle;
        float heightOfRectangle;
        float areaOfRectangle;
        printf("Enter the width of rectangle:");
        scanf("%f",&widthOfRectangle);
        printf("Enter the height of rectangle:");
        scanf("%f",&heightOfRectangle);
        areaOfRectangle=widthOfRectangle*heightOfRectangle;
        printf("The area of Rectangle if %f",areaOfRectangle);
    }else if(optionAnswer==3){
        float baseOfTriangle;
        float heightOfTriangle;
        float areaOfTriangle;
        printf("Enter the base of triangle:");
        scanf("%f",&baseOfTriangle);
        printf("Enter the height of triangle:");
        scanf("%f",&heightOfTriangle);
        areaOfTriangle=0.5*baseOfTriangle*heightOfTriangle;
        printf("The area of triangle is %f",areaOfTriangle);
    }else{
        printf("Enter the number of given options");
    }
    return 0;
}