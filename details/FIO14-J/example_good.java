import java.io.*;

public class fio14_example {
 public static void reg_hook(PrintStream out) {
 // shut down hook will be called when Runtime.exit(),
 // make sure in call hierarchy,
 // there is an edge from Runtime.exit() to Runtime.addShutdownHook
 Runtime.getRuntime().addShutdownHook(new Thread(new Runnable() {
 public void run() {
 System.out.println("exit without closing file, need out.close()");
 out.close(); // report double close
 }
 }
 ));
 }

 public static void close2() throws FileNotFoundException {
 final PrintStream out =
 new PrintStream(new BufferedOutputStream(
 new FileOutputStream("foo.txt")));
 reg_hook(out);
 out.println("hello");
 Runtime.getRuntime().exit(1);
 }
 public static void main(String[] args) throws FileNotFoundException{
 close2();
 }
}