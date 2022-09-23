import java.nio.CharBuffer;

public class j_fio05_0 {
 private char[] dataArray;
 private CharBuffer cb;

 public j_fio05_0() {
 dataArray = new char[10];
 }

 public CharBuffer getBufferCopy() {
 return CharBuffer.wrap(dataArray).asReadOnlyBuffer();; // attempt to modify will result in exception
 }

 private void storeBuffer() {
 cb = CharBuffer.wrap(dataArray).asReadOnlyBuffer();; // attempt to modify will result in exception
 }

 public CharBuffer getBufferCopy2() {
 storeBuffer();
 return cb; 
 }
}