#include <stdlib.h>
#include <string.h>

typedef struct {
 int len;
 int *data;
} vec_rec, *vec_rec_ptr;

enum { VEC_SZ = 32 };

vec_rec vr[VEC_SZ] = { 0 }; // initialize table content
vec_rec_ptr func_call_stdlib(int len, vec_rec_ptr in_vec)
{
 vec_rec_ptr vrp = (vec_rec_ptr)(malloc(sizeof(vec_rec) * len));
 // vrp may be NULL if malloc failed
 // this code did not check that vrp may be invalid

 // this memcpy may enable an attacker to access memory causing remote code execution
 memcpy(vrp, in_vec, len);

}