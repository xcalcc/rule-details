import javax.xml.xpath.*;
import org.xml.sax.SAXException;
import java.io.IOException;
import java.io.FileInputStream;
import javax.xml.parsers.DocumentBuilder;
import org.w3c.dom.Document;
import org.w3c.dom.NodeList;
public class j_ids53_0 {
  private final String accountFile = "account.xml";
  private DocumentBuilder docBuilder;
  private XPath xpath;

  // the code below trying to query account Info with given id
  public String queryAccountInfo(String id) throws XPathExpressionException, SAXException, IOException {
    Document accountDoc = docBuilder.parse(accountFile);
    Map queryVars = new HashMap();

    // validate input "id" using StringEscapeUtils
    String filteredId = StringEscaptUtils.escapeXml(id);
    String compileStr = "/Accounts/account[@id='" + filteredId + "']";
    String res = xpath.evaluate(compileStr, accountDoc); 
    return res;
  }
}

