import java.util.zip.*;
import java.io.*;


public class IDS04J_good {
    public static void main(String[] args) throws IOException, IllegalStateException {
        String zipPath = args[0];
        String destPath = args[1];
        
        // Fix vulnerability by canonicalizing path
        File checkZip = new File(zipPath);
        File checkDest = new File(destPath);
        String canonicalZip =  checkZip.getCanonicalPath();
        String canonicalDest =  checkDest.getCanonicalPath();

        // Check result of canonicalization
        if (!canonicalZip.startsWith(canonicalDest)) {
            throw new IllegalStateException("Accesing Out of Bounds Area, set a correct path");
        }
    
        byte[] buffer = new byte[1024];
        ZipInputStream zis = new ZipInputStream(new FileInputStream(zipPath));
        ZipEntry zipEntry = zis.getNextEntry();
        File destDirectory = new File(destPath);

        long sizeLimit = 0x6400000; 
        int fileLimit = 2000; 
        long currentSize =  0; 
        int entry = 0; 

        try {
            // Limit size to avoid DoS attack through resource exhaustion      
            while (zipEntry != null) {
                // Limit number of files
                if (entry > fileLimit){
                    throw new IllegalStateException("Unzipped file exceed the allowed limit");
                } 
                // Limit size of file
                if (currentSize > sizeLimit) {
                    throw new IllegalStateException("Unzipped file exceed the allowed size");
                }

                System.out.println("File being extracted: " + zipEntry);
                FileOutputStream fos = new FileOutputStream(destDirectory + "/" + zipEntry.getName());
                
                int len;
                while ((len = zis.read(buffer)) > 0) {
                    fos.write(buffer, 0, len);
                    currentSize += len;
                }
                fos.close();
                zipEntry = zis.getNextEntry();
                entry++;
            }
        } 
        finally {
        	zis.close(); 	
        }
    }
}


