import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.security.AccessController;
import java.security.PrivilegedActionException;
import java.security.PrivilegedExceptionAction;

public class sec01_0 { // edited from CERT-J example
 // input file name gone through sanitization and normalization before 
 // enter the doPrivileged() block
 }
 private void privilegedMethod(final String filename)
 throws FileNotFoundException {
 
 final String sanitizeFilename;
 try {
 sanitizeFilename = sanitizeFilename(filename);
 } catch {
 // call handler appropriately 
 ...
 }
 
 try {
 FileInputStream fis =
 (FileInputStream) AccessController.doPrivileged((PrivilegedExceptionAction<Object>) () -> {
 return new FileInputStream(filename);
 });
 // Do something with the file and then close it
 } catch (PrivilegedActionException e) {
 // Forward to handler
 }
 }
}