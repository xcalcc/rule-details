import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.Cookie;
interface Login {
 public Boolean isUserValid(String userName, char[] passwd);
}

class LoginImpl implements Login {
 public Boolean isUserValid(String userName, char[] passwd) {
 // do the checking
 return true;
 }
}

public class fio52_0 {
 protected void doPost(HttpServletRequest request, HttpServletResponse response) {
 
 String username = request.getParameter("username");
 char[] password = request.getParameter("password").toCharArray();
 String userInfo = request.getParameter("userInfo");
 
 Login login = new LoginImpl();
 
 if (request.getCookies()[0] != null &&
 request.getCookies()[0].getValue() != null) {
 String[] value = request.getCookies()[0].getValue().split(";");
 
 if (!login.isUserValid(value[0], value[1].toCharArray())) {
 // Set error and return
 } else {
 // Forward to welcome page
 }
 } else {
 boolean validated = login.isUserValid(username, password);
 
 if (validated) {
 Cookie loginCookie = new Cookie("MyCookie", username + ";" + new String(password));
 Cookie infoCookie = new Cookie("userInfo", username + ":" + userInfo);
 loginCookie.setSecure(false); // set loginCookie sent by any protocol
 response.addCookie(loginCookie); // [FIO52-J] sensitive cookie, should be encrypted or sent through secure protocol 
 infoCookie.setSecure(true); // set infoCookie sent by secure protocol
 \t response.addCookie(infoCookie);
 \t 
 // ... Forward to welcome page
 } else {
 // Set error and return
 }
 }
 } 
}