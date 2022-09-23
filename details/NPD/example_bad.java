class User {
 public String getName() {
 return null;
 }
}

class Bar {
 private User findUser(String uid) {
 if (user.containsKey(uid)) {
 return user.get(uid);
 }
 else
 return null;
 }
 public void Npd(String uid) {
 // program continues
 // ...
 User user = findUser(uid); // Throws NPE if \"user\" has not been properly initialized
 String getName() {
 return null;
 }
 }
}