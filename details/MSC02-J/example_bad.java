// The Random() generates identical sequences in all three cases
import java.util.Random;
import java.lang.Math;

public class msc02_0 {

 public void foo0() {
 Random number = new Random(123L);
 for (int i = 0; i < 20; i++) {
 int n = number.nextInt();
 System.out.println(n);
 }
 }

 public void foo1() {
 Random number = new Random();
 System.out.println(number.nextLong());
 }

}