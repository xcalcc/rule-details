import javax.naming.NamingEnumeration;
import javax.naming.NamingException;
import javax.naming.directory.InitialDirContext;
import javax.naming.directory.SearchControls;
import javax.naming.directory.SearchResult;

public class example_good
{
  public NamingEnumeration<SearchResult> queryUserInfo(InitialDirContext ctx, String id) throws NamingException {
    SearchControls sc = new SearchControls();
    sc.setReturningAttributes(new String[]{"balance", "phone"});
    sc.setSearchScope(SearchControls.SUBTREE_SCOPE);

    String searchBase = "dc=Users,dc=com";

    // check against special characters 
    if (!id.matches("[\\w\\s]*") || !id.matches("[\\w]*")) {
      throw new IllegalArgumentException("Invalid input");
    }
    
    String filter = "(id=" + id + ")"; // attacker can inject by provide id with "*"
    return ctx.search(searchBase, filter, sc); // IDS54-J, query user info with id 
  }
}
