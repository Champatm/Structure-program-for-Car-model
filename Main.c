
#include <stdio.h>
#include "car_model.h"

int main() {
    struct CarModel carModels[10]; // Array to hold 10 car models

    // Populate the array of car models
    populateCarModels(carModels);

    // Print the populated car models
    printCarModels(carModels);

    return 0;
}