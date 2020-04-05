# Bookshelf

## Origen
  
Este programa es un proyecto final de la materia de _Fundamentos de Programación_ en el semestre 2020-1, en la _[Facultad de Ingeniería](https://www.ingenieria.unam.mx), UNAM_. Nació de la necesidad de llevar un orden en las lecturas que tenemos diariamente o simplemente para tener una lista de libros que nos gustaria leer y que aveces podemos olvidar el titulo o el autor de la obra.  

Lenguaje de programación: **C**

Este programa fue realizado por **[Héctor Olivares](https://twitter.com/HektorOlivares)** en el año 2019.

## Plataformas
<p align="left">
  <img width="80" height="18.85" src="Iconos/macosplat.png"/>
</p>

## Ejecución del programa

1. Abre tú terminal.
2. Coloca la carpeta "Bookeeper-master" en tú escritorio.
2. Desde tú terminal dirígete hacia el escritorio con el comando ` cd `.
3. Utiliza el comando `gcc main.c -o bookshelf` para compilar el programa.
4. Por ultimo, utiliza el comando ` ./bookshelf ` para ejecutar el programa. 

## Contenido

- [Consideraciones previas](#consideraciones-previas)
- [Biblioteca](#biblioteca)
  - [Agregar libros](#agregar-libros)
  - [Mi biblioteca](#mi-biblioteca)
  - [Promedio lectura](#promedio-lectura)
- [Libros leídos](#libros-leídos)
  - [Termine un libro](#termine-un-libro)
  - [Ver libros leídos](#ver-libros-leídos)
  - [Numero libros leídos](#numero-libros-leídos)
- [Wish List](#wish-list)
  - [Agregar libros wish list](#agregar-libros-wish-list)
  - [Ver Mi Wish List](#ver-mi-wish-list)
- [Configuración](#configuración)
  - [Reset](#reset)
  - [Contacto](#contacto)

## Consideraciones previas
Este manual tiene como fin guiar al usuario en su familiarización con el programa **BOOKEEPER**. Este programa hace posible una optima organización de tus lecturas, ayudando a que puedas tener una lista completa de todos tus libros y autores que se vera reflejada tanto en el programa como en un archivo de texto `(.txt)`. Podrás ver cuales libros ya haz terminado de leer y el numero total de libros que haz leído hasta el momento, que se vera reflejado igualmente en el programa como en un archivo de texto. También tendrás la posibilidad de crear una “lista de deseos `(Wish List)`”, en donde podrás agregar títulos de libros que estas interesado en adquirir para tu biblioteca personal. A su vez este programa cuenta con sistema de reiniciado `(reset)` donde podrás borrar las listas que desees para volver a empezar una nueva desde cero.

## Biblioteca
El menú de Mi Biblioteca es la opción principal donde podemos encontrar las opciones de agregar libros, ver mi biblioteca y el promedio de lectura. Cada una de estas opciones ejecuta un menú donde el usuario tendrá que ingresar los datos que se solicitan para empezar el proceso de la opción escogida.

### Agregar libros
En esta opción podremos agregar libros a nuestra biblioteca.
Al seleccionar esta opción nos pedira que ingresemos el titulo del libro que vamos agregar, después nos pedira que ingresemos el nombre del autor del libro con la recomendación de agregarlo con la primer letra de su nombre seguido de un punto y su apellido completo como se muestra a continuación: **F.Nietzsche**. Posteriormente el programa preguntara si desea agregar otro titulo más y dependiendo de la respuesta del usuario el programa pedira de nuevo los datos anteriores para el nuevo libro o nos mandara de nuevo al menú finalizando el proceso.

### Mi biblioteca
En esta opción podremos ver los libros de nuestra biblioteca.
Al seleccionar esta opción nos mostrará la lista de todos los libros que hemos agregado mostrando el titulo del libro seguido del autor. Si no se ha agregado ningún libro, no se muestra nada y nos manda al menú directamente.

### Promedio lectura
En esta opción podremos ver el promedio de lectura por mes.
Al seleccionar esta opción nos mostrará un menú donde nos pedira que ingresemos el numero que hemos leído al año para posteriormente darnos el resultados de cuantos libros leemos en promedio al mes.

## Libros Leídos
En el menú de Libros Leídos podremos encontrar las opciones de termine un libro! , ver mis libros leídos y numero de libros leídos. Cada una de estas opciones ejecuta un menú donde el usuario tendrá que ingresar los datos que se solicitan para empezar el proceso de la opción escogida.

### Termine un libro!
En esta opción podremos agregar los libros que ya hemos terminado.
Al seleccionar esta opción nos felicitara por haber concluido el libro y nos pedira que ingresemos el titulo del libro que vamos agregar, después nos pedira que ingresemos el nombre del autor del libro con la recomendación de agregarlo con la primer letra de su nombre seguido de un punto y su apellido completo como se muestra a continuación: **A. Tarkovski**. Posteriormente el programa preguntara si desea agregar otro titulo más y dependiendo de la respuesta del usuario el programa pedira de nuevo los datos anteriores para el nuevo libro o nos mandara de nuevo al menú finalizando el proceso.
### Ver libros leídos
En esta opción podremos ver los libros que ya hemos leído.
Al seleccionar esta opción nos mostrará la lista de todos los libros que ya hemos leído mostrando el titulo del libro seguido del autor. Si no se ha agregado ningún libro, no se muestra nada y nos manda al menú directamente.
### Numero libros leídos
En esta opción podremos ver el número de libros que hemos leído.
Al seleccionar esta opción nos mostrará un menú donde se mostrara cuántos libros en total hemos leído hasta ahora.

## Wish List
En el menú Wish List podremos encontrar las opciones de agregar libro y ver mi Wish List. Cada una de estas opciones ejecuta un menú donde el usuario tendrá que ingresar los datos que se solicitan para empezar el proceso de la opción escogida.
### Agregar libros wish list
En esta opción podremos agregar libros a Wish List.
Al seleccionar esta opción nos pedira que ingresemos el titulo del libro que vamos agregar, después nos pedira que ingresemos el nombre del autor del libro con la recomendación de agregarlo con la primer letra de su nombre seguido de un punto y su apellido completo como se muestra a continuación: A.Turing. Posteriormente el programa preguntara si desea agregar otro titulo más y dependiendo de la respuesta del usuario el programa pedira de nuevo los datos anteriores para el nuevo libro o nos mandara de nuevo al menú finalizando el proceso.
### Ver mi wish list
En esta opción podremos ver los libros de nuestra Wish List.
Al seleccionar esta opción nos mostrará la lista de todos los libros que hemos agregado mostrando el titulo del libro seguido del autor. Si no se ha agregado ningún libro, no se muestra nada y nos manda al menú directamente.

## Configuración
En el menú Configuración podremos encontrar las opciones de Reset y Contacto. Cada una de estas opciones ejecuta un menú donde el usuario tendrá que ingresar los datos que se solicitan para empezar el proceso de la opción escogida.

### Reset
En esta opción podremos reiniciar las listas que hemos generado en el programa.
Al seleccionar esta opción nos preguntara que lista es la que deseamos reiniciar las cuales serian 1) Mi Biblioteca, 2) Libros leídos, 3) Wish List. Al seleccionar alguna de estas listas nos preguntara si estamos seguros de eliminar por completo la lista y dependiendo de la respuesta del usuario, la lista seleccionada se borrara por completo o nos mandara de nuevo al menú principal.

### Contacto
En esta opción podremos ver la forma de contactar al programador del programa.
Al seleccionar esta opción nos mostrará el contacto del programador el cual podremos encontrar en Twitter como **[@HektorOlivares](https://twitter.com/HektorOlivares)** y en GitHub como **[@HectorOlivares](https://github.com/HectorOlivares)** donde podrás mandar un DM con tus opiniones, dudas o problemas con el programa.
