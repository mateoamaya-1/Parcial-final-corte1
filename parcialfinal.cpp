//Mateo Felipe Amaya
//Paula Alejandra Morales

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Definir la estructura de una nota(grade)
struct Grade
{
    int studentId;
    float grade;
};
void leerNotas(Grade notas[], int n)
{
    char respuesta;
    cout << "¿Desea ingresar las notas manualmente? (s/n): ";
    cin >> respuesta;
    // Completar: Verificar si la respuesta es 's' o 'n', tener en cuenta mayúsculas y minúsculas
    if (respuesta == 's' || respuesta == 'S')
    {
        // Completar: Leer las coordenadas de cada nota
        for (int i = 0; i < n; i++)
        {
            cout << "Ingrese las notas del estudiante" << i + 1 << " (id, nota): \n";
            cout << "Nota - ";cin >> notas[i].grade; cout ;
            cout << "Id - "; cin >> notas[i].studentId;
        }
    }
    else
    {
        // Usar valores predeterminados
        cout << "Usando valores predeterminados...\n";
        notas[0] = {1010, 3.5};  //
        notas[1] = {1020, 2.7};  // 
        notas[2] = {1030, 5.0};  // 
        notas[3] = {2056, 1.3}; // 
    }
}
// Función para calcular la mayor magnitud
double calcularPromedio(Grade notas[], int n, int &indiceNotaMasAlta)
{
    double prom = 0.0;
    float notaMasAlta = notas[0].grade;
    indiceNotaMasAlta = 0;
    for (int i = 0; i < n; i++) {
        prom += notas[i].grade;
        if (notas[i].grade > notaMasAlta) {
            notaMasAlta = notas[i].grade;
            indiceNotaMasAlta = i;
        }
    }
    return prom / n; // Retorna el promedio
}
// Función para mostrar el promedio y estdudiante con mayor nota
void mostrarResultado(Grade notas[], int indiceNotaMasAlta, double promedio)
{
    cout << fixed << setprecision(2); // Mostrar con 2 decimales
    cout << "El id del estudiante con mejor calificación es: " << notas[indiceNotaMasAlta].studentId<< ", con una nota de " << notas[indiceNotaMasAlta].grade << "\n";
    cout << "La calificación promedio del arreglo es: " << promedio << endl;
}
int main()
{
    int n;
    cout << "Ingrese el número de estudiantes (mínimo 2): ";
   // Leer el número de notas
    cin >> n;

    if (n<2) {
    
        cout << "Se necesitan al menos 2 estudiantes para determinar el promedio.\n";
        return 1;
    }
    Grade* notas= new Grade[n]; // Arreglo de estructuras para almacenar las coordenadas (x, y)
    // Leer las notas (manual o predeterminado)
    leerNotas(notas, n);
    // Calcular promedio
    int indiceNotaMasAlta = 0;
    double promedio = calcularPromedio(notas, n, indiceNotaMasAlta);
    // Mostrar el resultado
    mostrarResultado(notas, indiceNotaMasAlta, promedio);
    delete[] notas;
    return 0;
}
