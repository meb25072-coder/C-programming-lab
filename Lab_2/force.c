#include<stdio.h>
int main()
{
    float mass,acc,force;
    printf("enter the mass of the object in (Kg):");
    scanf("%f", &mass);
    printf("enter the acceleration of the object in (m/s2):");
    scanf("%f", &acc);
    //logic to find the force of the object
    force=mass*acc;
    printf("the Force of the object is:%f Newton", force);
    return 0;
}
