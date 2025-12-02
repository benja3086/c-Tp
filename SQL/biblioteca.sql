drop database if exists biblioteca;
CREATE database biblioteca;

use biblioteca;

CREATE table libros(
id_libro INT PRIMARY KEY AUTO_INCREMENT,
titulo VARCHAR(255),
autor VARCHAR(255),
fecha_publicacion DATE,
id_autor int
);
CREATE table autores(
id_Autor INT PRIMARY KEY AUTO_INCREMENT,
Nombre VARCHAR(255),
Nacionalidad VARCHAR(100)
);
create index idx_autores
on autores (libros);
create TABLE usuarios(
ID_Usuario INT PRIMARY KEY AUTO_INCREMENT,
Nombre_Usuario VARCHAR(100) UNIQUE,
Email VARCHAR(100) NOT NULL,
Fecha_Registro DATE DEFAULT CURRENT_TIMESTAMP
);
create table prestamos(
ID_Prestamo INT PRIMARY KEY AUTO_INCREMENT,
id_usuario int,
id_libro int,
Fecha_Prestamo DATE,
Fecha_Devolucion DATE,
FOREIGN KEY (id_usuario) REFERENCES usuarios(id_Usuario),
FOREIGN KEY (id_Libro) REFERENCES libros(id_libro)
);

