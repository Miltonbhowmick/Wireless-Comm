/*Program 1: For a given carrier frequency and velocity of mobile, find the Doppler shift and received frequency when the mobile:
a) moves toward the transmitter
b) moves away from the transmitter
c) moves in a direction perpendicular to the direction of the arrival of the transmitted signal.
 */


#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
float lamda;

void calculate(float cf, float vm, int theta){
    float value = cos(theta*pi/180.0); //cos(theta in radians)
    float fd = (vm * value)/lamda;  //fd=vcosθ/λ
    printf("Doppler Shift: %f Hz\n", fd);
    fd = fd*1.0e-6;
    float rf = (cf + fd);
    printf("Carrier Frequency: %f MHz\n", rf);

}

int main(){

    float cf, vm;


    printf("Input the Carrier frequency(Mhz): ");
    scanf("%f", &cf);
    printf("Input the velocity of mobile(mph): ");
    scanf("%f", &vm);

    lamda = (3.0*1.0e8)/(cf*1.0e6);
    vm = (vm*1609.344)/3600.0;

    printf("\nCase a: when mobile moving directly toward the transmitter:\n");
    calculate(cf, vm, 0);
    printf("\nCase a: when mobile moving directly away from the transmitter:\n");
    calculate(cf, vm, 180);
    printf("\nCase C: when perpendicular to the direction of arrival of the transmitted signal: \n");
    calculate(cf, vm, 90);

    return 0;
}
