import java.io.FileNotFoundException;
import java.io.RandomAccessFile;
import java.security.AccessController;
import java.security.PrivilegedAction;
import java.io.IOException;

public class sec02_0 {
 public static RandomAccessFile openFile(final java.io.File f) {
 // get a copy through getPath(), but not a clone
 final java.io.File copy = new java.io.File(f.getPath());
 // use copy of path later on
 if (copy.getPath().contains(\"passwd\")){
 return null;
 };
 // ...
 return (RandomAccessFile) AccessController.doPrivileged(new PrivilegedAction<Object>() {
 public Object run() {
 try {
 return new RandomAccessFile(copy.getPath(), \"r\");
 } catch (FileNotFoundException e) {
 e.printStackTrace();
 }
 return null;
 }
 });
 }
}