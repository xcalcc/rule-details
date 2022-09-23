package io.xc5.cert;
import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.net.JarURLConnection;
import java.net.URL;
import java.net.URLClassLoader;
import java.util.jar.Attributes;
import java.security.GeneralSecurityException;
import java.security.KeyStore;
import java.security.cert.Certificate;
import java.io.FileInputStream;

public class j_sec06_1 extends URLClassLoader {
 private URL url;
 public j_sec06_1(URL url) {
 super(new URL[] { url });
 this.url = url;
 }

 public void invokeClass(String name, String[] args)
 throws ClassNotFoundException, NoSuchMethodException,
 InvocationTargetException , GeneralSecurityException, IOException {
 Class c = loadClass(name);
 Method m = c.getMethod(\"getValue\", new Class[] { args.getClass() });
 m.setAccessible(true);
 try {
 m.invoke(null, new Object[] { args });
 } catch (IllegalAccessException e) {
 System.out.println(\"Access denied\");
 }
 }
}