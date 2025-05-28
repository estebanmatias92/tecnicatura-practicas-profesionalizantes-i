# Prácticas Profesionalizantes I - Actividad 04

## Descripción

Programa en C++ que implementa operaciones matemáticas básicas mediante funciones.

## Características

- Define funciones para suma y multiplicación de enteros
- Utiliza prototipos de funciones para declaración anticipada
- Muestra resultados formateados en consola
- Incluye manejo básico de variables enteras

## Estructura de directorios

```shell
 .
├──  .gitignore
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
docker compose run --build --rm app
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
