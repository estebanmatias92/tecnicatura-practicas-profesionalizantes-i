# FLTK Button Application

## Description

This is a simple C++ application built with FLTK (Fast Light Toolkit) that demonstrates basic GUI programming. It creates a window with a button, and when the button is pressed, it changes the text displayed in a text box.

## Features

- Simple Graphical User Interface (GUI)
- Interactive button that triggers a text change
- Basic FLTK window and widget management
- Modularized codebase for better organization

## Directory Structure

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
│   │   └──  fltk_button
│   │       └──  FltkButtonApp.h
│   ├── 󱧼 src
│   │   └──  app
│   │       ├──  fltk_button
│   │       │   └──  FltkButtonApp.cpp
│   │       └──  main.cpp
│   └── 󰙨 tests
├──  Makefile
└──  README.md
```

## Usage

### For Development (Docker)

To build and run the application with a fresh build (no cache):

```shell
make run-dev
```

To run the application with cached build (if available):

```shell
make run-dev
```

For interactive development (e.g., to get a shell inside the container):

```shell
make dev-interactive
```

## Requirements

- Compilador C++ (g++ recomendado)
- Docker (opcional, solo para entornos containerizados)
- Sistema operativo con terminal