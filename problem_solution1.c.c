#include <stdio.h>
#include <math.h>

int main() {
    int m;
    double theta, d, wavelength;

    printf("Enter the diffraction order (m): ");
    scanf("%d", &m);

    printf("Enter the angle theta (in degrees): ");
    scanf("%lf", &theta);

    printf("Enter the slit separation (d) in micrometers): ");
    scanf("%lf", &d);

    theta = theta * 3.1416 / 180.0;
    d = d * 1e-6;

    wavelength = (d * sin(theta)) / m;
    wavelength = wavelength * 1e9;

    printf("Wavelength: %.2f nm\n", wavelength);

    if (wavelength >= 380 && wavelength < 450)
        printf("Color: Violet\n");
    else if (wavelength >= 450 && wavelength < 495)
        printf("Color: Blue\n");
    else if (wavelength >= 495 && wavelength < 570)
        printf("Color: Green\n");
    else if (wavelength >= 570 && wavelength < 590)
        printf("Color: Yellow\n");
    else if (wavelength >= 590 && wavelength < 620)
        printf("Color: Orange\n");
    else if (wavelength >= 620 && wavelength <= 750)
        printf("Color: Red\n");
    else
        printf("Color: Not in visible range\n");

    return 0;
}
