# TP 2 - Modulations PAM - Fiche de synthèse
###### Arthur Pons - DUT RT A FA 1 - Mardi 13 Avril 2021

## 1 - Modulations PAM

### Qu'est-ce qu'une modulation numérique ?

Dans le domaine des télécommunications, l'information à transmettre est rarement adaptée au moyen de transport choisi (filaire, hertzien ou optique le plus souvent). 

Afin de palier à ce problème, il convient de moduler une onde via ses différents paramètres (fréquence, déphasage, amplitude, ...) afin de représenter cette information. Cette onde sinusoïdale est alors appelée porteuse.

Le récepteur quant à lui emploiera la démodulation du signal afin d'en extraire les informations.

### Forme d'onde et utilisations des modulation PAM

Comme dit précedement, les modulations PAM utilisent des signaux utilisant des ondes sinusoïdales comme porteuses.

PAM signifiant Pulse Amplification Modulation, on module alors par l'amplitude de la porteuse.

Dans la suite de ce TP, on utilisera le PAM à double polarité, les valeurs modulées pourront donc être positives & négatives. Si on avait travaillé avec le PAM à polarité unique, on aurait eu une polarisation du signal afin de s'assurer que toutes les valeurs retournées par la modulation soient positives.

Différentes utilisations des modulations PAM :
- Ethernet

	Différentes normes Ethernet utilisent des modulations PAM, de la 100BASE-T4 (100 Mbps, PAM à 3 niveaux) à la IEEE 802.3 (Ethernet 25 Gbps 4 voies, PAM à 5 niveaux) en passant par la 10GBASE-LeT (10 Gpbs, PAM à 16 niveaux).

- Fibre optique

	Les modulations PAM sont utilisées en commication par fibre optique afin de moduler le signal lumineux.

- Télévision

	Le standard 8VSB, qui utilise des modulations PAM, permet un débit utile d'environ 20 Mbps, ce qui est largement plus que le standard précédent : NTSC. Comme son nom l'indique, 8VSB utilise une modulation PAM à 8 niveaux.

- Photobiologie

	Dans l'étude de la photosynthèse, on utilise les modulations PAM afin de transmettre par une antenne les variations de la fluorescence en fonction de la luminosité des membranes thylacoïdiennes des chloroplastes.

### Expression temporelle d'une modulation PAM

![](https://i.ibb.co/3W0KN11/Capture-d-cran-2021-04-13-10-54-02.png)

Ici, Ak représente l'amplitude.

### DSP d'un signal issu d'une modulation PAM

![](https://i.ibb.co/Z83TBMJ/Capture-d-cran-2021-04-13-10-59-39.png)

### Type de signal (cf. PDF)

1 : Binaire

2 : PAM 2 NRZ Bipolaire

3 : PAM 2 RZ Bipolaire

4 : PAM 2 Manchester

5 : PAM 3 AMI

6 : PAM 4 2BQ1