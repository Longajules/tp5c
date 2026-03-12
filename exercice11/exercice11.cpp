int	divise(int a ,int b)
{
	int resultat = 0;

	if (b == 0){
		resultat = -1;
		return resultat;
	}
	else {
		resultat = a / b;
		return resultat;
	}
}