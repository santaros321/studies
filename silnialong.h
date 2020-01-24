#ifndef SILNIALONG_H_INCLUDED
#define SILNIALONG_H_INCLUDED

long silnialong(int liczba) {
	long wynik = 1;

	while (liczba > 0) {
    	wynik = wynik * liczba;
    	liczba--;
  	}

  	return wynik;
}

#endif // SILNIALONG_H_INCLUDED
