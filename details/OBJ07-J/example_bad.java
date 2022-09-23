public class j_obj07_sensitive
{
 private String userName;
 private char[] passwd;

 public j_obj07_sensitive(String name, char[] pass) { // OBJ07-J: class not provide clone throw exception and mark final
 userName = name;
 passwd = pass;
 } 

 public String getUserName() {
 return userName;
 }

 public char[] getPasswd() {
 return passwd;
 }

 protected void resetPasswd() {
 for(int i = 0; i < passwd.length; i++) {
 passwd[i] = 'a';
 }
 }

 void display() {
 System.out.println(\"UserName addr:\" + System.identityHashCode(userName));
 System.out.println(\"Passwd addr:\" + System.identityHashCode(passwd));
 System.out.print(\"User:\" + userName + \" passwd:\");
 System.out.println(passwd);
 }

}