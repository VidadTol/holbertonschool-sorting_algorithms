

![logo](https://i.imgur.com/wtYCljm.jpeg)

# Sorting algorithms & Big O✏️

## What are Sorting Algorithms?

Les algorithmes de tri sont des méthodes utilisées pour réorganiser les éléments d'un tableau ou d'une liste selon un ordre spécifique, généralement croissant ou décroissant. Il existe de nombreux algorithmes de tri, chacun avec ses propres avantages et inconvénients en termes de complexité temporelle, de complexité spatiale, et de stabilité. Parmi les algorithmes de tri les plus courants, on peut citer :

- Tri à bulles (Bubble Sort) : Simple mais inefficace pour les grands ensembles de données, avec une complexité temporelle moyenne et pire de O(n²).

- Tri par sélection (Selection Sort) : Inefficace pour les grands ensembles de données, avec une complexité temporelle moyenne et pire de O(n²).

- Tri par insertion (Insertion Sort) : Plus efficace que le tri à bulles et le tri par sélection pour des ensembles de données déjà partiellement triés, avec une complexité temporelle moyenne et pire de O(n²), mais une complexité de meilleur cas de O(n).

- Tri rapide (Quick Sort) : Très efficace pour les grands ensembles de données, avec une complexité temporelle moyenne de O(n log n) et pire de O(n²) dans le cas d'un pivot mal choisi.

- Tri fusion (Merge Sort) : Stable et efficace pour les grands ensembles de données, avec une complexité temporelle moyenne et pire de O(n log n).

## What are Big O Notation

La notation Big O est une manière de décrire la complexité temporelle et spatiale d'un algorithme. Elle exprime comment le temps d'exécution ou l'utilisation de la mémoire d'un algorithme augmente en fonction de la taille de l'entrée (n). Voici quelques termes courants utilisés pour décrire la complexité des algorithmes de tri :

- O(1) : Temps constant - L'exécution de l'algorithme ne dépend pas de la taille de l'entrée.

- O(n) : Temps linéaire - Le temps d'exécution augmente proportionnellement à la taille de l'entrée.

- O(n²) : Temps quadratique - Le temps d'exécution augmente proportionnellement au carré de la taille de l'entrée.

- O(log n) : Temps logarithmique - Le temps d'exécution augmente logarithmiquement par rapport à la taille de l'entrée.

- O(n log n) : Temps linéaro-logarithmique - Le temps d'exécution augmente proportionnellement à n log n.

### Comparaison des Algorithmes de Tri

![logo](https://i.imgur.com/XmloheU.png)

## What we learned in this project:

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm
    
## Requirements

### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. any use of functions like printf, puts, ... is totally forbidden.
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called sort.h
- Don't forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.
    

## Project carried out by

![](https://flat-badgen.vercel.app/badge/icon/github?icon=github&label)


- David Tolza [@VidadTol](https://www.github.com/VidadTol)
