import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.security.SecureRandom;

public class j_msc62_ex {
  private void regUser1(String userName, byte[] passwd, String regType) {
    try {
      String salt = genSalt();
      String combPasswd = salt + passwd;
      byte[] secureHash = secureHash(combPasswd.getBytes());
      byte[] noSaltPasswd = secureHash(passwd);
      byte[] unsecureHash = unSecureHash(combPasswd.getBytes());
      if(regType.equals("NO_SALT_HASH")) {
        handleError("NO_SALT_HASH");;             // MSC62-J, no salt, no hash
      } else if(regType.equals("NO_SALT")) {
        handleError("NO_SALT_HASH");        // MSC62-J no salt
      } else if(regType.equals("UNSECURE_HASH")){
        handleError("UNSECURE_HASH");       // MSC62-J unsecure hash
      } else {
        saveUser(userName, secureHash);         
      }
    } catch (NoSuchAlgorithmException e) {
      e.printStackTrace();
    }
  } 
  private byte[] unSecureHash(byte [] passwd) throws NoSuchAlgorithmException{
    MessageDigest msgDigest = MessageDigest.getInstance("MD5");  // not secure hash algorithm
    return msgDigest.digest(passwd);
  }
  
  private byte[] secureHash(byte [] passwd) throws NoSuchAlgorithmException{
    MessageDigest msgDigest = MessageDigest.getInstance("SHA256");  // secure hash algorithm
    return msgDigest.digest(passwd);
  }

  private void testRegUser(String userName, String passwd, String regType) {
    regUser1(userName, passwd.getBytes(), regType);
    regUser2(userName, passwd);  // MSC62-J passwd is String type
  }

} 