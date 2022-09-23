// this example is modified from CERT-J site
import java.util.Arrays;

public class exp02_example {

 public static void println(int[] ar1, int[] ar2) {
 System.out.println(ar1.equals(ar2)); // prints false
 }
 
 public static void main(String[] args) {
 int[] arr1 = new int[20]; // Initialized to 0
 int[] arr2 = new int[20]; // Initialized to 0
 println(arr1, arr2); 
 }
}