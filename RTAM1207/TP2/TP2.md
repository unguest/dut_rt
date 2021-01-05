#  TP 2 - Langage C

## Question 1

cf. `main.c`

## Question 2

cf. `main.c`

## Question 3 : Que fait ce programme ?

```C
int i;
    for(i=1; i<=10; i=i+2)
    {
      printf("%d\n",i);
    }
```

Il affiche les nombres impairs de 1 à 9.

## Quesiton 4

## Question 5 : Que fait ce programme piégé ?

```C
	int i;
	for(i=1; i!=9; i+=3);
	{
      if(i%2==0)
	i++;
 	printf("%d\n",i);
	}
```