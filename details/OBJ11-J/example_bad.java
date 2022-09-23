import java.io.IOException;

public class obj11_0 {
 public obj11_0()
 {
 // by throwing an exception in constructor
 // attacker can capture a reference to the partially initialized object of the obj11_0 class since
 // the object reference remains in the garbge collector
 if (!performVerification()) {
 throw new SecurityException(\"Access Denied!\");
 }
 }

 private boolean performVerification() {
 return false; // Returns true if data entered is valid, else false
 // Assume that the attacker always enters an invalid value
 }

 public void greeting() {
 System.out.println(\"Welcome user!\");
 }
}