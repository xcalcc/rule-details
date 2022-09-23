import java.net.URL;
import java.net.URLClassLoader;
import java.net.MalformedURLException;
import java.security.cert.Certificate;
import java.security.CodeSource;
import java.security.PermissionCollection;
import java.security.Permissions;
import java.lang.reflect.*;

public class env03_0 extends URLClassLoader {

 public env03_0(URL[] urls) {
 super(urls);
 }

 protected PermissionCollection getPermissions(CodeSource cs) {
 PermissionCollection pc = super.getPermissions(cs);
 // ...
 // other permissions
 return pc;
 }

 public static boolean checkRtPermission(URL[] urls, String tag) throws MalformedURLException{
 env03_0 loader = new env03_0(urls);
 Certificate[] cert = null;
 CodeSource cs = new CodeSource(new URL("http://abc"), cert);
 PermissionCollection pc = loader.getPermissions(cs);
 ReflectPermission rp = new ReflectPermission(tag);
 if(pc.implies(rp)) {
 System.out.println("Able to get suppressAccessChecks");
 return true;
 } else {
 System.out.println("Not Able to get suppressAccessChecks");
 return false;
 }
 }

 public static void main(String[] args) throws MalformedURLException{
 URL[] urls = new URL[0];
 checkRtPermission(urls, "suppressAccessChecks");
 }

}
