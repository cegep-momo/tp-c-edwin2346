# Construire le projet

Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:

```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code.
Pour ca il suffit de les copiers dans le repertoire `build` avec l'application `bibliotheque`

Question 1 : C++
Expliquez en détails une fonctionnalité / notion dans le code que ne nous avons pas ou peu vu en cours.

Réponse : Dans mon code, j’ai créé une fonction pour Sauvegarder et lire les objets dans un fichier texte.Dans mon fichier book.cpp la méthode toFileFormat() met un livre en texte séparé par des “|”, et fromFileFormat() relit ce texte pour recréer le livre. Cette méthode permet de sauvegarder les informations du livre meme quand le programme est fermé.

Question 2 : Options de développement possible

Reponse : Une bonne solution serait d’utiliser une base de données MySQL pour enregistrer les livres, auteurs et utilisateurs. Cela rendrait les recherches plus rapides et cela éviterait d’utiliser des fichiers texte. On pourrait aussi créer une interface web avec Node.js Express pour gérer les livres à partir d’un site web. C++ serait encore présent mais il faudrait des requêtes SQL pour accéder a la base de données. Cela rendrait le système plus simple et capable de gérer un très grand nombres de livres.
