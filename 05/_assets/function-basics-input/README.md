# Prácticas Profesionalizantes I - Actividad 05

## Descripción

Esta actividad consiste en un programa C++ que realiza operaciones básicas (suma y multiplicación)
con entrada de datos por consola.

## Características

- Solicita dos números enteros al usuario
- Realiza y muestra la suma de los números
- Realiza y muestra el producto de los números
- Implementado usando funciones separadas para cada operación

## Uso

### Para ejecución directa

Compilar con:

```shell
# From ./project
g++ ./src/main.cpp -o ./build/main
```

Ejecutar con:

```shell
# From ./project
./build/main
```

### Para despliegue con Docker

Ejecutar el siguiente comando desde directorio raiz

```shell
docker compose run --rm deploy
```

### Para desarrollo

Ejecutar:

```shell
# From ./project
docker compose run --rm -i dev
```

## Requisitos

- Compilador C++ (g++ recomendado)
- Docker (opcional, solo para entornos containerizados)
- Sistema operativo con terminal
