import java.util.zip.*;
import java.io.*;


public class IDS04J_bad {
    public static void main(String[] args) throws IOException {
        // Path may be manipulated to access areas outside of intended directory
        String zipPath = args[0];
        String destPath = args[1];

        byte[] buffer = new byte[1024];
        ZipInputStream zis = new ZipInputStream(new FileInputStream(zipPath));
        ZipEntry zipEntry = zis.getNextEntry();
        File destDirectory = new File(destPath);

        try {          
            // Exhaustion of resource without limit to the size of zip files in while loop
            while (zipEntry != null) {
                System.out.println("File being extracted: " + zipEntry);
                FileOutputStream fos = new FileOutputStream(destDirectory + "/" + zipEntry.getName());

                int len;
                while ((len = zis.read(buffer)) > 0) {
                    fos.write(buffer, 0, len);
                }

                fos.close();
                zipEntry = zis.getNextEntry();
            }
        } 
        finally {
        	zis.close(); 	
        }
    }
}


