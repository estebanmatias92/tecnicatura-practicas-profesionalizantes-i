# Prácticas Profesionalizantes I - Actividad 03

## Descripción

Programa en C++ que recopila y muestra fechas actuales y de nacimiento del usuario.

## Características

- Solicita y almacena fecha actual (día, mes, año)
- Solicita y almacena fecha de nacimiento (día, mes, año)
- Muestra todas las fechas ingresadas de forma estructurada
- Implementa entrada/salida básica con validación de rango para meses
- Incluye pausa controlada antes de finalizar la ejecución

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
