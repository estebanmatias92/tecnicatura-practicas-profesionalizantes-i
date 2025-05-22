# Prácticas Profesionalizantes I - Actividad 08

## Descripción

Esta aplicación Docker Compose despliega un servidor Apache configurado para ejecutar CGI. Incluye un programa en C++ (main.cpp) que genera un formulario HTML y procesa datos enviados por POST, mostrando el nombre ingresado. La configuración de Apache habilita módulos CGI y permite ejecución en /cgi-bin.

## Características

- Servidor Apache con soporte CGI
- Procesamiento de formularios HTML

## Estructura de directorios

```shell
 .
├──  .gitignore
├──  apache-http
│   ├──  config
│   │    └──  httpd-cgi.conf
│   └──  Dockerfile
├──  core-service
│   ├──  .dockerignore
│   ├── 󱧼 src
│   │    └──  main.cpp
│   ├──  compose.yaml
│   └──  Dockerfile
├──  compose.yaml
└──  README.md
```

## Uso

### Para ejecución directa

Compilar con:

```shell
# From ./core-service
mkdir -p build
g++ ./src/main.cpp -o ./build/main
```

Ejecutar con:

```shell
# From ./core-service
./build/main
```

### Para despliegue con Docker

Ejecutar el siguiente comando desde directorio raiz

```shell
# Levantar todos los servicios
docker compose up --build
```

### Para desarrollo

Ejecutar:

```shell
# From ./core-service
docker compose run --rm dev
```

## Requisitos

- Compilador C++ (g++ recomendado)
- Docker (opcional, solo para entornos containerizados)
- Sistema operativo con terminal
