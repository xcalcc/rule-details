extern void init_buf(char *buf, int sz);
int f1() {
  char buf[8192];
  init_buf(buf, sizeof(buf));
  return buf[1];
}

int f2() {
  char buf[8192];
  init_buf(buf, sizeof(buf));
  return buf[2] + f1();
}

int f3() {
  char buf[8192];
  init_buf(buf, sizeof(buf));
  return buf[3] + f2();
}

int f4() {
  char buf[8192];
  init_buf(buf, sizeof(buf));
  return buf[4] + f3();
}

