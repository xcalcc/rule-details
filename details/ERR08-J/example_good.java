public class err08_0 {
 boolean isName(String s) {
 try {
 String names = s.concat("abc");
 if (names.length() != 5) {
 return false;
 }
 return true;
 } 
 }

 boolean foo1() {
 try {
 throw new RuntimeException("xyz");
 } catch (RuntimeException e) {
 // this catch RuntimeException is ancestor of the NullPointerException
 return false;
 }
 }
}