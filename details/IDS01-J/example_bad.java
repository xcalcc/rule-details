import java.text.Normalizer;
import java.text.Normalizer.Form;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
 
public class j_ids01_0 { // inspired by CERT-J example
 public static String filterString(String str) {
 
 // Non-compliant - Validate before the string is normalized
 Pattern pattern = Pattern.compile(\"<script>\");
 Matcher matcher = pattern.matcher(str);
 if (matcher.find()) {
 throw new IllegalArgumentException(\"Invalid input\");
 }
 // Normalization form for validate String is NFKC
 String s = Normalizer.normalize(str, Form.NFKC); 
 return s;
 }
 
 public static void main(String[] args) {
 // \"\\ \" is a noncharacter code point
 String maliciousInput = \"<scr\" + \"\\ \" + \"ipt>\";
 String sb = filterString(maliciousInput);
 // sb = \"<script>\"
 }
}