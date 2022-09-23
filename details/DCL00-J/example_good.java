import java.util.Calendar;
public class j_dcl00_0 {
 private int elapse;
 private static final int curr_year = Calendar.getInstance().get(Calendar.YEAR);
 private static final j_dcl00_0 obj = new j_dcl00_0(); // curr_year is initialized before used in constructor
 
 public j_dcl00_0() {
 if(200 > Calendar.getInstance().get(Calendar.YEAR))
 elapse = curr_year - 2000; 
 }

 public static void main(String[] args) {
 System.out.println(\"It was \" + obj.elapse + \" years since 2000\");
 }
 
}