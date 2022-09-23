package io.xc5.cert;

import javax.xml.xpath.*;
import org.xml.sax.SAXException;
import java.io.IOException;
import java.io.FileInputStream;
import javax.xml.parsers.DocumentBuilder;
import org.w3c.dom.Document;
import org.w3c.dom.NodeList;

public class example_bad {
  private final String accountFile = "account.xml";
  private DocumentBuilder docBuilder;
  private XPath xpath;

  // the code below trying to query account Info with given id
  public String queryAccountInfo(String id) throws XPathExpressionException, SAXException, IOException {
    Document accountDoc = docBuilder.parse(accountFile);

    // attacker can inject by provide id with '1'='1 causing evaluate to return "true"
    String compileStr = "/Accounts/account[@id='" + id + "']"; 
    String res = xpath.evaluate(compileStr, accountDoc); // IDS53-J
    return res;
  }
}
