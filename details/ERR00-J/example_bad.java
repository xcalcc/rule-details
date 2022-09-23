import java.io.*;

public class j_err00_0 {

 public void foo0(String fileName) {
 try {
 BufferedReader reader = new BufferedReader(new FileReader(new File(fileName)));
 int b;
 while ((b = reader.read()) != -1) {
 System.out.println("byte: " + b);
 }
 } catch (IOException ioe) {
 ioe.printStackTrace(); // print will not recover nor throw exception 
 }
 }

 public void foo1(String fileName) {
 try {
 BufferedReader reader = new BufferedReader(new FileReader(new File(fileName)));
 int b;
 while ((b = reader.read()) != -1) {
 System.out.println("byte: " + b);
 }
 } catch (IOException ioe) {
 // do nothing - no recovery of any kind
 }
 }
}