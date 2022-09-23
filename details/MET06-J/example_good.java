import java.net.HttpCookie;
import java.util.ArrayList;
import java.util.List;

class j_met06 implements Cloneable {
 HttpCookie[] cookies;

 j_met06(HttpCookie[] c) {
 cookies = c;
 }

 public Object clone() throws CloneNotSupportedException {
 // get shallow copy of object
 final j_met06 clone = (j_met06) super.clone();
 clone.doSomething(); // Can invoke overridable method

 // the class has mutable object, need to deep copy those field
 clone.cookies = clone.deepCopy();
 return clone;
 }

 final void doSomething() { // not overridable method
 for (int i = 0; i < cookies.length; i++) {
 cookies[i].setValue(\"\" + i);
 }
 }

 final HttpCookie[] deepCopy() { // not overridable method
 if (cookies == null) {
 throw new NullPointerException();
 }

 // implements deep copy
 List<HttpCookie> cloned_cookie = new ArrayList<>();
 // ...
 return (HttpCookie[]) cloned_cookie;
 }
}

class j_met06_ext extends j_met06 {
 j_met06_ext(HttpCookie[] c) {
 super(c);
 }

 public Object clone() throws CloneNotSupportedException {
 final j_met06_ext clone = (j_met06_ext) super.clone();
 clone.doSomething();
 return clone;
 }

 void doSomething() { // will not be called
 for (int i = 0;i < cookies.length; i++) {
 cookies[i].setDomain(i + \".xxx.com\");
 }
 }

 public static void main(String[] args)
 throws CloneNotSupportedException {
 HttpCookie[] hc = new HttpCookie[20];
 for (int i = 0 ; i < hc.length; i++){
 hc[i] = new HttpCookie(\"cookie\" + i,\"\" + i);
 }
 // deep copy was invoked, the original object cannot be modified
 j_met06 badcookie = new j_met06_ext(hc);
 badcookie.clone();
 }
}
