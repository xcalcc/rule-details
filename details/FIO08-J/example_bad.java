// read result is cast to byte, loop will halt prematurely if 0xFF is reached
public class j_fio08_0 {
  // ... 
  static void readData(String fileName) throws FileNotFoundException, IOException {
    FileInputStream t = new FileInputStream(fileName);
    try {
      byte data;
      StringBuffer value = new StringBuffer();
      while((data = (byte) t.read()) != -1) {
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
      char data;
      StringBuffer sb = new StringBuffer();
      while ((data = (char) fr.read()) != -1) {
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