import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.*;

public class fio16_example
{

 public void bad_1(HttpServletRequest request, HttpServletResponse response) throws IOException
 {
 String fname = request.getParameter("FileName");
 String info = request.getParameter("Info");
 File fp = new File(fname);
 
 { 
 String uniqPath = fp.getCanonicalPath();
 // va;odate after calling getCanonicalPath
 if (fp.exists() && is_safe(uniqPath) { 
 FileOutputStream writer = new FileOutputStream(uniqPath);
 writer.write(info.getBytes());
 writer.close(); // info is written to validated location
 }
 }
 }
 
 private Boolean is_safe(String path)
 {
 // do path validation
 if(path.startsWith("/share/user")) {
 return true;
 } else {
 return false;
 }
 }
}