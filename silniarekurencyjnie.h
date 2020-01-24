int silniarekurencyjnie(int liczba) {
  	int wynik;
  	wynik = wynik * liczba;
  	
	if (liczba > 2) {
  		silniarekurencyjnie(liczba--);
	}
  	return wynik;
}
