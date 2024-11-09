# EMSY - TP1 - 2024 - 2025
## Commande utilisé
### commande de base
*changer le repertoire actuelle de la racine :
	`cd /`
 
 change le repertoire actuelle vers le dossier home:
 	`cd /home` 

  Affiche la liste des fichier dans le répertoire actuelle
 	 `ls -l`
 
   Creation de fichier
   	`sudo mkdir nom du ficher`

   Utiliser une commande en mode administrateur
   	`sudo`
    
### Instalation de la machine virtuelle
`sudo saprky-installer`

### Commande de gestion des périphériques
Changer la langue du clavier
	`sudo dpkg-reconfigure console-setup`
 
Affiche la valeur actuelle du périphérique swap
 	`cat /proc/sys/vm/swappiness `
  
### Commande de verification et de mise à jour des application
verifie la version de l'application nano
	`nano --version`
 
 verifie la version de l'application git
	`git --version`
 
verifie la version du compilateur gcc
	`gcc --version`

mise à jour des paquets et des applications
	`sudo apt update`

 ### Instalation de git
`sudo apt install git`

### Utilisation de git
clonage d'un dossier depuis un dépots git
	` sudo git clone https://github.com/P60B40/EMSY_TP1_Source.git`
 
accès au dosier du dépot clonné
	`cd EMSY_TP1_Source_BZI_DSY`
 
 ### editeur de texte et code nano
 pour ouvrir le fichier à éditer
 	`nano fichier.c`
  
### utilisation du compilateur gcc
compiler et afficher les warnings
	`gcc -Wall -o fichier.o -c fichier.c `

 Compilation seule
 	`gcc -o fichier fichier.o `

  Appeller le programe
  	`./fichier`

