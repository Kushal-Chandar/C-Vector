/*
    A c_implementation of vector.
    Copyright (C) 2022  Kushal Chandar

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>
*/
#if !defined(C_VECTOR_INCLUDE_C_VECTOR_H_)
#define C_VECTOR_INCLUDE_C_VECTOR_H_

#include <stddef.h>

typedef struct VECTOR_CHAR {
  char *data;
  size_t size;
  size_t capacity;
} vector_char;

typedef struct VECTOR_FLOAT {
  float *data;
  size_t size;
  size_t capacity;
} vector_float;

typedef struct VECTOR_DOUBLE {
  double *data;
  size_t size;
  size_t capacity;
} vector_double;

void CreateVector_char(vector_char *vector);
void CreateVector_float(vector_float *vector);
void CreateVector_double(vector_double *vector);

void CreateVectorSized_char(vector_char *vector, size_t size);
void CreateVectorSized_float(vector_float *vector, size_t size);
void CreateVectorSized_double(vector_double *vector, size_t size);

void ReserveVectorSize_char(vector_char *vector, size_t size);
void ReserveVectorSize_float(vector_float *vector, size_t size);
void ReserveVectorSize_double(vector_double *vector, size_t size);

void DestroyVector_char(vector_char *vector);
void DestroyVector_float(vector_float *vector);
void DestroyVector_double(vector_double *vector);

void PushBack_char(vector_char *vector, char value);
void PushBack_float(vector_float *vector, float value);
void PushBack_double(vector_double *vector, double value);

void Pop_char(vector_char *vector);
void Pop_float(vector_float *vector);
void Pop_double(vector_double *vector);

int IsFull_char(vector_char *vector);
int IsFull_float(vector_float *vector);
int IsFull_double(vector_double *vector);

int IsEmpty_char(vector_char *vector);
int IsEmpty_float(vector_float *vector);
int IsEmpty_double(vector_double *vector);

char Front_char(vector_char *vector);
float Front_float(vector_float *vector);
double Front_double(vector_double *vector);

char Back_char(vector_char *vector);
float Back_float(vector_float *vector);
double Back_double(vector_double *vector);

#endif  // C_VECTOR_INCLUDE_C_VECTOR_H_
