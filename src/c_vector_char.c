#include <stdio.h>
#include <stdlib.h>

#include "c_vector.h"

#define DATA char
#define SIZE sizeof(DATA)

void CreateVector_char(vector_char *vec) {
  vec->capacity = 0;
  vec->size = 0;
vec->data = NULL;
}

void CreateVectorSized_char(vector_char *vec, size_t size) {
  vec->capacity = size;
  vec->size = size;
  vec->data = (DATA *)calloc(size, SIZE);
}

void ReserveVectorSize_char(vector_char *vec, size_t size) {
  vec->capacity = size;
  vec->size = size;
  vec->data = (DATA *)realloc((void *)vec->data, (vec->capacity) * SIZE);
}

void DestroyVector_char(vector_char *vec) {
  vec->capacity = 0;
  vec->size = 0;
  free(vec->data);
  vec->data = NULL;
}

void PushBack_char(vector_char *vec, DATA value) {
  if (IsFull_char(vec)) {
    if (vec->size > 0)
      vec->capacity = (vec->size) * 2;
    else {
      vec->capacity = 1;
      vec->size = 0;
    }
    vec->data = (DATA *)realloc((void *)vec->data, (vec->capacity) * SIZE);
  }
  (vec->size)++;
  vec->data[(vec->size) - 1] = value;
}

void Pop_char(vector_char *vec) {
  if (!IsEmpty_char(vec)) {
    vec->data[(vec->size) - 1] = 0;
    (vec->size)--;
  } else {
    fprintf(stderr,
            "[ERROR] : Cannot perform \"Pop\" for an empty vector_char");
    exit(EXIT_FAILURE);
  }
}

DATA Back_char(vector_char *vec) {
  if (vec->size > 0)
    return vec->data[vec->size - 1];
  else {
    fprintf(stderr,
            "[ERROR] : Cannot provide \"Back\" for an empty vector_char");
    exit(EXIT_FAILURE);
  }
}

DATA Front_char(vector_char *vec) {
  if (vec->size > 0)
    return vec->data[0];
  else {
    fprintf(stderr,
            "[ERROR] : Cannot provide \"Front\" for an empty vector_char");
    exit(EXIT_FAILURE);
  }
}

int IsFull_char(vector_char *vec) {
  if (vec->size >= vec->capacity) {
    return 1;
  } else
    return 0;
}

int IsEmpty_char(vector_char *vec) {
  if (vec->size == 0) {
    return 1;
  } else
    return 0;
}
