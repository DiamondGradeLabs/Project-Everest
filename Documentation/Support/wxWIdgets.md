# wxWidgets

For my build. I used Ubuntu 20.04 LTS. This makes adding and testing wxWidgets really easy.

1. First: I used CodeLites Ubuntu 20.04 Install Instructions
https://wiki.codelite.org/pmwiki.php/Main/WxWidgets30Binaries#toc2

2. Second: If you haven't already run make Setup to generate the binary directories

3. Third: run make wxTest this will compile wxTest and place the binary in the /Binaries/Test folder. 

4. Fourth: run ./Binaries/Test/wxTest and it should output the wx-config version. If this does not work it means the wx widgets install did not work. 

5. Fifth: run make wxHelloWorld to compile the hello world application. 

6. Sixth: run ./Binaries/Test/wxHelloWorld