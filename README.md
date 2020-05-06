# Jeu de la vie

Jeu réalisé pour une démonstration du language **C** lors de mon DUT Info à Limoges.  
En cours de refactoring

# Utilisation

Lorsqu'il est lancé, la console vous demande un nombre de case au lancement. 
Ce nombre correspond au nombre maximum de cellules vivantes (*disposées aléatoirement*) présentes au début du jeu. 
Il doit être **strictement positif** et **inferieur** au nombre total de cellules.

Ensuite, la console demande le nombre d'iterations souhaitées. Le nombre doit être **strictement positif**.

Une fois ces deux valeurs choisies, un espace de **25\*25** (la valeur 25 est contenue dans la constante `MAX`) 
est généré et la simulation s'actualise autant de fois que d'iterations demandées.

L'évolution de la "colinie de cellules" s'effectue même à travers les bordures. 
En effet, le bord droit est connecté au bord gauche et inversement. 
De plus, le haut est connecté au bas.

Une cellule vivante est représentée par le symbole **\#** et une cellule morte est représentée par un espace (autrement dit on ne la voit pas).

------

> Créé par [**Jean Laurent**](https://github.com/jeanlrnt) en première année de DUT Informatique à Limoges *pendant l'année universitaire 2019-2020*.
