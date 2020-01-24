#ifndef SILNIALONGLONG_H_INCLUDED
#define SILNIALONGLONG_H_INCLUDED

long long silnialonglong(int liczba) {
	long long wynik = 1;

	while (liczba > 0) {
		wynik = wynik * liczba;
    	liczba--;
  	}

  	return wynik;
}

#endif // SILNIALONGLONG_H_INCLUDED
