#define EMPTY -1
#define NOT_EMPTY 0

struct
{
     int id;
     char name[51];
     char lastName[51];
     float salary;
     int sector;
     int isEmpty;

}typedef eEmployee;


/** \brief Entrega una estructura ya completa que tenga un id,nombre,apellido,salario,sectory un estado.
 *
 * \param eEmployee estructura a ser harrcodeada
 * \param len Tamanio de la estructura
 * \return void
 *
 */
void harcodeo(eEmployee lista[],int len);

//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief Busca si en el Array de estructura encuentra un espacio
            que no este acupado y te devuelve el indice del mismo
 *
 * \param lista[] Array a recorrer
 * \param len tamanio del Array
 * \return Indice del espacio vacio
 *
 */
int espacioLibre(eEmployee lista[], int len);

//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief Genera un Id sabiendo cual es el ultimo mas grande
 *
 * \param lista[] Estructura a revisar
 * \param len tamanio de la estructura
 * \return int Id generado
 *
 */
int autoId(eEmployee lista[], int len);

//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief Encuentra el id mas alto antes ingresado
 *
 * \param lista[] Estructura a revisar
 * \param len Tamanio de la estructura
 * \return Id mas alto
 *
 */
int encontrarMayor(eEmployee lista[], int len);

//----------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int initEmployees(eEmployee* list, int len);

//----------------------------------------------------------------------------------------------------------------------------------------

int agragarEmpleado(eEmployee* lista,int len);

//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief add in a existing list of employees the values received as parameters
 * in the first empty position
 * \param list employee*
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or without free space] - (0) if Ok
 *
 */

int addEmployee(eEmployee list[], int len, int id, char name[],char lastName[],float salary,int sector);

//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief find an Employee by Id en returns the index position in array.
 *
 * \param list Employee*
 * \param len int
 * \param id int
 * \return Return employee index position or (-1) if [Invalid length or NULL
 *   pointer received or employee not found]
 *
 */
int findEmployeeById(eEmployee* list, int len,int id);

//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief Remove a Employee by Id (put isEmpty Flag in 1)
 *
 * \param list Employee*
 * \param len int
 * \param id int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
 *     find a employee] - (0) if Ok
 *
 */
int removeEmployee(eEmployee* list, int len, int id);

//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief Sort the elements in the array of employees, the argument order
indicate UP or DOWN order
 *
 * \param list Employee*
 * \param len int
 * \param order int [1] indicate UP - [0] indicate DOWN
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int sortEmployees(eEmployee* list, int len, int order);

//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief Ordena de mayor a menor
 *
 * \param vector[] int
 * \param tam int
 * \return void
 *
 */
void ordenarVectorUp(eEmployee* list,int len);

//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief Ordena de menor a mayor
 *
 * \param vector[]
 * \param tam
 * \return void
 *
 */
void ordenarVectorDown(eEmployee* list,int len);

//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief print the content of employees array
 *
 * \param list Employee*
 * \param length int
 * \return int
 *
 */
int printEmployees(eEmployee* list, int length);

//----------------------------------------------------------------------------------------------------------------------------------------

/** \brief Muetra solo el empleado que se le pide
 *
 * \param list eEmployee*
 * \param index pocision del Empleado
 * \return void
 *
 */
void mostrarUnEmpleado(eEmployee* list, int index);
