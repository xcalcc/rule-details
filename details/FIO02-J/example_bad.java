import java.io.File;
import java.io.IOException;

public class j_fio02_0 {
 void foo(boolean b) {
 try {
 File f = new File("file");
 if (b) {
 if (f.delete()) {
 System.out.println("Deletion error");
 }
 }
 else {
 f.delete(); // failed to check return value of delete()
 }
 }
 catch(Exception e) {
 System.out.println("Exception");
 }
 }
}