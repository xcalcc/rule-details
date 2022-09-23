import java.io.InputStream;

public class ids07_0 { // example from CERT-J
 public static void main(String[] args) throws Exception {
 
 // dir is input from environment in which the app is running
 String dir = System.getProperty(\"dir\");
 if (!Pattern.matches(\"[0-9A-Za-z@.]+\", dir) { // whitelist characters allowed
 // report error and exit
 ...
 }
 Runtime rt = Runtime.getRuntime();
 
 // input from environment is directly concatenated and fed to Runtime.exec
 // Subject to command line injection
 Process proc = rt.exec(\"bash -c ls \" + dir);
 
 int result = proc.waitFor();
 if (result != 0) {
 System.out.println(\"process error: \" + result);
 }
 // continue processing
 // ...
 }
}
