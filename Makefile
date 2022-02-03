#Production
#This will generate a clean no output verion of the code. 
Production: 
	g++ ./Source/EverestEngine.cpp -o ./Binaries/Production/EverestEngine

#Development
#This will generate a program that has debugging enabled by default and will 
#generate a logs folder with component logging. This logging can be manipulated by
#modifying the debug header file.
Development: 
	g++ ./Source/EverestEngine.cpp `wx-config --cxxflags --libs` -o ./Binaries/Development/EverestEngine

#wxTest
#This will compile the wxWidget Test File.
wxTest:	
	g++ ./Source/Tests/wxTest.cpp `wx-config --cxxflags --libs` -o ./Binaries/Test/wxTest

#wxTest
#This will compile the wxWidget Test File.
wxHelloWorld:	
	g++ ./Source/Tests/wxHelloWorld.cpp `wx-config --cxxflags --libs` -o ./Binaries/Test/wxHelloWorld

#Setup
#Run make Setup to generate the missing pieces of the repo.
Setup:
	mkdir ./Binaries/Production
	mkdir ./Binaries/Development
	mkdir ./Binaries/Test

#CleanAll
#Run CleanAll to remove all binaries and log files
CleanAll:
	rm -rf ./Binaries/Production/EverestEngine
	rm -rf ./Binaries/Development/EverestEngine
	rm -rf ./Binaries/Test/wxTest

#CleanProd
#Run CleanProd to remove all Production binaries
CleanProd:
	rm -rf ./Binaries/Production/
	
#CleanDev
#Run CleanDev to remove Development binaries and log files
CleanDev:
	rm -rf ./Binaries/Development/EverestEngine