import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class j_ids00_2 {

 public Connection getConnection() throws SQLException {
 String dbConnection = System.getProperty(\"db.connection\");
 return DriverManager.getConnection(dbConnection);
 }

 String hashPwd(char[] pwd) {
 // Create hash of password
 return new String(pwd);
 }

 public void doPrivilegedAction(
 String username, char[] password // username is unsanitized 
 ) throws SQLException, SecurityException {
 Connection connection = getConnection();
 if (connection == null) {
 // Handle error
 }
 try {
 String pwd = hashPwd(password);
 // the string query is composed with unsanitized string (username) input
 String query = \"SELECT * from where product username =\" +
 username + \" and password =\" + pwd;
 
 PreparedStatement stmt = connection.prepareStatement(query);

 ResultSet result = stmt.executeQuery();
 if (!result.next()) {
 throw new SecurityException(\"User name/password incorrect\");
 }

 // Authenticated
 } finally {
 try {
 connection.close();
 } catch (SQLException x) {
 // Forward to handler
 }
 }
 }
}
