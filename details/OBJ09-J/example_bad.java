import java.lang.String;
public class j_obj09_1 {
 void callComp(Boolean v) {
 Class cls1 = getClass();
 Class cls2 = String.class;
 if(v) {
 badComp1(cls1.getName()); 
 } else {
 badComp2(cls1.getName(), cls2.getName());
 }
 }
 Boolean badComp1(String clsName) {
 if(clsName.equals(\"j_obj09_0\")) {
 return true;
 }
 else {
 return false;
 }
 } 

 Boolean badComp2(String name1, String name2)
 {
 if(name1.equals(name2)) {
 return true;
 }
 else {
 return false;
 }
 }
}