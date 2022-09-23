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
 
 if(fp.exists() && is_safe(fname)) { // fp validated but before calling getCanonicalPath,
 // hacker can bypass the validateion
 String uniqPath = fp.getCanonicalPath();
 FileOutputStream writer = new FileOutputStream(uniqPath);
 writer.write(info.getBytes());
 writer.close(); // info may be written to unkown location
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