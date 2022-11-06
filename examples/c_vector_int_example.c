#include <stdio.h>

#include "c_vector.h"

#define PRINT(X)                                                \
  for (size_t i = 0; i < X.size; i++) printf("%d ", X.data[i]); \
  printf("\n");

int main(int argc, char const *argv[]) {
  vector_int vec_int_a;  // instantiating vector struct with object vec_int_a

  vector_int vec_int_b;  // instantiating vector struct with object vec_int_b

  // Create vector_int_a with no size
  CreateVector_int(&vec_int_a);
  printf("Created Vector: vec_int_a\n");
  printf("size: %llu\naddress: %p\n", vec_int_a.size, vec_int_a.data);

  printf("capacity: %llu", vec_int_a.capacity);
  // capacity should never be changed manually only through functions

  printf("\n\n");

  // Create vector_int_b with size 10
  printf("Created Vector: vec_int_b with size 10\n");
  CreateVectorSized_int(&vec_int_b, 10);
  printf("size: %llu\ncapacity: %llu\naddress:%p\n", vec_int_b.size,
         vec_int_b.capacity, vec_int_b.data);

  printf("\n\n");

  // Reserving the Size of Vector
  printf("Reserve : vec_int_a to 5\n");  // increasing capacity and size
  ReserveVectorSize_int(
      &vec_int_a,
      5);  // now a can store upto 5 elements without doubling its size
  printf("size: %llu\ncapacity: %llu\naddress:%p\n", vec_int_a.size,
         vec_int_a.capacity, vec_int_a.data);

  printf("Reserve : vec_int_b to 5\n");  // shrinking capacity and size
  ReserveVectorSize_int(
      &vec_int_b,
      5);  // now a can store upto 5 elements without doubling its size
  printf("size: %llu\ncapacity: %llu\naddress:%p\n", vec_int_b.size,
         vec_int_b.capacity, vec_int_b.data);

  // Destroy Vector
  printf("\n\n");
  printf("Destroy Vector : vec_int_a\n");
  DestroyVector_int(&vec_int_a);
  printf("\n\n");

  // Iterating over the vector
  printf("Printing vector: vec_int_b\n");
  for (size_t i = 0; i < vec_int_b.size; i++) printf("%d ", vec_int_b.data[i]);
  printf("\n");  // this same code has to turned into a macro for re-use
  printf("\n\n");

  // Taking input
  printf("Input vector vec_int_b of size %zu\n", vec_int_b.size);
  for (int i = 0; i < vec_int_b.size; i++) scanf_s("%d", &vec_int_b.data[i]);
  PRINT(vec_int_b)  // check the above macro for code
  printf("\n\n");

  // PushBack and Pop
  printf("PushBack and Pop Operations: vec_int_b\n");
  PushBack_int(&vec_int_b, 88);
  PRINT(vec_int_b)

  PushBack_int(&vec_int_b, 100);
  PRINT(vec_int_b)

  Pop_int(&vec_int_b);
  PRINT(vec_int_b)
  Pop_int(&vec_int_b);
  PRINT(vec_int_b)
  Pop_int(&vec_int_b);
  PRINT(vec_int_b)
  Pop_int(&vec_int_b);
  PRINT(vec_int_b)

  printf("size: %llu\n", vec_int_b.size);
  printf("\n\n");

  // Front and Back
  printf("Front and Back: vec_int_b\n");
  printf("back: %d\nfront: %d\n", Back_int(&vec_int_b), Front_int(&vec_int_b));
  printf("\n\n");

  // IsFull and IsEmpty
  printf("IsFull and IsEmpty checks: vec_int_b and vec_int_a\n");
  for (int i = 0; i < 7; i++) PushBack_int(&vec_int_b, i + 4);

  if (IsFull_int(&vec_int_b))
    printf("Vector b is Full\n");
  else
    printf("Vector b is not Full\n");

  if (IsEmpty_int(&vec_int_a))
    printf("Vector a is Empty\n");
  else
    printf("Vector a is not Empty\n");

  printf("size: %llu\ncapacity: %llu\naddress:%p\n", vec_int_b.size,
         vec_int_b.capacity, vec_int_b.data);
  printf("\n\n");

  // Exceeding capacity automatically doubles the size of vector
  printf("Automatic capacity increase with size >= capacity: vec_int_b\n");
  PRINT(vec_int_b)
  PushBack_int(&vec_int_b, 5);

  PRINT(vec_int_b)
  printf("size: %llu\ncapacity: %llu\naddress:%p\n", vec_int_b.size,
         vec_int_b.capacity, vec_int_b.data);

  ReserveVectorSize_int(&vec_int_b, vec_int_b.size);
  printf("size: %llu\ncapacity: %llu\naddress:%p\n", vec_int_b.size,
         vec_int_b.capacity, vec_int_b.data);

  return 0;
}
