import java.util.Date;

public class obj05_0 {
 private Data private_d;

 // this class is mutable
 public obj05_0() {
 private_d = new Data();
 }

 // a copy is returned, hence, no leakage using this method
 public Data getDataSafe() {
 return (Data)d.clone();
 }
}
