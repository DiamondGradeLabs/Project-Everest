#Production
#This will generate a clean no output verion of the code. 
Production: 
	g++ ./Source/EverestEngine.cpp -o ./Binaries/Production/EverestEngine

#Development
#This will generate a program that has debugging enabled by default and will 
#generate a logs folder with component logging. This logging can be manipulated by
#modifying the debug header file.
Development: 
	g++ ./Source/EverestEngine.cpp -o ./Binaries/Development/EverestEngine

#Setup
#Run make Setup to generate the missing pieces of the repo.
Setup:
	mkdir ./Binaries/Production
	mkdir ./Binaries/Development

#CleanAll
#Run CleanAll to remove all binaries and log files
CleanAll:
	rm -rf ./Binaries/Production/EverestEngine
	rm -rf ./Binaries/Development/EverestEngine

#CleanProd
#Run CleanProd to remove all Production binaries
CleanProd:
	rm -rf ./Binaries/Production/
	
#CleanDev
#Run CleanDev to remove Development binaries and log files
CleanDev:
	rm -rf ./Binaries/Development/EverestEngine