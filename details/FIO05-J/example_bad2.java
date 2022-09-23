import java.nio.CharBuffer;

public class j_fio05_0 {
 private char[] dataArray;
 private CharBuffer cb;

 public j_fio05_0() {
 dataArray = new char[10];
 }

 public CharBuffer getBufferCopy() {
 return CharBuffer.wrap(dataArray); // dataArray (private) is exposed through this wrap
 }

 private void storeBuffer() {
 cb = CharBuffer.wrap(dataArray); // dataArray (private) is exposed, see comment in return statement below
 }

 public CharBuffer getBufferCopy2() {
 storeBuffer();
 return cb; // dataArray is exposed through cb which is assigned in storeBuffer()
 }
}