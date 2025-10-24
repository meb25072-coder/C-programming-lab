#include <stdio.h>
int main()
{
    float mass,velo,KE;
    printf("Enter the mass of the object in(Kg):");
    scanf("%f",&mass);
    printf("Enter the velocity of the object in(m/s):");
    scanf("%f", &velo);
    //logic to find the kinetic energy of the object
    KE=0.5*mass*velo*velo;
    
    printf("The Kinetic Energy of the object is:%f Joules",KE);
    return 0;
}
