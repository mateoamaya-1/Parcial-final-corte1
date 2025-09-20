# Evaluación: Cálculomayor magnitud

## Descripción del Problema

En este ejercicio, debes escribir un programa en C++ que permita al usuario calcular el promedio de notas/calificaciones registradas en un arreglo. El programa debe ser capaz de:

1. **Leer las notas de varios estudiantes**: Los datos de cada nota (id estudiante, calificación) pueden ser ingresados manualmente o tomados de un conjunto predeterminado.
2. **Calcular promedio de notas**: El programa debe calcular el promedio de las notas.
3. **Encontrar el indice del vector del estudiante con mayor calificación**: El programa debe identificar la posición del vector donde esta el estudiante que haya obtenido la calificación más alta.
4. **Mostrar los resultados**: Finalmente, el programa debe mostrar el promedio del arreglo y los datos del individuo que haya obtenido la nota más alta.

### Tareas a Realizar

1. **Completar la función `calcularpromedio`**:

   - Esta función debe calcular el promedio de las califcaciones disponibles en el arreglo.
   - Debe retornar el valor promedio y actualizar el índice del elemento del vector donde se identifique la nota más alta.

2. **Completar la función `leerNotas`**:
   - Esta función debe preguntar al usuario si desea ingresar los valores manualmente. Si la respuesta es afirmativa, debe permitir que el usuario ingrese las coordenadas de cada punto. En caso contrario, debe usar un conjunto de valores predeterminados.
3. **Completar la función `mostrarResultado`**:
   - Esta función debe mostrar los datos relevantes identificados.

### Funciones Incompletas

En el código proporcionado, algunas funciones están incompletas. Debes completar estas funciones para que el programa funcione correctamente. Aquí está una breve descripción de cada una:

- **`leerNotas(Grade notas[], int n)`**: Permite leer las notas de manera manual o utilizar valores predeterminados.
- **`calcularPromedio(Grade notas[], int n, int &indiceNotaMasAlta)`**: Calcula el promedio de las notas e identificar la posición del arreglo donde se observa la mayor nota
- **`mostrarResultado(Grade notas[], int indiceNotaMasAlta, double promedio)`**: Muestra el promedio y datos de la mejor nota

### Restricciones

1. El número de notas ingresadas debe ser al menos 2.
2. Las notas deben ser ingresadas en formato `(id, calific)`, donde `id` es un entero y calific un numero real.
3. El rango de las notas es 0.0-5.0

### Entorno de Desarrollo

- Lenguaje: C++
- Herramientas recomendadas: VS Code, git, cmath, iostream

### Ejemplo de Ejecución

Supongamos que el usuario ingresa los siguientes valores:

- Nota 1: (1, 3.0)
- Nota 2: (20, 4.0)
- Nota 3: (56, 5.0)

**Salida esperada:**

```
¿Desea ingresar las notas manualmente? (s/n): s
Ingrese las notas del estudiante 1 (id, nota): 1 3.0
Ingrese las notas del estudiante 2 (id, nota): 20 4.0
Ingrese las notas del estudiante 3 (id, nota): 56 5.0


El id del estudiante con mejor calificación es: 56 << ", con una nota de 5.0
```

---

## Instrucciones

1. **Descarga el código fuente proporcionado**.
2. **Completa las funciones faltantes** según lo que se describe más arriba.
3. Asegúrate de que el programa calcule correctamente el promedio.
4. Verifica que el programa maneje tanto los valores ingresados manualmente como los predeterminados correctamente.
5. Realiza las pruebas necesarias para asegurar el funcionamiento correcto del programa.
6. **Subir el código completado** al repositorio cuando hayas terminado.

### Criterios de Evaluación

1. **Correctitud del Código**: El programa debe funcionar correctamente y proporcionar resultados precisos.
2. **Calidad del Código**: El código debe estar bien estructurado y ser fácil de entender.
3. **Manejo de Errores**: El programa debe manejar entradas inválidas y proporcionar mensajes de error claros cuando sea necesario.
4. **Cumplimiento de las Especificaciones**: El código debe cumplir con todas las especificaciones de la tarea.

---

¡Buena suerte!
