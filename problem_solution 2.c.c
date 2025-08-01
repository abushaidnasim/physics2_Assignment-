#include <stdio.h>
#include <math.h>

int main() {
    int m1 = 3;
    int m2 = 2;

    double lambda1 = 530e-9;
    double lambda2 = 700e-9;

    double theta1_deg = 65.0;
    double theta1_rad, d, theta2_rad, theta2_deg;

   theta1_rad = theta1_deg * 3.1416 / 180.0;
   d = (m1 * lambda1) / sin(theta1_rad);
   theta2_rad = asin((m2 * lambda2) / d);
   theta2_deg = theta2_rad * 180.0 / 3.1416;

   printf("Second-order red light angle: %.2f degrees\n", theta2_deg);




    return 0;
}
