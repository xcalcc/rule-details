import java.net.InetAddress;
import java.net.UnknownHostException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class msc03_0 {
 public final Connection getConnection() throws SQLException, UnknownHostException {
 
 // IP address class to fill in at runtime. The address should be cleared immediately after use
 class IPAddress {
 // IP address in string
 char[] ipAddress = new char[128];
 try {
 // read in from some secure channel or file
 ...
 }
 finally {
 // clear after use
 Arrys.fill(ipAddress, (byte)0);
 // close file or channel
 ...
 }
 
 }
 if (InetAddress.getByName(ipAddress).isAnyLocalAddress()){
 // hard coded username and password
 String username, password;
 // Username and password should be read from a secure config file/channel at rungime
 return DriverManager.getConnection(\"dbhost:mysql://localhost/mydb\", username, password);
 }
 return DriverManager.getConnection(\"dbhost:mysql://localhost/dbName\", \"username\", \"password\");
 }
}
