#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/**
 * In cold weather, meterologists report an index called wind chill factor, which takes
 * into account the wind speed and the temperature. The index provides a measure of the
 * chilling effect of the wind at a given air temperature.
 *
 * Write a function that returns the wind chill index. Your code should ensure that the
 * restriction on the temperature is not violated. Loop up some weather reports in the
 * back issues of a newspaper or from a weather website and compare the wind chill index
 * you calculate with the result reported or website.
 *
 * By: Wali
 */

/**
 * Calculates the wind chill factor.
 * @param velocity : wind speed in m/sec
 * @param temperature : temp in degrees celcius
 * @return double, or 0 if temperature is greater than 10 degrees celcius
 */
double calculateWindChillFactor(double velocity, double temperature) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    if ( temperature <= 10 ) {
        return (33 - ((10 * sqrt(velocity) - velocity + 10.5) * (33 - temperature) / 23.1));
    }
    return 0;
}

int main() {

    double windChillFactor = 0;
    double velocity = 0;
    double temperature = 0;

    cout << "Enter wind speed measured in m/sec: ";
    cin >> velocity;

    cout << "Enter temperature in degrees Celcius: ";
    cin >> temperature;

    windChillFactor = calculateWindChillFactor(velocity, temperature);

    if (windChillFactor == 0) {
        cout << "Temperature of less than 10 degrees Celcius. "
             << "Cannot calculate wind chill factor." << endl;
    } else {
        cout << "Wind Chill Factor: " << windChillFactor << endl;
    }
}