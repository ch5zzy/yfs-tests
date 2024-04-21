#include <comp421/hardware.h>
#include <comp421/iolib.h>
#include <malloc.h>
#include <string.h>

int main(int argc, char **argv) {
        (void) argc;
        (void) argv;
        
        int mkdir_res = MkDir("adir");
        TracePrintf(0, "mkdir: %d\n", mkdir_res);
        int fd = Create("adir/testfile");
        TracePrintf(0, "fd: %d\n", fd);
        char *silliest = "some silly file contents";
        char *read_buf = malloc(strlen(silliest) + 1);
        int write_bytes = Write(fd, silliest, strlen(silliest));
        Seek(fd, 0, SEEK_SET);
        TracePrintf(0, "write_bytes: %d\n", write_bytes);
        int read_bytes = Read(fd, read_buf, write_bytes);
        TracePrintf(0, "buffer read %d bytes: %.*s\n", read_bytes, read_bytes, read_buf);

        int chdir_res = ChDir("adir");
        TracePrintf(0, "Chdir result %d\n", chdir_res);
        fd = Open("testfile");
        TracePrintf(0, "fd: %d\n", fd);
        silliest = "some other silly file contents";
        read_buf = malloc(strlen(silliest) + 1);
        write_bytes = Write(fd, silliest, strlen(silliest));
        Seek(fd, 0, SEEK_SET);
        TracePrintf(0, "write_bytes: %d\n", write_bytes);
        read_bytes = Read(fd, read_buf, write_bytes);
        TracePrintf(0, "buffer read %d bytes: %.*s\n", read_bytes, read_bytes, read_buf);

        return 0;
}