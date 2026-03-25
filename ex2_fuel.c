// Name: CHELANGAT ROBIN
//Student Number:25/U/05290/PE

#include <stdio.h>

int main(void)
{

    float distance, fuel, efficiency;

    printf("Enter distance travelled (km): ");
    scanf("%f", &distance);

    printf("Enter fuel used (litres): ");
    scanf("%f", &fuel);

    efficiency = distance / fuel;

    printf("\nFuel efficiency: %.2f km/l\n", efficiency);

   return 0;
}
