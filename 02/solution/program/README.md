# Prácticas Profesionalizantes I - Actividad 02

## Descripción

Programa interactivo en C++ que solicita el nombre del usuario y muestra un saludo personalizado.

## Características

- Solicita y almacena el nombre del usuario mediante entrada estándar
- Muestra un mensaje de saludo personalizado
- Implementa una pausa controlada antes de finalizar
- Utiliza getline() para permitir nombres con espacios

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
