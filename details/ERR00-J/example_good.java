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
 throw new IllegalIOException(ioe.toString()); // we assume there is such exception handler here
 }
 }

 public void foo1(String fileName) {
 // indentation preserved to better show the difference with \"avoid\" example
 BufferedReader reader = new BufferedReader(new FileReader(new File(fileName)));
 int b;
 while ((b = reader.read()) != -1) {
 System.out.println("byte: " + b);
 }

 }
}
