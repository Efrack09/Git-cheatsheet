Enlazar repo local con github:
//1. Crea tu repo en la plataforma de github
//2. Copia el enlace de https
//3. En la carpeta de tu repo local: git remote add origin [pegas el enlace aqui] por ejemplo: git remote add origin https://github.com/etc
//4. Si ya tienes a�adido todo al staging y ya hicicste commit, solo te queda subirlo a github con: git push -u origin master

Notas: Te debe pedir usuario y contrase�a de github
Nota2: Si no has configurado tu nombre y correo hazlo con los comandos:

//a) git config --global user.name "Tu nombre"
//b) git config --global user.email "Tu email"

Conceptos importantes: 

//git branch: Ver las ramas existentes y en cual estas actualmente
//git branch algo: Crea una nueva rama llamada "algo"
//git checkout nombre_rama:  Se cambia a la rama llamada como se indique en "nombre_rama"

Conceptos_

//git fetch: Bajar cambios del remoto
//git merge Rama: mezclar cambios de una rama a la que estas actualmente
//git pull: Sirve para bajar y hacer merge cambios del repositorio remoto

Comandos ultiles:

//git log: Muestra el log de tus commits en la rama actual
//git status: Muestra los archivos en staging y los archivos no trackeados
