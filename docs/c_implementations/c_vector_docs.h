/**
 * @file c_vector.h
 * @author Kushal Chandar
 * @brief C implementation of c++ vector
 * @version 1.1
 * @date 2022-04-11
 * @copyright Copyright (c) 2022
 */

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
#if !defined(C_VECTOR)
#define C_VECTOR

#include <stddef.h>

/**
 * @brief Structure to encapsulate vector data.
 * @details Each object has a three variables data, size and capacity.
 * @warning No structure variable mentioned above must be directly initialised
 * or have its value changed manually.
 * @attention Create an object named 'a' with vector_int a;
 */
typedef struct VECTOR_INT {
  /**
   * @brief Data is the internal dynamically allocated array
   * @details Param data can be used to change values of vector at an index with
   * object.data[index] where, index <= size - 1
   */
  int *data;

  /**
   * @brief Number of elements in the vector
   * @details Object.size can be used to get the size of array for iterating
   * through the vector
   */
  size_t size;

  /**
   * @brief The actual number of elements the vector can store currently
   * @details This an internal variable used to perform checks
   * @attention The capacity will be doubled if the vector is full
   * @warning Don't change the value
   */
  size_t capacity;
} vector_int;

/**
 * @brief Structure to encapsulate vector data.
 * @details Each object has a three variables data, size and capacity.
 * @warning No structure variable mentioned above must be directly initialised
 * or have its value changed manually.
 * @attention Create an object named 'a' with vector_char a;
 */
typedef struct VECTOR_CHAR {
  /**
   * @brief Data is the internal dynamically allocated array
   * @details Param data can be used to change values of vector at an index with
   * object.data[index] where, index <= size - 1
   */
  char *data;

  /**
   * @brief Number of elements in the vector
   * @details Object.size can be used to get the size of array for iterating
   * through the vector
   */
  size_t size;

  /**
   * @brief The actual number of elements the vector can store currently
   * @details This an internal variable used to perform checks
   * @attention The capacity will be doubled if the vector is full
   * @warning Don't change the value
   */
  size_t capacity;
} vector_char;

/**
 * @brief Structure to encapsulate vector data.
 * @details Each object has a three variables data, size and capacity.
 * @warning No structure variable mentioned above must be directly initialised
 * or have its value changed manually.
 * @attention Create an object named 'a' with vector_float a;
 */
typedef struct VECTOR_FLOAT {
  /**
   * @brief Data is the internal dynamically allocated array
   * @details Param data can be used to change values of vector at an index with
   * object.data[index] where, index <= size - 1
   */
  float *data;

  /**
   * @brief Number of elements in the vector
   * @details Object.size can be used to get the size of array for iterating
   * through the vector
   */
  size_t size;

  /**
   * @brief The actual number of elements the vector can store currently
   * @details This an internal variable used to perform checks
   * @attention The capacity will be doubled if the vector is full
   * @warning Don't change the value
   */
  size_t capacity;
} vector_float;

/**
 * @brief Structure to encapsulate vector data.
 * @details Each object has a three variables data, size and capacity.
 * @warning No structure variable mentioned above must be directly initialised
 * or have its value changed manually.
 * @attention Create an object named 'a' with vector_double a;
 */
typedef struct VECTOR_DOUBLE {
  /**
   * @brief Data is the internal dynamically allocated array
   * @details Param data can be used to change values of vector at an index with
   * object.data[index] where, index <= size - 1
   */
  double *data;

  /**
   * @brief Number of elements in the vector
   * @details Object.size can be used to get the size of array for iterating
   * through the vector
   */
  size_t size;

  /**
   * @brief The actual number of elements the vector can store currently
   * @details This an internal variable used to perform checks
   * @attention The capacity will be doubled if the vector is full
   * @warning Don't change the value
   */
  size_t capacity;
} vector_double;

/**
 * @brief Create a vector
 * @param vector A pointer to an object of type vector_int.
 * @details Initialise data, size and capacity variables for the vector. Calloc
 * is used to initialise data variable
 */
void CreateVector_int(vector_int *vector);

/**
 * @brief Create a vector
 * @param vector A pointer to an object of type vector_char.
 * @details Initialise data, size and capacity variables for the vector. Calloc
 * is used to initialise data variable
 */
void CreateVector_char(vector_char *vector);

/**
 * @brief Create a vector
 * @param vector A pointer to an object of type vector_float.
 * @details Initialise data, size and capacity variables for the vector. Calloc
 * is used to initialise data variable
 */
void CreateVector_float(vector_float *vector);

/**
 * @brief Create a vector
 * @param vector A pointer to an object of type vector_double.
 * @details Initialise data, size and capacity variables for the vector. Calloc
 * is used to initialise data variable
 */
void CreateVector_double(vector_double *vector);

/**
 * @brief Create a vector with given size
 * @param vector A pointer to an object of type vector_int.
 * @param size The number of elements to initialise the vector, all values will
 * be set to 0
 * @details Initialise data, size and capacity variables for the vector. Calloc
 * is used to initialise data variable, and the size is set to the param size
 * given be the user
 */
void CreateVectorSized_int(vector_int *vector, size_t size);

/**
 * @brief Create a vector with given size
 * @param vector A pointer to an object of type vector_char.
 * @param size The number of elements to initialise the vector, all values will
 * be set to 0
 * @details Initialise data, size and capacity variables for the vector. Calloc
 * is used to initialise data variable, and the size is set to the param size
 * given be the user
 */
void CreateVectorSized_char(vector_char *vector, size_t size);

/**
 * @brief Create a vector with given size
 * @param vector A pointer to an object of type vector_float.
 * @param size The number of elements to initialise the vector, all values will
 * be set to 0
 * @details Initialise data, size and capacity variables for the vector. Calloc
 * is used to initialise data variable, and the size is set to the param size
 * given be the user
 */
void CreateVectorSized_float(vector_float *vector, size_t size);

/**
 * @brief Create a vector with given size
 * @param vector A pointer to an object of type vector_double.
 * @param size The number of elements to initialise the vector, all values will
 * be set to 0
 * @details Initialise data, size and capacity variables for the vector. Calloc
 * is used to initialise data variable, and the size is set to the param size
 * given be the user
 */
void CreateVectorSized_double(vector_double *vector, size_t size);

/**
 * @brief Reserve the size of a vector in memory
 * @param vector A pointer to an object of type vector_int.
 * @param size The vector will be reserved to number of elements passed into
 * this param
 * @details The vector's capacity is shrunk or increased to match the number of
 * elements provided by the user. At the end of this operation the size and
 * capacity of vector are equal
 */
void ReserveVectorSize_int(vector_int *vector, size_t size);

/**
 * @brief Reserve the size of a vector in memory
 * @param vector A pointer to an object of type vector_char.
 * @param size The vector will be reserved to number of elements passed into
 * this param
 * @details The vector's capacity is shrunk or increased to match the number of
 * elements provided by the user. At the end of this operation the size and
 * capacity of vector are equal
 */
void ReserveVectorSize_char(vector_char *vector, size_t size);

/**
 * @brief Reserve the size of a vector in memory
 * @param vector A pointer to an object of type vector_float.
 * @param size The vector will be reserved to number of elements passed into
 * this param
 * @details The vector's capacity is shrunk or increased to match the number of
 * elements provided by the user. At the end of this operation the size and
 * capacity of vector are equal
 */
void ReserveVectorSize_float(vector_float *vector, size_t size);

/**
 * @brief Reserve the size of a vector in memory
 * @param vector A pointer to an object of type vector_double.
 * @param size The vector will be reserved to number of elements passed into
 * this param
 * @details The vector's capacity is shrunk or increased to match the number of
 * elements provided by the user. At the end of this operation the size and
 * capacity of vector are equal
 */
void ReserveVectorSize_double(vector_double *vector, size_t size);

/**
 * @brief De-allocate the memory of the vector
 * @param vector A pointer to an object of type vector_int.
 * @details The vector's memory is de-allocated. size and capacity variables are
 * set to 0
 */
void DestroyVector_int(vector_int *vector);

/**
 * @brief De-allocate the memory of the vector
 * @param vector A pointer to an object of type vector_char.
 * @details The vector's memory is de-allocated. size and capacity variables are
 * set to 0
 */
void DestroyVector_char(vector_char *vector);

/**
 * @brief De-allocate the memory of the vector
 * @param vector A pointer to an object of type vector_float.
 * @details The vector's memory is de-allocated. size and capacity variables are
 * set to 0
 */
void DestroyVector_float(vector_float *vector);

/**
 * @brief De-allocate the memory of the vector
 * @param vector A pointer to an object of type vector_double.
 * @details The vector's memory is de-allocated. size and capacity variables are
 * set to 0
 */
void DestroyVector_double(vector_double *vector);

/**
 * @brief Add a the given value to the end/back of the vector
 * @param vector A pointer to an object of type vector_int.
 * @param value Value to be added to the end of vector
 * @details The given value will be added to the end of vector
 */
void PushBack_int(vector_int *vector, int value);

/**
 * @brief Add a the given value to the end/back of the vector
 * @param vector A pointer to an object of type vector_char.
 * @param value Value to be added to the end of vector
 * @details The given value will be added to the end of vector
 */
void PushBack_char(vector_char *vector, char value);

/**
 * @brief Add a the given value to the end/back of the vector
 * @param vector A pointer to an object of type vector_float.
 * @param value Value to be added to the end of vector
 * @details The given value will be added to the end of vector
 */
void PushBack_float(vector_float *vector, float value);

/**
 * @brief Add a the given value to the end/back of the vector
 * @param vector A pointer to an object of type vector_double.
 * @param value Value to be added to the end of vector
 * @details The given value will be added to the end of vector
 */
void PushBack_double(vector_double *vector, double value);

/**
 * @brief Remove a value from the end/back of vector
 * @param vector A pointer to an object of type vector_int.
 * @details The value at the end of vector is removed
 */
void Pop_int(vector_int *vector);

/**
 * @brief Remove a value from the end/back of vector
 * @param vector A pointer to an object of type vector_char.
 * @details The value at the end of vector is removed
 */
void Pop_char(vector_char *vector);

/**
 * @brief Remove a value from the end/back of vector
 * @param vector A pointer to an object of type vector_float.
 * @details The value at the end of vector is removed
 */
void Pop_float(vector_float *vector);

/**
 * @brief Remove a value from the end/back of vector
 * @param vector A pointer to an object of type vector_double.
 * @details The value at the end of vector is removed
 */
void Pop_double(vector_double *vector);

/**
 * @brief Checks if Vector is full
 * @param vector A pointer to an object of type vector_int.
 * @returns 1 if array if full, 0 if array if not full
 */
int IsFull_int(vector_int *vector);

/**
 * @brief Checks if Vector is full
 * @param vector A pointer to an object of type vector_char.
 * @returns 1 if array if full, 0 if array if not full
 */
int IsFull_char(vector_char *vector);

/**
 * @brief Checks if Vector is full
 * @param vector A pointer to an object of type vector_float.
 * @returns 1 if array if full, 0 if array if not full
 */
int IsFull_float(vector_float *vector);

/**
 * @brief Checks if Vector is full
 * @param vector A pointer to an object of type vector_double.
 * @returns 1 if array if full, 0 if array if not full
 */
int IsFull_double(vector_double *vector);

/**
 * @brief Checks if Vector is Empty
 * @param vector A pointer to an object of type vector_int.
 * @returns 1 if array if empty, 0 if array if not empty
 */
int IsEmpty_int(vector_int *vector);

/**
 * @brief Checks if Vector is Empty
 * @param vector A pointer to an object of type vector_char.
 * @returns 1 if array if empty, 0 if array if not empty
 */
int IsEmpty_char(vector_char *vector);

/**
 * @brief Checks if Vector is Empty
 * @param vector A pointer to an object of type vector_float.
 * @returns 1 if array if empty, 0 if array if not empty
 */
int IsEmpty_float(vector_float *vector);

/**
 * @brief Checks if Vector is Empty
 * @param vector A pointer to an object of type vector_double.
 * @returns 1 if array if empty, 0 if array if not empty
 */
int IsEmpty_double(vector_double *vector);

/**
 * @brief Returns the value at the front of Vector
 * @param vector A pointer to an object of type vector_int.
 * @return Value, if array is not empty
 * @attention If array is empty an error is generated
 */
int Front_int(vector_int *vector);

/**
 * @brief Returns the value at the front of Vector
 * @param vector A pointer to an object of type vector_char.
 * @return Value, if array is not empty
 * @attention If array is empty an error is generated
 */
char Front_char(vector_char *vector);

/**
 * @brief Returns the value at the front of Vector
 * @param vector A pointer to an object of type vector_float.
 * @return Value, if array is not empty
 * @attention If array is empty an error is generated
 */
float Front_float(vector_float *vector);

/**
 * @brief Returns the value at the front of Vector
 * @param vector A pointer to an object of type vector_double.
 * @return Value, if array is not empty
 * @attention If array is empty an error is generated
 */
double Front_double(vector_double *vector);

/**
 * @brief Returns the value at the back of Vector
 * @param vector A pointer to an object of type vector_int.
 * @return Value, if array is not empty
 * @attention If array is empty an error is generated
 */
int Back_int(vector_int *vector);

/**
 * @brief Returns the value at the back of Vector
 * @param vector A pointer to an object of type vector_char.
 * @return Value, if array is not empty
 * @attention If array is empty an error is generated
 */
char Back_char(vector_char *vector);

/**
 * @brief Returns the value at the back of Vector
 * @param vector A pointer to an object of type vector_float.
 * @return Value, if array is not empty
 * @attention If array is empty an error is generated
 */
float Back_float(vector_float *vector);

/**
 * @brief Returns the value at the back of Vector
 * @param vector A pointer to an object of type vector_double.
 * @return Value, if array is not empty
 * @attention If array is empty an error is generated
 */
double Back_double(vector_double *vector);

#endif  // C_VECTOR
