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

/** \brief add in a existing list of employees the values received as parameters
 * in the first empty position
 * \param list employee*
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or without free
 *
 */

int addEmployee(eEmployee list[], int len, int id, char name[],char lastName[],float salary,int sector);

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

void nombre(char* input,char message[],char eMessage[],char eNumMessage[], int lowLimit, int hiLimit);


//----------------------------------------------------------------------------------------------------------------------------------------

void ingresarSalario(float* valor,char message[],char eMessage[], float lowLimit, float hiLimit);




