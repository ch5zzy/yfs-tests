#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <comp421/hardware.h>
#include <comp421/yalnix.h>
#include <string.h>

#include <comp421/iolib.h>

int
main()
{
    char *lorem_buf = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Praesent tristique magna sit amet purus gravida. Praesent tristique magna sit amet purus gravida quis. Curabitur gravida arcu ac tortor dignissim convallis aenean et. Ridiculus mus mauris vitae ultricies leo integer malesuada. Cursus risus at ultrices mi tempus imperdiet nulla. Libero id faucibus nisl tincidunt eget nullam. Enim blandit volutpat maecenas volutpat. Eu feugiat pretium nibh ipsum. Senectus et netus et malesuada fames ac. Massa tincidunt nunc pulvinar sapien et ligula ullamcorper malesuada proin. Non quam lacus suspendisse faucibus interdum."
                        "Suspendisse ultrices gravida dictum fusce ut placerat orci nulla pellentesque. Interdum posuere lorem ipsum dolor sit amet consectetur adipiscing. Tincidunt ornare massa eget egestas. Ultrices tincidunt arcu non sodales neque sodales. Nec ultrices dui sapien eget mi proin sed libero. Libero nunc consequat interdum varius sit amet. Rhoncus mattis rhoncus urna neque viverra justo. Erat nam at lectus urna duis convallis convallis. Tellus elementum sagittis vitae et leo duis ut. Posuere lorem ipsum dolor sit amet consectetur adipiscing. Nec nam aliquam sem et. Id neque aliquam vestibulum morbi blandit cursus. Rhoncus urna neque viverra justo. Consequat ac felis donec et odio pellentesque diam. Semper feugiat nibh sed pulvinar. Amet est placerat in egestas erat imperdiet sed euismod."
                        "Volutpat ac tincidunt vitae semper quis lectus nulla. Augue mauris augue neque gravida. Habitasse platea dictumst vestibulum rhoncus est. At tellus at urna condimentum mattis pellentesque id. Massa sapien faucibus et molestie ac feugiat. Sit amet justo donec enim diam vulputate ut pharetra sit. Odio tempor orci dapibus ultrices. Metus dictum at tempor commodo ullamcorper a. Elit ullamcorper dignissim cras tincidunt lobortis. Viverra vitae congue eu consequat ac felis donec et odio. Odio pellentesque diam volutpat commodo. Eleifend donec pretium vulputate sapien nec sagittis aliquam malesuada bibendum. Curabitur vitae nunc sed velit. Eros donec ac odio tempor orci dapibus. Ultricies integer quis auctor elit sed vulputate mi sit."
                        "In ornare quam viverra orci. Ultrices vitae auctor eu augue. Vitae congue mauris rhoncus aenean. Molestie ac feugiat sed lectus vestibulum. Placerat in egestas erat imperdiet. Congue mauris rhoncus aenean vel elit scelerisque mauris pellentesque pulvinar. Sapien eget mi proin sed. Nisi porta lorem mollis aliquam. Blandit turpis cursus in hac habitasse. Maecenas volutpat blandit aliquam etiam. Sem et tortor consequat id porta nibh venenatis cras sed. Fringilla ut morbi tincidunt augue interdum velit."
                        "Cras adipiscing enim eu turpis egestas pretium aenean pharetra magna. Elementum eu facilisis sed odio morbi. Feugiat vivamus at augue eget arcu dictum varius duis at. Augue eget arcu dictum varius duis at consectetur. Amet consectetur adipiscing elit ut aliquam purus. Semper feugiat nibh sed pulvinar proin gravida hendrerit. Lorem mollis aliquam ut porttitor leo. Nam at lectus urna duis. Vitae et leo duis ut diam quam. Eget nunc scelerisque viverra mauris in. Tempus urna et pharetra pharetra massa massa ultricies mi quis. Lacus vestibulum sed arcu non odio euismod lacinia at quis. Arcu bibendum at varius vel pharetra vel. Libero justo laoreet sit amet. At erat pellentesque adipiscing commodo elit at. Velit laoreet id donec ultrices tincidunt arcu non sodales. Sagittis orci a scelerisque purus."
                        "Gravida neque convallis a cras semper auctor neque vitae. Ut tortor pretium viverra suspendisse potenti nullam ac tortor. Habitant morbi tristique senectus et netus et malesuada fames. Accumsan sit amet nulla facilisi morbi tempus iaculis urna id. Quam elementum pulvinar etiam non quam lacus suspendisse faucibus interdum. Egestas sed sed risus pretium quam vulputate. Tristique senectus et netus et. Id semper risus in hendrerit gravida rutrum quisque. In hac habitasse platea dictumst vestibulum rhoncus est. Et ultrices neque ornare aenean euismod elementum nisi. Ultrices in iaculis nunc sed. Lorem ipsum dolor sit amet consectetur adipiscing."
                        "Nisi vitae suscipit tellus mauris a diam maecenas. Lectus sit amet est placerat. Scelerisque eleifend donec pretium vulputate sapien nec sagittis. Donec pretium vulputate sapien nec sagittis. Eget magna fermentum iaculis eu. Nulla pellentesque dignissim enim sit amet venenatis. Velit aliquet sagittis id consectetur. Vitae tortor condimentum lacinia quis vel. Sed felis eget velit aliquet sagittis id. Quis eleifend quam adipiscing vitae proin sagittis nisl. Feugiat in ante metus dictum at. Nibh mauris cursus mattis molestie a iaculis at erat. Ac placerat vestibulum lectus mauris ultrices eros. Tincidunt arcu non sodales neque sodales. Suscipit tellus mauris a diam. Varius morbi enim nunc faucibus a. Aliquet porttitor lacus luctus accumsan tortor posuere ac. Tempor orci dapibus ultrices in iaculis nunc. Augue interdum velit euismod in. Enim sit amet venenatis urna cursus."
                        "Egestas quis ipsum suspendisse ultrices gravida. Ac feugiat sed lectus vestibulum mattis ullamcorper velit sed. Amet luctus venenatis lectus magna fringilla. Mattis vulputate enim nulla aliquet porttitor lacus luctus accumsan. Sed viverra ipsum nunc aliquet bibendum. Tellus mauris a diam maecenas sed. Diam sit amet nisl suscipit adipiscing bibendum est ultricies. Fringilla urna porttitor rhoncus dolor purus. Et odio pellentesque diam volutpat commodo. Ultrices sagittis orci a scelerisque purus semper eget. Sed augue lacus viverra vitae congue eu. Enim neque volutpat ac tincidunt vitae semper quis. Blandit libero volutpat sed cras ornare. Egestas pretium aenean pharetra magna ac placerat vestibulum. Ipsum dolor sit amet consectetur adipiscing elit. Mi quis hendrerit dolor magna eget est lorem. Ridiculus mus mauris vitae ultricies leo. Vitae purus faucibus ornare suspendisse sed."
                        "Faucibus in ornare quam viverra. Nibh ipsum consequat nisl vel pretium lectus quam id leo. Luctus accumsan tortor posuere ac ut consequat. Lobortis mattis aliquam faucibus purus in massa tempor. Sed augue lacus viverra vitae congue eu consequat. Purus viverra accumsan in nisl nisi scelerisque. Augue mauris augue neque gravida in fermentum. Praesent elementum facilisis leo vel fringilla est ullamcorper eget nulla. Proin sagittis nisl rhoncus mattis rhoncus urna neque. Ante metus dictum at tempor. Donec pretium vulputate sapien nec sagittis. Ut diam quam nulla porttitor. Lacus vestibulum sed arcu non odio. Consequat ac felis donec et odio pellentesque diam volutpat. Nibh praesent tristique magna sit amet purus gravida quis blandit. Sagittis aliquam malesuada bibendum arcu vitae elementum."
                        "At auctor urna nunc id cursus metus aliquam eleifend mi. Massa ultricies mi quis hendrerit dolor magna eget. Semper feugiat nibh sed pulvinar proin gravida. Adipiscing commodo elit at imperdiet. Adipiscing tristique risus nec feugiat in. Ipsum dolor sit amet consectetur adipiscing elit. Vitae auctor eu augue ut lectus arcu. Libero id faucibus nisl tincidunt eget nullam non. Consequat mauris nunc congue nisi vitae suscipit tellus mauris a. Adipiscing bibendum est ultricies integer quis auctor elit. Amet mattis vulputate enim nulla aliquet porttitor lacus luctus."
                        "Cum sociis natoque penatibus et. Imperdiet dui accumsan sit amet nulla facilisi morbi tempus. Scelerisque felis imperdiet proin fermentum leo vel. Augue eget arcu dictum varius duis at consectetur. Faucibus pulvinar elementum integer enim neque volutpat. Pharetra sit amet aliquam id diam maecenas. Mi bibendum neque egestas congue. Sed viverra ipsum nunc aliquet bibendum enim facilisis gravida. Sed augue lacus viverra vitae congue eu consequat. Tincidunt tortor aliquam nulla facilisi. Enim praesent elementum facilisis leo vel fringilla est ullamcorper. Amet luctus venenatis lectus magna fringilla urna. Eu turpis egestas pretium aenean pharetra magna ac. Ornare quam viverra orci sagittis eu volutpat odio. Tristique risus nec feugiat in. Vulputate sapien nec sagittis aliquam malesuada bibendum arcu. Lorem donec massa sapien faucibus et molestie. Amet volutpat consequat mauris nunc congue nisi vitae. Ac tortor dignissim convallis aenean et tortor at. Sem et tortor consequat id porta nibh venenatis cras."
                        "Non arcu risus quis varius quam quisque id. Diam quis enim lobortis scelerisque fermentum dui. Pellentesque dignissim enim sit amet venenatis urna cursus eget nunc. Ultrices eros in cursus turpis massa tincidunt dui ut ornare. Consectetur adipiscing elit duis tristique sollicitudin nibh sit. Eu scelerisque felis imperdiet proin fermentum leo. Fringilla est ullamcorper eget nulla facilisi. Ultrices mi tempus imperdiet nulla malesuada pellentesque elit eget gravida. Eget est lorem ipsum dolor sit amet consectetur adipiscing elit. Fermentum posuere urna nec tincidunt praesent semper feugiat nibh sed. Bibendum arcu vitae elementum curabitur. Ultrices sagittis orci a scelerisque purus semper eget duis.";
    int fd = Create("coolfile");
    int res = Write(fd, lorem_buf, strlen(lorem_buf) + 1);
    TracePrintf(0, "res: %d\n", res);
    int seek_pos = Seek(fd, 0, SEEK_SET);
    char *read_buf = malloc(strlen(lorem_buf)+1);
    (void) seek_pos;
    res = Read(fd, read_buf, strlen(lorem_buf)+1);
    TracePrintf(0, "res: %d\n", res);
    TracePrintf(0, "read_buf: %.*s\n", strlen(lorem_buf) + 1, read_buf);

    Shutdown();
    return 0;

}