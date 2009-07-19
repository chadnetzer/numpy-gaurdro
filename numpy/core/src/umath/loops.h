#ifndef _NPY_UMATH_LOOPS_H_
#define _NPY_UMATH_LOOPS_H_

#define BOOL_invert BOOL_logical_not
#define BOOL_negative BOOL_logical_not
#define BOOL_add BOOL_logical_or
#define BOOL_bitwise_and BOOL_logical_and
#define BOOL_bitwise_or BOOL_logical_or
#define BOOL_bitwise_xor BOOL_logical_xor
#define BOOL_multiply BOOL_logical_and
#define BOOL_subtract BOOL_logical_xor
#define BOOL_fmax BOOL_maximum
#define BOOL_fmin BOOL_minimum

/*
 *****************************************************************************
 **                             BOOLEAN LOOPS                               **
 *****************************************************************************
 */

NPY_NO_EXPORT void
BOOL_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BOOL_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BOOL_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BOOL_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BOOL_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BOOL_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BOOL_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

/*
 *****************************************************************************
 **                           INTEGER LOOPS
 *****************************************************************************
 */

#define BYTE_floor_divide BYTE_divide
#define BYTE_fmax BYTE_maximum
#define BYTE_fmin BYTE_minimum

NPY_NO_EXPORT void
BYTE_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
BYTE_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
BYTE_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
BYTE_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_negative(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_invert(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BYTE_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BYTE_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BYTE_bitwise_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BYTE_bitwise_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BYTE_bitwise_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BYTE_left_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
BYTE_right_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
BYTE_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
BYTE_true_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_power(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_fmod(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




#define UBYTE_floor_divide UBYTE_divide
#define UBYTE_fmax UBYTE_maximum
#define UBYTE_fmin UBYTE_minimum

NPY_NO_EXPORT void
UBYTE_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
UBYTE_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
UBYTE_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
UBYTE_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_negative(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_invert(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_bitwise_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_bitwise_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_bitwise_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_left_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_right_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
UBYTE_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UBYTE_true_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_power(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_fmod(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UBYTE_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
BYTE_remainder(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UBYTE_remainder(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));





#define SHORT_floor_divide SHORT_divide
#define SHORT_fmax SHORT_maximum
#define SHORT_fmin SHORT_minimum

NPY_NO_EXPORT void
SHORT_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
SHORT_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
SHORT_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
SHORT_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_negative(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_invert(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
SHORT_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
SHORT_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
SHORT_bitwise_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
SHORT_bitwise_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
SHORT_bitwise_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
SHORT_left_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
SHORT_right_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
SHORT_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
SHORT_true_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_power(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_fmod(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




#define USHORT_floor_divide USHORT_divide
#define USHORT_fmax USHORT_maximum
#define USHORT_fmin USHORT_minimum

NPY_NO_EXPORT void
USHORT_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
USHORT_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
USHORT_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
USHORT_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_negative(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_invert(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_bitwise_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_bitwise_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_bitwise_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_left_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_right_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
USHORT_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
USHORT_true_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_power(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_fmod(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
USHORT_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
SHORT_remainder(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
USHORT_remainder(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));





#define INT_floor_divide INT_divide
#define INT_fmax INT_maximum
#define INT_fmin INT_minimum

NPY_NO_EXPORT void
INT_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
INT_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
INT_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
INT_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_negative(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_invert(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
INT_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
INT_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
INT_bitwise_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
INT_bitwise_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
INT_bitwise_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
INT_left_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
INT_right_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
INT_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
INT_true_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_power(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_fmod(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




#define UINT_floor_divide UINT_divide
#define UINT_fmax UINT_maximum
#define UINT_fmin UINT_minimum

NPY_NO_EXPORT void
UINT_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
UINT_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
UINT_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
UINT_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_negative(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_invert(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_bitwise_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_bitwise_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_bitwise_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_left_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_right_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
UINT_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
UINT_true_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_power(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_fmod(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
UINT_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
INT_remainder(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
UINT_remainder(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));





#define LONG_floor_divide LONG_divide
#define LONG_fmax LONG_maximum
#define LONG_fmin LONG_minimum

NPY_NO_EXPORT void
LONG_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONG_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONG_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONG_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_negative(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_invert(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONG_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONG_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONG_bitwise_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONG_bitwise_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONG_bitwise_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONG_left_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONG_right_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
LONG_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONG_true_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_power(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_fmod(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




#define ULONG_floor_divide ULONG_divide
#define ULONG_fmax ULONG_maximum
#define ULONG_fmin ULONG_minimum

NPY_NO_EXPORT void
ULONG_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
ULONG_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
ULONG_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
ULONG_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_negative(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_invert(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_bitwise_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_bitwise_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_bitwise_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_left_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_right_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
ULONG_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONG_true_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_power(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_fmod(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONG_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONG_remainder(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONG_remainder(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));





#define LONGLONG_floor_divide LONGLONG_divide
#define LONGLONG_fmax LONGLONG_maximum
#define LONGLONG_fmin LONGLONG_minimum

NPY_NO_EXPORT void
LONGLONG_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONGLONG_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONGLONG_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONGLONG_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_negative(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_invert(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGLONG_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGLONG_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGLONG_bitwise_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGLONG_bitwise_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGLONG_bitwise_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGLONG_left_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGLONG_right_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
LONGLONG_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGLONG_true_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_power(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_fmod(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




#define ULONGLONG_floor_divide ULONGLONG_divide
#define ULONGLONG_fmax ULONGLONG_maximum
#define ULONGLONG_fmin ULONGLONG_minimum

NPY_NO_EXPORT void
ULONGLONG_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
ULONGLONG_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
ULONGLONG_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
ULONGLONG_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_negative(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_invert(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_bitwise_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_bitwise_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_bitwise_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_left_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_right_shift(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));




NPY_NO_EXPORT void
ULONGLONG_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
ULONGLONG_true_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_power(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_fmod(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
ULONGLONG_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGLONG_remainder(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
ULONGLONG_remainder(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


/*
 *****************************************************************************
 **                             FLOAT LOOPS                                 **
 *****************************************************************************
 */

NPY_NO_EXPORT void
FLOAT_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
FLOAT_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
FLOAT_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_isnan(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_isinf(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_isfinite(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_signbit(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_copysign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
FLOAT_fmax(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_fmin(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_floor_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
FLOAT_remainder(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
FLOAT_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
FLOAT_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));


NPY_NO_EXPORT void
FLOAT_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
FLOAT_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
FLOAT_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_negative(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
FLOAT_modf(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

#ifdef HAVE_FREXPF
NPY_NO_EXPORT void
FLOAT_frexp(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));
#endif

#ifdef HAVE_LDEXPF
NPY_NO_EXPORT void
FLOAT_ldexp(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));
#endif

#define FLOAT_true_divide FLOAT_divide






NPY_NO_EXPORT void
DOUBLE_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
DOUBLE_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
DOUBLE_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_isnan(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_isinf(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_isfinite(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_signbit(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_copysign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
DOUBLE_fmax(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_fmin(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_floor_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
DOUBLE_remainder(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
DOUBLE_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
DOUBLE_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));


NPY_NO_EXPORT void
DOUBLE_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
DOUBLE_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
DOUBLE_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_negative(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
DOUBLE_modf(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

#ifdef HAVE_FREXP
NPY_NO_EXPORT void
DOUBLE_frexp(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));
#endif

#ifdef HAVE_LDEXP
NPY_NO_EXPORT void
DOUBLE_ldexp(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));
#endif

#define DOUBLE_true_divide DOUBLE_divide






NPY_NO_EXPORT void
LONGDOUBLE_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGDOUBLE_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGDOUBLE_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_isnan(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_isinf(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_isfinite(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_signbit(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_copysign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));



NPY_NO_EXPORT void
LONGDOUBLE_fmax(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_fmin(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_floor_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGDOUBLE_remainder(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGDOUBLE_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONGDOUBLE_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));


NPY_NO_EXPORT void
LONGDOUBLE_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
LONGDOUBLE_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
LONGDOUBLE_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_negative(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
LONGDOUBLE_modf(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

#ifdef HAVE_FREXPL
NPY_NO_EXPORT void
LONGDOUBLE_frexp(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));
#endif

#ifdef HAVE_LDEXPL
NPY_NO_EXPORT void
LONGDOUBLE_ldexp(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));
#endif

#define LONGDOUBLE_true_divide LONGDOUBLE_divide




/*
 *****************************************************************************
 **                           COMPLEX LOOPS                                 **
 *****************************************************************************
 */

NPY_NO_EXPORT void
CFLOAT_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_floor_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CFLOAT_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CFLOAT_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CFLOAT_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_isnan(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_isinf(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_isfinite(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CFLOAT_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CFLOAT_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CFLOAT_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT__arg(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_fmax(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CFLOAT_fmin(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

#define CFLOAT_true_divide CFLOAT_divide

NPY_NO_EXPORT void
CDOUBLE_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_floor_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_isnan(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_isinf(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_isfinite(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CDOUBLE_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CDOUBLE_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CDOUBLE_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE__arg(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CDOUBLE_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CDOUBLE_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_fmax(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CDOUBLE_fmin(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

#define CDOUBLE_true_divide CDOUBLE_divide

NPY_NO_EXPORT void
CLONGDOUBLE_add(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_subtract(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_multiply(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_floor_divide(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CLONGDOUBLE_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_logical_and(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_logical_or(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_logical_xor(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_logical_not(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_isnan(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CLONGDOUBLE_isinf(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CLONGDOUBLE_isfinite(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CLONGDOUBLE_square(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CLONGDOUBLE_reciprocal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CLONGDOUBLE_ones_like(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(data));

NPY_NO_EXPORT void
CLONGDOUBLE_conjugate(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_absolute(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE__arg(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CLONGDOUBLE_maximum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
CLONGDOUBLE_minimum(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_fmax(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

NPY_NO_EXPORT void
CLONGDOUBLE_fmin(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

#define CLONGDOUBLE_true_divide CLONGDOUBLE_divide

/*
 *****************************************************************************
 **                            OBJECT LOOPS                                 **
 *****************************************************************************
 */


NPY_NO_EXPORT void
OBJECT_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
OBJECT_not_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
OBJECT_greater(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
OBJECT_greater_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
OBJECT_less(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
OBJECT_less_equal(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));


NPY_NO_EXPORT void
OBJECT_sign(char **args, intp *dimensions, intp *steps, void *NPY_UNUSED(func));

#endif
