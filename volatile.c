#include <stdio.h>

volatile int sensorValue;  // Value can change unexpectedly (e.g., hardware register)

void readSensor() {
    // Simulating a sensor update
    sensorValue = 100;
}

int main() {
    printf("Reading sensor...\n");
    readSensor();
    printf("Sensor Value = %d\n", sensorValue);
    return 0;
}
