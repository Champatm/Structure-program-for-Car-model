
#ifndef CAR_MODEL_H
#define CAR_MODEL_H

struct CarModel {
    char brand[10];
    char model[10];
    int year;
};

void populateCarModels(struct CarModel models[]);
void printCarModels(const struct CarModel models[]);

#endif /* CAR_MODEL_H */