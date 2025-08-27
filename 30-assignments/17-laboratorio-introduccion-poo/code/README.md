# Prácticas Profesionalizantes I - Unidad 04 - Laboratorio 12 - Introducción a POO

## Descripción

Programa en C++ que simula una célula y sus componentes principales (núcleo, mitocondria, membrana celular) utilizando conceptos de Programación Orientada a Objetos (POO).

## Características

- **Simulación de componentes celulares**: Representa la estructura básica de una célula.
- **Programación Orientada a Objetos**: Implementa clases para `Cell`, `CellMembrane`, `Mitochondrion`, y `Nucleus`.
- **Modularidad**: Código organizado en archivos separados para cada componente.

## Estructura de directorios

```shell
 code
├──  compose.yaml
├──  core-service
│   ├──  compose.yaml
│   ├──  data
│   │   └──  customers.csv
│   ├──  Dockerfile
│   ├──  docs
│   ├──  include
│   │   ├──  Cell.hpp
│   │   ├──  CellMembrane.hpp
│   │   ├──  Mitochondrion.hpp
│   │   └──  Nucleus.hpp
│   ├── 󱧼 src
│   │   ├──  Cell.cpp
│   │   ├──  CellMembrane.cpp
│   │   ├──  main.cpp
│   │   ├──  Mitochondrion.cpp
│   │   └──  Nucleus.cpp
│   └── 󰙨 tests
├──  Makefile
└──  README.md
```

## Uso

### Para ejecución directa

Compilar con:

```shell
# From ./core-service
mkdir -p build
g++ -Wall -std=c++17 -Iinclude src/*.cpp -o build/cell
```

Ejecutar con:

```shell
# From ./core-service
./build/cell
```

### Para despliegue con Docker

Ejecutar el siguiente comando desde directorio raiz:

```shell
# With Make
make up-prod

# With compose
docker compose up --build
```

### Para desarrollo

Ejecutar:

```shell
# With Make
make run-dev

# With compose from ./core-service
docker compose --profile interactive run --rm dev_interactive
```

## Requisitos

- Compilador C++ (g++ recomendado)

- Docker (opcional, solo para entornos containerizados)

- Sistema operativo con terminal