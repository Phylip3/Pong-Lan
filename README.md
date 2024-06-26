---

# Projet de Fin d'Année : Pong Multijoueur en LAN

## Description
Ce projet est un jeu Pong multijoueur en LAN, développé dans le cadre d'un projet de fin d'année. Le jeu utilise la bibliothèque SFML pour le rendu graphique et la gestion des événements, ainsi que les sockets pour la communication réseau. Les joueurs peuvent contrôler les raquettes avec les touches du clavier et jouer en réseau local.

## Fonctionnalités
- Jeu Pong classique avec deux joueurs
- Contrôle de la raquette gauche avec les touches `Z` et `S`
- Contrôle de la raquette droite avec les touches `Flèche Haut` et `Flèche Bas`
- Communication réseau pour le jeu multijoueur en LAN
- Affichage des scores
- Texte d'instructions et de contrôles affiché au début du jeu

## Prérequis
- [SFML](https://www.sfml-dev.org/download.php) (Simple and Fast Multimedia Library)
- [CMake](https://cmake.org/) (pour la génération des fichiers de construction)
- Un compilateur C++ (comme Visual Studio ou Rider)
- Bibliothèque Winsock2 pour les sockets (si sur Windows)

## Installation et Configuration
### 1. Cloner le dépôt
Clonez ce dépôt sur votre machine locale :
```sh
git clone https://github.com/Phylip3/Pong-Lan.git
cd projet-pong-multijoueur
```

### 2. Assurez-vous que CMake et SFML sont dans le PATH
Vérifiez que CMake et SFML sont correctement installés et ajoutés au PATH de votre système.

### 3. Générer les fichiers de construction
Utilisez le script `build.bat` pour générer les fichiers de construction. Ce script créera le dossier `out\binaries` et générera les fichiers nécessaires à la compilation :
```sh
set SOURCE_PATH=%CD%

mkdir out\binaries
cd out\binaries

cmake %SOURCE_PATH%
cmake --build .
```

### 4. Compilation du projet
Pour compiler le projet, ouvrez Visual Studio ou Rider et chargez le projet généré. Assurez-vous de définir le projet comme projet de démarrage :
- **Visual Studio** : Clic droit sur le projet -> "Définir comme projet de démarrage"
- **Rider** : En haut à droite -> "Sélectionner Pong"

### 5. Exécuter le jeu
Tout d'abord, il vous faut changer l'adresse IP présente dans le fichier Client.cpp en fonction de votre réseau :

1. Ouvrez un invité de commande et exécutez ipconfig.
2. Repérez votre carte réseau et son adresse IP, puis copiez-la.
3. Collez l'adresse IP dans le fichier Client.cpp à la ligne 9 à la place de l'IP déjà présente.

Vous devrez lancer trois instances du jeu pour une partie complète :
1. Une instance en tant que serveur.
2. La première instance de joueur peut être lancée sur la même machine que le serveur.
3. La deuxième instance de joueur doit être lancée sur une seconde machine.

### Utilisation
### Démarrer le jeu
- Lancez le jeu en exécutant l'exécutable généré après la compilation.
- Appuyez sur la barre d'espace pour lancer la balle.

### Contrôles
- **Joueur 1** : Utilisez les touches `Z` et `S` pour déplacer la raquette vers le haut et le bas respectivement.
- **Joueur 2** : Utilisez les touches `Flèche Haut` et `Flèche Bas` pour déplacer la raquette vers le haut et le bas respectivement.

## Architecture du Projet
```
projet-pong-multijoueur/
├── includes/
│   ├── Client/
│   │   └── Client.h
│   ├── CoreGame/
│   │   ├── Ball.h
│   │   ├── Menu.h
│   │   ├── Paddle.h
│   │   └── ScoreManager.h
│   ├── police/
│   │   └──ArialMT.ttf
│   ├── Server/
│   │   └── Server.h
│   └── Game.h
├── src/
│   ├── Client/
│   │   └── Client.cpp
│   ├── CoreGame/
│   │   ├── Ball.cpp
│   │   ├── Menu.cpp
│   │   ├── Paddle.cpp
│   │   └── ScoreManager.cpp
│   ├── Server/
│   │   └── Server.cpp
│   └── Game.cpp
├── CMakeLists.txt
├── build.bat
└── README.md
```

## Contributeurs
- **AKAR Kamel** - Développeur principal (gameplay)
- **REVOL-BUISSON Martin** - Développeur principal (serveur & réseau)

## Remerciements
Un merci particulier à Benoit pour nous avoir épaulé et conseillé durant toute la durée du projet (surtout pour la partie avec les threads).

---
