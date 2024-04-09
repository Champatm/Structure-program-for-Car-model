// function.c
#include <stdio.h>
#include <string.h>
#include "CAR_MODEL.h"

void populateCarModels(struct CarModel models[]) {
    strcpy(models[0].brand, "Toyota");
    strcpy(models[0].model, "Camry");
    models[0].year = 2020;

    strcpy(models[1].brand, "Honda");
    strcpy(models[1].model, "Accord");
    models[1].year = 2022;

    
    strcpy(models[2].brand, "Ford");
    strcpy(models[2].model, "Mustang");
    models[2].year = 2021;

    strcpy(models[3].brand, "Tesla");
    strcpy(models[3].model, "Model S");
    models[3].year = 2023;
}

void printCarModels(const struct CarModel models[]) {
    for (int i = 0; i < 10; i++) {
        printf("Car %d:\n", i + 1);
        printf("Brand: %s\n", models[i].brand);
        printf("Model: %s\n", models[i].model);
        printf("Year: %d\n", models[i].year);
        printf("\n");
    }
}