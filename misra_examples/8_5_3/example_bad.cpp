typedef enum color { red=3 } GoodEnum;   // compliant

typedef enum bad_enum_color { white=0,
			      blue=1,
			      yellow } BadEnum;  // non-compliant

typedef enum no_assign { NO_ONE, NO_TWO, NO_THREE } GoodEnum_NoAssign;

extern void bar( color c, bad_enum_color b, no_assign n);

void func_use(void)
{
  color var_color = red;
  bad_enum_color var_bad_color = blue;
  no_assign var_no_assign = NO_TWO;

  bar(var_color, var_bad_color, var_no_assign);
  return;
}