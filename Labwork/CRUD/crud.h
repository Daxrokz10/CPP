#ifndef CRUD_H
#define CRUD_H

void read(int* arr, int size);
void create(int* arr, int& size, int element);
void update(int* arr, int size, int index, int element);
void deleteElement(int* arr, int& size, int index);

#endif // CRUD_H
