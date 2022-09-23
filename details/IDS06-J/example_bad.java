
import java.util.Calendar;
import java.util.GregorianCalendar;

// this example is taken from CERT-J site Dashboard
// 
public class example_bad {
  static Calendar c = new GregorianCalendar(1995, GregorianCalendar.MAY, 23);
  public static void main(String[] args) {
    // Untrusted data is incorporated into the format string below.
    // Attacker can expose the date against which input is compared against
    // with some special input string, resulting in infomation leakage.
    System.out.format(
      args[0] + "did not match! HINT: It was issued on %1$terd of some month", c
    );
  }
}
