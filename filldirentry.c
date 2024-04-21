#include <comp421/hardware.h>
#include <comp421/iolib.h>
#include <comp421/yalnix.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define BLOCKSIZE 512

int main() {
        int link;
	int i;
	char name[9];

        char *org_name = "file";
        Create("file");

        i = 0;
	while (1) {
		sprintf(name, "link%04d", i++);
		link = Link(org_name, name);
                TracePrintf(0, "%s\n", name);
                if (link < 0) break;
	}

        // for (i = 0; i < 32; i++) {
        //         sprintf(name, "file%04d", i);
        //         fd = Open(name);
        //         Close(fd);
        // }

        Shutdown();

        return (0);
}