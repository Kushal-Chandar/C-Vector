#include <c_implementations/c_vector.h>
#include <stdio.h>
#include <stdlib.h>

#define DATA double
#define SIZE sizeof(DATA)

void CreateVector_double(vector_double *vec) {
    vec->capacity = 0;
    vec->size = 0;
    vec->data = (DATA *)calloc(0, SIZE);
}

void CreateVectorSized_double(vector_double *vec, size_t size) {
    vec->capacity = size;
    vec->size = size;
    vec->data = (DATA *)calloc(size, SIZE);
}

void ReserveVectorSize_double(vector_double *vec, size_t size) {
    vec->capacity = size;
    vec->size = size;
    vec->data = (DATA *)realloc((void *)vec->data, (vec->capacity) * SIZE);
}

void DestroyVector_double(vector_double *vec) {
    vec->capacity = 0;
    vec->size = 0;
    free(vec->data);
    vec->data = NULL;
}

void PushBack_double(vector_double *vec, DATA value) {
    if (IsFull_double(vec)) {
        vec->capacity = (vec->size) * 2;
        vec->data = (DATA *)realloc((void *)vec->data, (vec->capacity) * SIZE);
    }
    (vec->size)++;
    vec->data[(vec->size) - 1] = value;
}

void Pop_double(vector_double *vec) {
    if (!IsEmpty_double(vec)) {
        vec->data[(vec->size) - 1] = 0;
        (vec->size)--;
    } else {
        fprintf(stderr, "[ERROR] : Cannot perform \"Pop\" for an empty vector_double");
        exit(EXIT_FAILURE);
    }
}

DATA Back_double(vector_double *vec) {
    if (vec->size > 0)
        return vec->data[vec->size - 1];
    else {
        fprintf(stderr, "[ERROR] : Cannot provide \"Back\" for an empty vector_double");
        exit(EXIT_FAILURE);
    }
}

DATA Front_double(vector_double *vec) {
    if (vec->size > 0)
        return vec->data[0];
    else {
        fprintf(stderr, "[ERROR] : Cannot provide \"Front\" for an empty vector_double");
        exit(EXIT_FAILURE);
    }
}

int IsFull_double(vector_double *vec) {
    if (vec->size >= vec->capacity) {
        return 1;
    } else
        return 0;
}

int IsEmpty_double(vector_double *vec) {
    if (vec->size == 0) {
        return 1;
    } else
        return 0;
}