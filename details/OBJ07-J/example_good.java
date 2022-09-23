public class j_obj07_fp_1 
{
 private String userName;
 private char[] passwd;

 public j_obj07_fp_1(String name, String pass) {
 userName = name;
 passwd = pass.toCharArray();
 }

 // [certj pages]
 // sensitive class define clone() and throws CloneNotSupportedException
 // and clone() method marked finalclone
 // Well behaved clone that prevents subclasses from being made cloneable by defining a final clone that always fails
 public final j_obj07_fp_1 clone() throws CloneNotSupportedException {
 throw new CloneNotSupportedException();
 }

 void resetPasswd() {
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

 public static void main(String[] args) {
 j_obj07_fp_1 obj1= new j_obj07_fp_1(\"user1\", \"abcdef\");
 try {
 j_obj07_fp_1 obj2 = (j_obj07_fp_1)obj1.clone();
 obj2.resetPasswd();
 obj1.display();
 obj2.display();
 } catch (CloneNotSupportedException e) {
 System.out.println(\"Error: clone is not allowed for sensitive class\");
 }
 }
}
