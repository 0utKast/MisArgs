
#if 0
// Programa: MisArgs
#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Hay " << argc << " argumentos:\n";

    // Iterarse a través de cada argumento e imprimir su número y valor
    for (int contador{ 0 }; contador < argc; ++contador)
    {
        std::cout << contador << ' ' << argv[contador] << '\n';
    }

    return 0;
}
#endif




#include <iostream>
#include <sstream> // para std::stringstream
#include <string>

int main(int argc, char* argv[])
{
	if (argc <= 1)
	{
		// En algunos sistemas operativos, argv[0] puede terminar como un string vacío en lugar del nombre del programa.
		// Haremos nuestra respuesta condicional si argv[0] está vacío o no.
		if (argv[0])
			std::cout << "Usar: " << argv[0] << " <number>" << '\n';
		else
			std::cout << "Usar: <program name> <number>" << '\n';

		return 1;
	}

	std::stringstream convert{ argv[1] }; // configura una variable stringstream llamada convert, inicializada con el input de argv[1]

	int miEntero{};
	if (!(convert >> miEntero)) // hacer la conversión
		miEntero = 0; // si la conversión falla, configuramos myint a un valor predeterminado

	std::cout << "Entero obtenido: " << miEntero << '\n';

	return 0;
}



