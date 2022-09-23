 
struct completion {
  int done;
};
 
struct usb_request {
  struct completion *context;
  void (*complete)(struct usb_request *req);
};
 
void complete(struct completion *x)
{
  printf("%d\n", x->done);
}
 
void ffs_epfile_io_complete(struct usb_request *req)
{
  complete(req->context);
}
 
void usb_ep_queue(struct usb_request *req)
{
  req->complete(req);
}
 
void ffs_epfile_io(struct usb_request *req)
{
  struct completion done;
  req->context = &done;
  req->complete = ffs_epfile_io_complete;
  usb_ep_queue(req);
}
 
