import javax.servlet.http.HttpServletRequest;

public class j_ids15_0
{
 public void setSession(HttpServletRequest request, String attrName, String attrValue) {
 request.getSession().setAttribute(attrName, attrValue);
 }

 public void configSession(HttpServletRequest request) {
 String value = request.getParameter(\"Config\");
 String data = System.getenv(\"APP_DATA\");
 if(value.startsWith(\"APP_DATA\")) {
 setSession(request, \"APP_DATA\", data); // sensitive data
 } else if(value.startsWith(\"SAFE_DATA\")) {
 String safeData = Encryption(data);
 setSession(request, \"SAFE_DATA\", safeData); // data sanitized
 } else {
 setSession(request, \"attr\", \"value\");
 }
 }

 public String Encryption(String data) {
 // encrypt the input data
 // ...
 String safeData = data.replace(\"a\", \"z\");
 return safeData;
 }
}