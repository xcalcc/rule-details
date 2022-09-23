import java.util.Date;

public class obj05_0 {
    private Data private_d;

    // this class is mutable
    public obj05_0() {
        // private_d is declared private, and is being returned 
        // thus exposes the internal mutable component to untrustable caller
        private_d = new Data();
}

public Data getData() {
    return private_d;
}

}
