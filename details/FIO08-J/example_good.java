// read result is cast to byte after read and check for end of stream
public class j_fio08_0 {

  // ...

  static void readData(String fileName) throws FileNotFoundException, IOException {
    FileInputStream t = new FileInputStream(fileName);
    try {
      int inputbuf;
      byte data;
      StringBuffer value = new StringBuffer();
      while((inputbuf = t.read()) != -1) {
	data = (byte) inputbuf;
        value.append(data);
      }
      System.out.println(value.toString());
    } finally {
      t.close();
    }
  }

  static void readData2(String fileName) throws IOException {
    FileReader fr = new FileReader(fileName);
    try {
      int inputbuf;
      char data;
      StringBuffer sb = new StringBuffer();
      while (inputbuf = fr.read()) != -1) {
	data = (char)inputbuf;
        sb.append(data);
      }
    } finally {
      fr.close();
    }
  }

  static void readData3(String fileName) throws IOException {
    FileReader fr = new FileReader(fileName);
    try {
      byte data;
      StringBuffer sb = new StringBuffer();
      while (true) {
        int i = fr.read();
        int j = i;
        data = (byte) j;
        if (data == -1) {
          break;
        }
        sb.append(data);
      }
    } finally {
      fr.close();
    }
  }