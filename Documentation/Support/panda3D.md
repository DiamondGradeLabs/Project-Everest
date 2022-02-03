# panda3D
For my build. I used Ubuntu 20.04 LTS. There is a .deb package for 1.10 for 20.04.

1. Download and install panda from that location
   * Note install the dependencies first.

2. You may need to change the include file location, and lib file location in the make file.
   1. This can be done by running dpkg -L panda3d to find the include files and lib files 

3. run make pandaTest

4. run ./Binaires/Test/pandaTest