#include <comp421/yalnix.h>
#include <comp421/iolib.h>
#include <comp421/hardware.h>

int
main()
{
	int fd;

	fd = Create("a");
	Write(fd, "aaaaaaaaaaaaaaaa", 16);
	Close(fd);

	fd = Create("b");
	Write(fd, "bbbbbbbbbbbbbbbb", 16);
	Close(fd);

	fd = Create("c");
	Write(fd, "cccccccccccccccc", 16);
	Close(fd);

	MkDir("dir");

	fd = Create("/dir/x");
	Write(fd, "xxxxxxxxxxxxxxxx", 16);
	Close(fd);

	fd = Create("/dir/y");
	Write(fd, "yyyyyyyyyyyyyyyy", 16);
	Close(fd);

	fd = Create("/dir/z");
	char read_buf[80];

	Read(Open("/dir"), read_buf, 80);
	TracePrintf(0, "read_buf: %s\n", read_buf);
	Write(fd, "zzzzzzzzzzzzzzzz", 16);
	Close(fd);

	Shutdown();

    return (0);
}
