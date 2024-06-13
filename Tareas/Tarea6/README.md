# Tarea 5: Expresiones Regulares y Makefile

## Indice
1. [Descripción](#descripcion)
2. [Ejecución de los Programas](#ejecucion-de-los-programas)
3. [Nota Teorica](#nota-teorica)


## Descripcion



<br>

## Ejecucion de los programas
### Compilacion y ejecucion del programa
Con el fin de ejecutar el programa solicitado se recomienda seguir los siguientes pasos:

1. Posicionese sobre el directorio _ie0217/Tareas/Tarea5/_
2. Ejecute el comando para la compilacion y ejecucion:
```sh
make
```
3. Cuando finalizado con las pruebas necesarias, ejecute el siguiente comando para eliminar los archivos ejecutables.
```sh
make clean
```

### Doxygen
La documentacion correspondiente generada a partir del formato doxygen se encuentra en el siguiente enlace: https://tarea5c06153.netlify.app/globals_func.html

<br>

## Parte Practica
### Creacion de la base de datos


### Insercion de datos


### Consultas


### Actualizaciones


### Eliminaciones


<br>


## Parte Teorica

### 1. ¿Qué es una base de datos relacional y cuáles son sus características fundamentales?
**Definicion**

Una base de datos relacional (RDB) es una forma de estructurar información en tablas, filas y columnas con la capacidad de establecer vínculos (o relaciones) entre información mediante la unión de tablas a través de una clave principal o una clave externa. Estos identificadores únicos demuestran las diferentes relaciones que existen entre las tablas y estas relaciones generalmente se ilustran a través de diferentes tipos de modelos de datos. Adicionalmente, Los analistas utilizan consultas SQL

- **Tablas**: Estructuras bidimensionales de filas y columnas que contienen los datos.
- **Relaciones**: Conexiones entre tablas mediante claves primarias y foráneas.
- **SQL (Structured Query Language)**: Lenguaje estándar para la manipulación y consulta de datos.
- **Integridad de los datos**: Garantía de precisión y consistencia de los datos mediante reglas de integridad.
- **Normalización**: Proceso de estructurar los datos para reducir la redundancia y mejorar la integridad.

### 2. ¿Cuál es la diferencia entre una clave primaria y una clave candidata en una base de datos relacional?
- **Clave Primaria**: Una clave o llave primaria es una columna que contiene un identificador unico y no nulo para cada registro agregado a la tabla. 
- **Clave Candidata**: Una clave o llave candidata son todas aquellas columnas que contienen la restriccion de ser no nulas y unicas, las cuales reciben su nombre porque son claves que califican como candidatas para ser llaves primarias.

Por ejemplo, utilizando como referencia el enunciado de la tarea, la Tabla `Cursos` tiene los atributos: id_curso, sigla, nombre, semestre y creditos.

Segun el diseño, se establecio _id\_curso_ como clave primaria, pero perfectamente pudo ser _sigla_ o incluso _nombre_, porque son columnas que fueron configuradas para que no pudieran ser nulas y unicas; contrario de _semestre_ y _creditos_ donde semestre puede ser nulo y tener repeticion de valores porque varips cursos pueden pertenecer a un mismo semestre, lo mismo con creditos porque estos pueden ser los mismos para varios cursos.

### 3. ¿Qué son las claves foráneas y cómo se utilizan para mantener la integridad referencial en una base de datos?
- **Clave Foránea**: Es un campo (o conjunto de campos) en una tabla que establece y refuerza un vínculo con la clave primaria de otra tabla.
- **Integridad Referencial**: Se mantiene asegurando que cada valor de clave foránea en una tabla tenga un valor correspondiente en la clave primaria de la tabla referenciada. Esto previene entradas huérfanas y asegura la consistencia de los datos.

### 4. ¿Qué es una transacción en el contexto de bases de datos y cuáles son las propiedades ACID que debe cumplir?
- **Transacción**: Es una unidad de trabajo que se ejecuta completamente o no se ejecuta en absoluto, asegurando la consistencia de la base de datos.
- **Propiedades ACID**:
  - **Atomicidad**: La transacción se ejecuta completamente o no se ejecuta en absoluto.
  - **Consistencia**: La transacción lleva la base de datos de un estado consistente a otro estado consistente.
  - **Aislamiento**: Las transacciones concurrentes no interfieren entre sí.
  - **Durabilidad**: Una vez que una transacción se ha comprometido, sus cambios son permanentes, incluso en caso de fallo del sistema.

### 5. ¿Qué son las vistas (views) en SQL y cuáles son los beneficios y limitaciones de su uso?
- **Vistas (Views)**: Son consultas almacenadas que se pueden tratar como tablas virtuales. No almacenan datos físicamente, sino que presentan datos de una o más tablas.
- **Beneficios**:
  - Simplificación de consultas complejas.
  - Mejora de la seguridad al restringir el acceso a datos sensibles.
  - Facilitación de la gestión de permisos.
- **Limitaciones**:
  - Pueden ser menos eficientes que las tablas directas para consultas complejas.
  - Algunas vistas no permiten actualizaciones directas en los datos subyacentes.

### 6. ¿Qué es la normalización en bases de datos y cuáles son las diferentes formas normales (normal forms)?
- **Normalización**: Es el proceso de organizar los datos para minimizar la redundancia y evitar problemas de inconsistencia.
- **Formas Normales**:
  - **Primera Forma Normal (1NF)**: Eliminación de grupos repetitivos, asegurando que cada campo contiene solo valores atómicos.
  - **Segunda Forma Normal (2NF)**: Cumple con 1NF y todos los campos no clave dependen completamente de la clave primaria.
  - **Tercera Forma Normal (3NF)**: Cumple con 2NF y todos los campos no clave son independientes entre sí.
  - **Forma Normal de Boyce-Codd (BCNF)**: Versión más estricta de 3NF.
  - **Cuarta Forma Normal (4NF)** y **Quinta Forma Normal (5NF)**: Tratan dependencias multivaluadas y uniones, respectivamente.

### 7. ¿Cómo funcionan los índices en SQL y cuál es su impacto en el rendimiento de las consultas?
- **Índices**: Estructuras de datos que mejoran la velocidad de las operaciones de búsqueda en una tabla.
- **Impacto en el Rendimiento**:
  - **Beneficios**: Mejoran significativamente la velocidad de las consultas SELECT.
  - **Limitaciones**: Pueden degradar el rendimiento de las operaciones de inserción, actualización y eliminación debido a la sobrecarga de mantener el índice.

### 8. ¿Qué es SQL Injection y cuáles son las mejores prácticas para prevenir este tipo de ataque?
- **SQL Injection**: Es un ataque donde un atacante inserta o manipula consultas SQL a través de la entrada de datos, comprometiendo la base de datos.
- **Mejores Prácticas para Prevenir**:
  - **Uso de consultas preparadas (Prepared Statements)**.
  - **Validación y sanitización de entradas**.
  - **Limitación de los privilegios de la base de datos**.
  - **Uso de procedimientos almacenados**.
  - **Implementación de controles de acceso adecuados**.

### 9. ¿Qué son los procedimientos almacenados (stored procedures) en SQL y cómo pueden mejorar la eficiencia y seguridad de las operaciones de base de datos?
- **Procedimientos Almacenados**: Son conjuntos de instrucciones SQL precompiladas y almacenadas en la base de datos que se pueden ejecutar como una sola llamada.
- **Beneficios**:
  - **Eficiencia**: Reducción de la sobrecarga de compilación repetida de consultas.
  - **Seguridad**: Encapsulamiento de la lógica de negocio y control de acceso a los datos.
  - **Mantenibilidad**: Facilitan la gestión de lógica compleja y permiten cambios centralizados.

### 10. ¿Cómo se implementan las relaciones uno a uno, uno a muchos y muchos a muchos en una base de datos relacional y qué consideraciones se deben tener en cuenta en cada caso?
- **Relación Uno a Uno**: Se implementa usando una clave primaria en una tabla y una clave foránea única en otra tabla.
  - **Consideración**: Útil para dividir una entidad en varias tablas por razones de organización o seguridad.
- **Relación Uno a Muchos**: Se implementa usando una clave primaria en la tabla "uno" y una clave foránea en la tabla "muchos".
  - **Consideración**: Es la relación más común y debe asegurarse la integridad referencial.
- **Relación Muchos a Muchos**: Se implementa usando una tabla intermedia que contiene claves foráneas de las dos tablas relacionadas.
  - **Consideración**: La tabla intermedia puede incluir campos adicionales que describan la relación.
