Metropolis.png : Metropolis.py Metropolis.dat
	python Metropolis.py
	
Metropolis.dat : Metropolis.x
	./Metropolis.x > Metropolis.dat
	
Metropolis.x : Metropolis.cpp
	c++ Metropolis.cpp -o Metropolis.x

clean : 
	rm Metropolis.x Metropolis.dat Metropolis.png