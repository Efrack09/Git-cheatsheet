_CHAPER 2_
=========================================================
Enlazar el repositorio local con github
=========================================================
1. Crea tu repo en la plataforma de github

2. Copia el enlace de https

3. En la carpeta de tu repo local: _git remote add origin_ [pegas el enlace aqui]

por ejemplo: git remote add origin https://github.com/etc

4. Si ya tienes añadido todo al staging y ya hicicste commit, solo te queda subirlo a github con: _git push -u origin master_

**Notas**: Te debe pedir usuario y contraseña de github

**Nota2**: Si no has configurado tu nombre y correo hazlo con los comandos:

a) _git config --global user.name "Tu nombre"_

b) _git config --global user.email "Tu email"_

Conceptos importantes
==========================================================
_git branch_: Ver las ramas existentes y en cual estas actualmente

_git branch algo_: Crea una nueva rama llamada "algo"

_git checkout nombre_rama_:  Se cambia a la rama llamada como se indique en "nombre_rama"

Conceptos
=========================================================
_git fetch_: Bajar cambios del remoto

_git merge Rama_: mezclar cambios de una rama a la que estas actualmente

_git pull_: Sirve para bajar y hacer cambios del repositorio remoto

Comandos ultiles
=========================================================
_git log_: Muestra el log de tus commits en la rama actual

_git status_: Muestra los archivos en staging y los archivos no trackeados

echo 'My Project' > README

_git status_

On branch master

Untracked files:

  (use "git add <file>..." to include in what will be committed)

    README
    
(use "git add" to track)

_CHAPER 3_
=========================================================
