import java.text.Normalizer;
import java.text.Normalizer.Form;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
 
public class j_ids11_0 {
 public static String filterString(String s) {
 // Normalize input string
 String str = Normalizer.normalize(s, Form.NFKC);
 
 // Validate input after normalization
 Pattern pattern = Pattern.compile(\"<script>\");
 Matcher matcher = pattern.matcher(str);
 if (matcher.find()) {
 throw new IllegalArgumentException(\"Invalid input\");
 }
 
 // Delete noncharacter code
 // input string may have noncharacter code
 // however, the new string formed should go through normalize and validation again
 str = str.replaceAll(\"[\\\\p{Cn}]\", \"\");
 return str;
 }
 // ... more code 
}