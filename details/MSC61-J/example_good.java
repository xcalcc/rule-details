import javax.crypto.*;
import java.io.UnsupportedEncodingException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;

public class j_msc61_0 {
 
 public static SecretKey genKey() {
 // DES is a weak encryption algorithm
 // AES is also weak, however, if AES is to be used
 // GCM (Galois/Counter Mode) will do the encryption
 try {
 KeyGenerator keygen = KeyGenerator.getInstance(\"AES\");
 keygen.init(128);
 return keygen.generateKey();
 } catch (NoSuchAlgorithmException e) {
 // handle exception
 ...
 }
 }
 
 public static byteArray[] encryption(String strToBeEncrypted, SecretKey seckey) throws NoSuchAlgorithmException, NoSuchPaddingException, InvalidKeyException, UnsupportedEncodingException, BadPaddingException, IllegalBlockSizeException {
 Cipher cipher = Cipher.getInstance(\"AES/GCM/NoPadding\");
 // please consult example in CERT-J site for MSC61-J
 ...
 }
}