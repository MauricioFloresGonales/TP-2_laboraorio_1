

/** \brief Valida quee si o si se ingrese un nombre que incluuyan solo letras
 *
 * \param input variable donde se va a guardar el dato
 * \param message[] Consigna
 * \param eMessage[] Mensaje de Error
 * \param eNumMessage[] Mensaje de Error si se ingresa un numero
 * \param lowLimit minima cantidad de caracteres
 * \param hiLimit maxima cantidad de caracteres
 * \return void
 *
 */
void nombre(char* input,char message[],char eMessage[],char eNumMessage[], int lowLimit, int hiLimit);


//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief Valida que se ingrese solo numeros enteros y/o flotantes que entren en el rango
 *
 * \param valor variable donde se va a guardar el dato
 * \param message[] Consigna
 * \param eMessage[] Mensaje de Error al ingrear una letra o un numemro fuera de rango
 * \param lowLimit Rango minimo
 * \param hiLimit Rango maximo
 * \return void
 *
 */
void ingresarSalario(float* valor,char message[],char eMessage[], float lowLimit, float hiLimit);

//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief Valida que se ingrese solo numeros enteros que entren en el rango
 *
 * \param valor variable donde se va a guardar el dato
 * \param message[] Consigna
 * \param eMessage[] Mensaje de Error al ingrear una letra o un numemro fuera de rango
 * \param lowLimit Rango minimo
 * \param hiLimit Rango maximo
 * \return void
 *
 */
void numero(int* valor,char message[],char eMessage[],int lowLimit, int hiLimit);

//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief Ordena de mayor a menor
 *
 * \param vector[] int
 * \param tam int
 * \return void
 *
 */
void ordenarVectorUp(int vector[],int tam);

//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief Ordena de menor a mayor
 *
 * \param vector[]
 * \param tam
 * \return void
 *
 */
void ordenarVectorDown(int vector[],int tam);
