import java.net.InetAddress;
import java.net.UnknownHostException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class msc03_0 {
 public final Connection getConnection() throws SQLException, UnknownHostException {
 
 // hard coded IP address in String
 String ipAddress = new String(\"184.15.254.1\");
 if (InetAddress.getByName(ipAddress).isAnyLocalAddress()){
 // hard coded username and password
 return DriverManager.getConnection(\"dbhost:mysql://localhost/mydb\", \"7f4j9vj\", \"xsi9j2nn8\");
 }
 return DriverManager.getConnection(\"dbhost:mysql://localhost/dbName\", \"username\", \"password\");
 }
}