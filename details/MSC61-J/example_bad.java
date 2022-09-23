import javax.crypto.*;
import java.io.UnsupportedEncodingException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;

public class j_msc61_0 {
 public static byteArray[] encryption(String strToBeEncrypted) throws NoSuchAlgorithmException, NoSuchPaddingException, InvalidKeyException, UnsupportedEncodingException, BadPaddingException, IllegalBlockSizeException {
 
 // DES is a weak encryption algorithm
 // AES is also weak, however, if AES is to be used
 // GCM (Galois/Counter Mode) will do the encryption
 SecretKey key = KeyGenerator.getInstance(\"DES\").generateKey();
 Cipher cipher = Cipher.getInstance(\"DES\");
 cipher.init(Cipher.ENCRYPT_MODE, key);

 // Encode bytes as UTF8; strToBeEncrypted contains
 // the input string that is to be encrypted
 byteArray[] encoded = strToBeEncrypted.getBytes(\"UTF8\");

 // Perform encryption
 byteArray[] encrypted = cipher.doFinal(encoded);
 return encrypted;
 }
}