extern int printf(const char*, ...);
extern int get_int();
 
void cmp_set_race_bad() {
  int flag = get_int();
  if (flag == 0) {
    flag = 1;
  }
  else {
    printf("\n");
  }
  printf("1st: get %d\n", flag);
  flag = get_int();
  if (flag != 0) {
    printf("2nd: get %d\n", flag);
  }
  else {
    flag = 1;
  }
  printf("final: %d\n", flag);
}
