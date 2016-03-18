obras:	obras.o disenos.o pinturas.o esculturas.o literaturas.o main.o
	g++ obras.o disenos.o pinturas.o esculturas.o literaturas.o main.o -o obra

main.o:	main.cpp obras.h disenos.h pinturas.h esculturas.h literaturas.h
	g++ -c main.cpp

literaturas.o:	literaturas.cpp obras.h literaturas.h
	g++ -c literaturas.cpp

esculturas.o:	esculturas.cpp obras.h pinturas.h esculturas.h
	g++ -c esculturas.cpp

pinturas.o:	pinturas.cpp obras.h pinturas.h
	g++ -c pinturas.cpp

disenos.o:	disenos.cpp obras.h disenos.h
	g++ -c disenos.cpp

obras.o:	obras.cpp obras.h
	g++ -c obras.cpp