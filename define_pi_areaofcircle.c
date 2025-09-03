#include <stdio.h>
#define pi 3.14159
int main(){
    float radius,area;
    
    printf("enter radius of circle: ");
    scanf("%f",&radius);
    
    area = pi*radius*2;
    
    printf("the area of a circle with radius %.0f is %.2f",radius ,area);
    return 0;
}
