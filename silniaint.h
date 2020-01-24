#ifndef SILNIAINT_H_INCLUDED
#define SILNIAINT_H_INCLUDED

int silniaint(int liczba) {
	int wynik = 1;

	while (liczba > 0) {
    wynik = wynik * liczba;
    liczba--;
  	}

  	return wynik;
}

#endif // SILNIAINT_H_INCLUDED
