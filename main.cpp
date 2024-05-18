#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int main()
{
    // Prompt user for radius
    double radius, circumference, area, volume;
    cout << "Enter the radius: " << endl;
    cin >> radius;

    // Calculate circumference
    circumference = 2 * M_PI * radius;
    printf("The circumference of a circle with a radius of %.3f is %.5f\n", radius, circumference);
    // Calculate area
    area = M_PI * pow(radius,2);
    printf("The area of a circle with a radius of %.3f is %.5f\n", radius, area);
    // Calculate volume
    volume = 4/3 * M_PI * pow(radius,3);
    printf("The volume of a sphere with a radius of %.3f is %.5f\n",radius, volume);
    return 0;
}