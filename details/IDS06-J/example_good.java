
import java.util.Calendar;
import java.util.GregorianCalendar;

// this example is taken from CERT-J site Dashboard
// 
public class example_bad {
  static Calendar c = new GregorianCalendar(1995, GregorianCalendar.MAY, 23);
  public static void main(String[] args) {
    // simply compare input with c
    System.out.format(
      "%s did not match! HINT: It was issued on %terd of some month", args[0], c
    );
  }
}
