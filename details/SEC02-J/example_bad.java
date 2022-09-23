import java.io.FileNotFoundException;
import java.io.RandomAccessFile;
import java.security.AccessController;
import java.security.PrivilegedAction;
import java.io.IOException;

public class sec02_0 {
 public static RandomAccessFile openFile(final java.io.File f) {
 // getPath() can be extended, thus security check can pass the first time, 
 // but getPath() changed the second time, bypass the good check
 if (f.getPath().contains(\"passwd\")){
 return null;
 };
 // ...
 return (RandomAccessFile) AccessController.doPrivileged(new PrivilegedAction<Object>() {
 public Object run() {
 try {
 return new RandomAccessFile(f, \"r\");
 } catch (FileNotFoundException e) {
 e.printStackTrace();
 }
 return null;
 }
 });
 }
}