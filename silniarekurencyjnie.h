#ifndef SILNIAREKURENCYJNIE_H_INCLUDED
#define SILNIAREKURENCYJNIE_H_INCLUDED

int silniarekurencyjnie(int liczba) {
  	int wynik;
  	wynik = wynik * liczba;

	if (liczba > 2) {
  		silniarekurencyjnie(liczba--);
	}
  	return wynik;
}

#endif // SILNIAREKURENCYJNIE_H_INCLUDED
