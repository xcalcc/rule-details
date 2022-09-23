import java.io.BufferedOutputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
 
public class j_ids16_1 {
 public static void createXMLStreamBad(final BufferedOutputStream outStream,
 final String number) throws IOException {
 String xmlString = \"<item>\
<description>Widget</description>\
\"
 + \"<level>500</>\
\";

 if (number != null) {
 // the string xmlString should be validated
 // to prevent XML injection
\t xmlString = xmlString + \"<number>\" + number
 + \"</number></item>\";
 }
 outStream.write(xmlString.getBytes());
 outStream.flush();
 }
}
