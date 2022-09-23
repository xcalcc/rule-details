import java.net.URL;
import java.net.URLClassLoader;
import java.security.CodeSource;
import java.security.PermissionCollection;
import java.security.Permissions;

public class j_sec07_0 extends URLClassLoader { 

 public j_sec07_0(URL[] urls) {
 super(urls);
 }

 protected PermissionCollection getPermissions(CodeSource cs) {
 // apply default system wide security policy
 PermissionCollection pc = superPermissions(cs);
 // Allow exit from the VM anytime
 pc.add(new RuntimePermission(\"exitVM\"));
 return pc;
 }

 public static boolean checkRtPermission(URL[] urls, String tag) {
 j_sec07_0 loader = new j_sec07_0(urls);
 PermissionCollection pc = loader.getPermissions(null);
 RuntimePermission rp = new RuntimePermission(tag);
 if(pc.implies(rp)) {
 System.out.println(\"Able to exit vm\");
 return true;
 } else {
 System.out.println(\"Not Able to exit VM\");
 return false;
 }
 }

 public static void main(String[] args) {
 URL[] urls = new URL[0];
 checkRtPermission(urls, \"exitVM\");
 checkRtPermission(urls, \"stopVM\");
 }

}
