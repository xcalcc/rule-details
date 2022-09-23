// this example is modified from CERT-J example
import java.nio.CharBuffer;

public class j_fio05_0 {
 private char[] dataArray;
 private CharBuffer cb;

 public j_fio05_0() {
 dataArray = new char[10];
 }

 public CharBuffer getBufferCopy() {
 return CharBuffer.wrap(dataArray).asReadOnlyBuffer(); // attemp to modify will result in exception
 }
}