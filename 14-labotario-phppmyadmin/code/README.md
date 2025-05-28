# Prácticas Profesionalizantes I - Laboratorio 09

## Descripción

Aplicación CRUD de estudiantes en PHP con MySQL, contenedorizada con Docker y configurada mediante variables en un archivo .env.

## Características

- Gestión centralizada de configuración mediante archivo .env para parámetros de red, puertos y credenciales del stack.
- Entorno Dockerizado con servicios desacoplados: Apache/PHP y MySQL listos para levantar con docker compose.

## Estructura de directorios

```shell
 .
├──  .env
├──  .gitignore
├──  compose.yaml
├──  db
│   └──  script_inicial.sql
├──  Makefile
├──  php-crud
│   ├──  apache-http
│   │   └──  config
│   │       └──  httpd.conf
│   ├──  compose.yaml
│   ├──  CRUD-PHP-PROTOTIPO-PARA-REFACTORIZAR.code-workspace
│   ├──  Dockerfile
│   ├──  LICENSE
│   ├──  public
│   │   ├──  config.php
│   │   ├──  delete.php
│   │   ├──  includes
│   │   │   ├──  footer.php
│   │   │   └──  header.php
│   │   ├──  index.php
│   │   ├──  insert.php
│   │   ├──  style.css
│   │   ├──  update.php
│   │   └──  w3.css
│   └──  README.md
└──  README.md
```

## Uso

- La aplicacion sera servida en `localhost:8080`
- phpMyAdmin esta servido en `localhost:8081`
- Credenciales guardadas en .env 

### Para despliegue con Docker

Ejecutar el siguiente comando desde directorio raiz

```shell
make up-prod
```

O para apagar el stack:

```shell
make down-prod
```

### Para desarrollo

Ejecutar:

```shell
make up-dev
```

O para apagar el stack:

```shell
make down-dev
```

## Requisitos

- Docker
- Sistema operativo con terminal
