#include <stdio.h>
int main()
{
    float amp, freq;
    printf("Enter the vibration in mm:\n");
    scanf("%f", &amp);
    printf("Enter the frequency in Hz:\n");
    scanf("%f", &freq);
    if((amp>0.5) && (freq>=20) && (freq<=50))
    {
       printf("High Risk\n");
    }
    else if (amp>0.5 || freq>60)
    {
       printf("Medium risk\n");
    }
    else
    {
       printf("Low Risk.\n");
    }
    return 0;
}
