#include <stdio.h>
 
void func ( void );
 
bool bool_var;
char char_var;
enum enum_var {} enum_var;
signed signed_var;
unsigned unsigned_var;
float float_var;
 
void func ( void )
{
  // expression 1.0f cast to an narrower type char
  char_var = ( char ) 1.0f;
  // char_var cast to narrower type bool
  bool_var = ( bool ) char_var;
  char_var = ( char ) bool_var; // non-compliant
  enum_var = ( enum enum_var ) bool_var; // non-compliant
  signed_var = ( signed ) bool_var; // non-compliant
  unsigned_var = ( unsigned ) bool_var; // non-compliant
  float_var = ( float ) bool_var; // non-compliant
  bool_var = ( bool ) char_var; // non-compliant
  enum_var = ( enum enum_var ) char_var; // non-compliant
  float_var = ( float ) char_var; // non-compliant
  bool_var = ( bool ) enum_var; // non-compliant
  bool_var = ( enum enum_var ) enum_var; // non-compliant
  bool_var = ( bool ) signed_var; // non-compliant
  bool_var = ( enum enum_var ) signed_var; // non-compliant
  bool_var = ( bool ) unsigned_var; // non-compliant
  bool_var = ( enum enum_var ) unsigned_var; // non-compliant
  bool_var = ( bool ) float_var; // non-compliant
  bool_var = ( enum enum_var ) float_var; // non-compliant
}