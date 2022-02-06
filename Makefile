#Production
#This will generate a clean no output verion of the code. 
Production: 
	g++ ./Source/EverestEngine.cpp -o ./Binaries/Production/EverestEngine

#Development
#This will generate a program that has debugging enabled by default and will 
#generate a logs folder with component logging. This logging can be manipulated by
#modifying the debug header file.
Development:
	make CleanDev
	g++ -c ./Source/UI/ToolsWindow.cpp `wx-config --cxxflags --libs` -o ./Binaries/Development/ToolsWindow.o -O2 -std=gnu++11 -ggdb
	g++ -c ./Source/EverestEngine.cpp `wx-config --cxxflags --libs` -o ./Binaries/Development/EverestEngine.o -O2 -std=gnu++11 -I/usr/include/panda3d -I/usr/include/eigen3 -ggdb
#g++ -c ./Source/UI/ToolsWindow.cpp `wx-config --cxxflags --libs` -o ./Binaries/Development/ToolsWindow.o -O2 -std=gnu++11 -ggdb
	g++ ./Source/UI/GameWindow.cpp -c -o ./Binaries/Development/GameWindow.o -O2 -std=gnu++11 -I/usr/include/panda3d -I/usr/include/eigen3 -ggdb
	g++ ./Binaries/Development/EverestEngine.o ./Binaries/Development/GameWindow.o ./Binaries/Development/ToolsWindow.o -o ./Binaries/Development/EverestEngine -L/usr/lib/x86_64-linux-gnu/panda3d `wx-config --cxxflags --libs` -ggdb -lp3framework -lpanda -lpandafx -lpandaexpress -lp3dtoolconfig -lp3dtool -lp3direct	

#wxTest
#This will compile the wxWidget Test File.
wxTest:	
	g++ ./Source/Tests/wxTest.cpp `wx-config --cxxflags --libs` -o ./Binaries/Test/wxTest

#wxTest
#This will compile the wxWidget Test File.
wxHelloWorld:	
	g++ ./Source/Tests/wxHelloWorld.cpp `wx-config --cxxflags --libs` -o ./Binaries/Test/wxHelloWorld

#pandaTest
pandaTest:
	g++ ./Source/Tests/pandaTest.cpp -c -o ./Binaries/Test/pandaTest.o -O2 -std=gnu++11 -I/usr/include/panda3d -I/usr/include/eigen3
	g++ ./Binaries/Test/pandaTest.o -o ./Binaries/Test/pandaTest -L/usr/lib/x86_64-linux-gnu/panda3d -lp3framework -lpanda -lpandafx -lpandaexpress -lp3dtoolconfig -lp3dtool -lp3direct

#Setup
#Run make Setup to generate the missing pieces of the repo.
Setup:
	mkdir ./Binaries/Production
	mkdir ./Binaries/Development
	mkdir ./Binaries/Test

#CleanAll
#Run CleanAll to remove all binaries and log files
CleanAll:
	make CleanProd
	make CleanDev
	make CleanTest

#CleanProd
#Run CleanProd to remove all Production binaries
CleanProd:
	rm -rf ./Binaries/Production/EverestEngine
	
#CleanDev
#Run CleanDev to remove Development binaries and log files
CleanDev:
	rm -rf ./Binaries/Development/EverestEngine
	rm -rf ./Binaries/Development/*.o

#CleanTest
#Run CleanTest to remove test binaires and object files
CleanTest:
	rm -rf ./Binaries/Test/pandaTest
	rm -rf ./Binaries/Test/pandaTest.o
	rm -rf ./Binaries/Test/wxHelloWorld
	rm -rf ./Binaries/Test/wxTest