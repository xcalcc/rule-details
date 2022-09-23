import java.util.Calendar;
public class j_dcl00_0 {
 private int elapse;
 private static final j_dcl00_0 obj = new j_dcl00_0(); // self cycle (call constructor)
 private static final int curr_year = Calendar.getInstance().get(Calendar.YEAR);
 
 public j_dcl00_0() {
 if(200 > Calendar.getInstance().get(Calendar.YEAR))
 elapse = curr_year - 2000; // curr_year not initialized yet, due to constructor is called before curr_year assignment in line 73. 
 // ( Remediate suggestion: swap lines 72 and line 73 will ensure initialized)
 }

 public static void main(String[] args) {
 System.out.println(\"It was \" + obj.elapse + \" years since 2000\");
 }
 
}