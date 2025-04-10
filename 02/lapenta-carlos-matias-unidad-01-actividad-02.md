---
title: Prácticas Profesionalizantes I - Unidad 01 - Actividad 02
filename: lapenta-carlos-matias-unidad-01-actividad-02
type: assignment
date: 2025-03-26
due_date: 2025-03-26
student: Lapenta Carlos Matías
course:
  name: Prácticas Profesionalizantes I
  code: ""
professor: Gabriel Nicolás González Ferreira
unit: 1
assignment: 2
topic: Introducción
difficulty: very-easy
priority: low
status_completed: true
status_submitted: true
status_graded: false
grading:
  max_points: 100
  earned_points: 0
  weight: 0
submission_type: source_code
submission_file_format: .docx
submission_platform: Google_Classroom
links_instructions: https://classroom.google.com/c/Njg4OTk3OTM1NDI3/m/NzYyNzA3NzMyOTQ4/details
links_subsmission: https://classroom.google.com/c/Njg4OTk3OTM1NDI3/m/NzYyNzA3NzMyOTQ4/details
links_local_copy: ""
ai_chat_links:
  - https://chat.deepseek.com/
  - https://notebooklm.google.com/
tags:
  - algorithms
  - data-structures
  - first-year
  - assignment
  - unit-0
---
# Prácticas Profesionalizantes I - Unidad 01 - Actividad 02
<!--
- **Materia**: `= this.course.name`
- **Unidad**: `= this.unit`
- **Actividad**: `= this.assignment`
- **Tema**: `= this.topic`
- **Profesor**: `= this.professor`
- **Estudiante**: `= this.student`
- **Fecha de entrega**: `= this.due_date`
- **Completado**: `= this.status_completed`
- **Instrucciones**: `= this.links_instructions`
- **Copia Local**: `= this.links_local_file`
- **Enlace de Entrega**: `= this.links_submission`
-->
- **Estudiante**: Lapenta Carlos Matías

## 📌 Descripción de la Actividad

- [Plataforma de Entrega](https://classroom.google.com/c/Njg4OTk3OTM1NDI3/m/NzYyNzA3NzMyOTQ4/details) | [Instrucciones](https://classroom.google.com/c/Njg4OTk3OTM1NDI3/m/NzYyNzA3NzMyOTQ4/details)
- Objetivos principales:
    - Compilen este código y ejecuten en sus máquinas
- Formato de entrega requerido: **.docx**

## 📝 Desarrollo

#### Codigo Fuente
```cpp
#include <iostream>  
#include <string>  // Include string header

/* Utilizo namespace std para no escribir std::
delante de cada construcción del lenguaje */  
using namespace std;  
  
int main()  
{  
    /* name es una variable del tipo string, una reserva de memoria donde voy a
    guardar un texto. */  
    string name;  

    /* Mostrar por pantalla-> Enter your name: */  
    cout << "Enter your name: ";  

    /* Espera que introduzca un texto por consola y al
    presionar enter lo voy a guardar en la variable y
    continuar con la ejecución del programa */  
    getline(cin, name);  // Changed to getline to handle spaces in names

    /* Muestro -> Hello <el nombre escrito y guardado en la variable name> */  
    cout << "Hello " << name << endl;  

    /* Esto a continuación es para simular una pausa en la ejecución del
    programa y que no cierre */  
    cout << "Press Enter to exit...";  // Added prompt for better UX
    cin.ignore();  
    cin.get();  

    return 0;  
}
```

#### Captura 
![[captura-enter-your-name-program.png]]

### 📚 Material de Referencia

- -

### 📂 Archivos Adjuntos

- [[captura-enter-your-name-program.png]]