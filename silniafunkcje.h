int silnia;

int silniaint(int liczba) {
	int wynik = 1;

	while (liczba > 0) {
    wynik = wynik * liczba;
    liczba--;
  	}
	
  	return wynik;
}

long silnialong(int liczba) {
	long wynik = 1;

	while (liczba > 0) {
    	wynik = wynik * liczba;
    	liczba--;
  	}
	
  	return wynik;
}

long long silnialonglong(int liczba) {
	long long wynik = 1;

	while (liczba > 0) {
		wynik = wynik * liczba;
    	liczba--;
  	}
	
  	return wynik;
}
