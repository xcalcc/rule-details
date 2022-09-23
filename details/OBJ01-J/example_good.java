import java.util.List;

public class j_obj01_0 {

  private static final String[] items = {"abc", "def", "ghj"/* ... */};

  public static final List<String> itemsList =
    Collections.unmodifiableList(Arrays.asList(items));

  public static final String[] getItems() {
    return items.clone();
  }
  public static final String getItem(int index) {
    return items[index];
  }

  public static final int getItemCount() {
    return items.length;
  }

  private static final HashMap<Integer, String> hm = new HashMap<Integer, String>();

  public static String getElement(int key) {
    return hm.get(key);
  }

  private int total; // Declared private

  public int getTotal () {
    return total;
  }

}