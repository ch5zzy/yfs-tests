#include <comp421/hardware.h>
#include <comp421/iolib.h>
#include <malloc.h>
#include <string.h>

int main(int argc, char **argv) {
        (void) argc;
        (void) argv;
        
        int mkdir_res = MkDir("yomama");
        TracePrintf(0, "mkdir: %d\n", mkdir_res);
        int fd = Create("yomama/mamafile");
        TracePrintf(0, "fd: %d\n", fd);
        char *silliest = "yo mama!!!";
        char *read_buf = malloc(strlen(silliest) + 1);
        int write_bytes = Write(fd, silliest, strlen(silliest));
        Seek(fd, 0, SEEK_SET);
        TracePrintf(0, "write_bytes: %d\n", write_bytes);
        int read_bytes = Read(fd, read_buf, write_bytes);
        TracePrintf(0, "buffer read %d bytes: %.*s\n", read_bytes, read_bytes, read_buf);
        
        TracePrintf(0, "fd, link res: %d, %d\n", fd, Link("yomama/mamafile", "daddyfile"));
        int fd2 = Open("daddyfile");
        TracePrintf(0, "fd: %d\n", fd2);
         char *read_buf2 = malloc(strlen(silliest) + 1);
         read_bytes = Read(fd2, read_buf2, write_bytes);
        TracePrintf(0, "buffer read %d bytes: %.*s\n", read_bytes, read_bytes, read_buf2);
        TracePrintf(0, "fd, unlink res: %d, %d\n", fd, Unlink("daddyfile"));
        TracePrintf(0, "open res: %d, %d\n", fd, Open("daddyfile"));
        TracePrintf(0, "open res: %d, %d\n", fd, Open("yomama/mamafile"));
        TracePrintf(0, "fd, unlink res: %d, %d\n", fd, Unlink("yomama/mamafile"));
        TracePrintf(0, "open res: %d, %d\n", fd, Open("yomama/mamafile"));
        return 0;
}