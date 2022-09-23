import java.io.IOException;
import org.xml.sax.EntityResolver;
import org.xml.sax.InputSource;
import org.xml.sax.SAXException;
import java.io.FileInputStream;
import java.io.InputStream;

import javax.xml.parsers.ParserConfigurationException;
import javax.xml.parsers.SAXParser;
import javax.xml.parsers.SAXParserFactory;
import org.xml.sax.XMLReader;
import org.xml.sax.helpers.DefaultHandler;

class ids17_CustomResolver implements EntityResolver {
 public InputSource resolveEntity(String publicId, String systemId)
 throws SAXException, IOException {
 // Check by whitelist good entity
 ....
 }
}
 
public class ids17_example{
 private static void bad_receiveXMLStream(InputStream inStream,
 DefaultHandler defaultHandler)
 throws ParserConfigurationException, SAXException, IOException {
 SAXParserFactory factory = SAXParserFactory.newInstance();
 SAXParser saxParser = factory.newSAXParser();
 saxParser.parse(inStream, defaultHandler); // IDS17-J
 }

 private static void bad_receiveXMLStream2(InputStream inStream,
 DefaultHandler defaultHandler,
 Boolean do_sanitize) 
 throws ParserConfigurationException, SAXException, IOException {
 try {
 SAXParserFactory factory = SAXParserFactory.newInstance();
 SAXParser saxParser = factory.newSAXParser();

 XMLReader reader = saxParser.getXMLReader();
 reader.setContentHandler(defaultHandler);
 // always sanitize
 reader.setEntityResolver(new ids17_CustomResolver()); // sanitized
 
 InputSource is = new InputSource(inStream);
 reader.parse(is); // no IDS17 complaince issue 
 } catch (java.net.MalformedURLException mue) {
 System.err.println(\"Malformed URL Exception: \" + mue);
 }
 }

 
 public static void main(String[] args) throws ParserConfigurationException,
 SAXException, IOException {
 // invokes bad_receiveXMLStream and bad_receiveXMLStream2
 // ...
 }
}