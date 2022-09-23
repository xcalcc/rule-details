locationClient = new LocationClient(this, this, this);
locationClient.connect();
currentUser.setLocation(locationClient.getLastLocation());
... 

catch (Exception e) {
    AlertDialog.Builder builder = new AlertDialog.Builder(this);
    builder.setMessage("Application Error.");
    AlertDialog alert = builder.create();
    alert.show();

    // user location is "sanitized" being written to log
    Log.e("Example", "Caught exception: " + e + " User:" + sanitizeUser(User.toString()));
}
