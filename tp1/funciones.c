/** \brief Solicita al usuario un numero,para asignarlo a una variable.
 *  \param
 * \return Se retorna el numero ingresado.
 *
 */
float pedirNumero()
{   float num;
    printf("\nIngrese numero.");
    scanf("%f",&num);
    return num;
}
/** \brief Suma las variables para devolver un resultado.
 *
 * \param A Recive el primer numero ingresado por el usuario.
 * \param B Recive el segundo numero ingresado por el usuario.
 * \return Devuelve la suma de A y B.
 *
 */

float funcionSuma(float A,float B)
{
    float resultado;
    resultado=A+B;
    return resultado;
}
/** \brief Resta las variables para devolver un resultado.
 *
 * \param A Recive el primer numero ingresado por el usuario.
 * \param B Recive el segundo numero ingresado por el usuario.
 * \return Devuelve la resta de A y B.
 *
 */
float funcionResta(float A, float B)
{
    float resultado;
    resultado=A-B;
    return resultado;
}
/** \brief Multiplica las variables para devolver un resultado.
 *
 * \param A Recive el primer numero ingresado por el usuario.
 * \param B Recive el segundo numero ingresado por el usuario.
 * \return Devuelve la multiplicación de A por B.
 *
 */
float funcionMultiplicacion(float A, float B)
{
    float resultado;
    resultado=A*B;
    return resultado;
}
/** \brief Divide las variables para devolver un resultado.
 *
 * \param A Recive el primer número ingresado por el usuario.
 * \param B Recive el segundo número ingresado por el usuario.
 * \return Devuelve la división de A sobre B.
 *
 */
float funcionDivision(float A, float B)
{
    float resultado;
    resultado=A/B;
    return resultado;
}
/** \brief Factoriza a la variable A.
 *
 * \param A Recive el primer numero ingresado por el usuario.
 * \return Devuelve la multiplicación de A por todos sus antecesores.
 *
 */
unsigned long long int funcionFactorial(float A)
{   unsigned long long int resultado;
    if(A==0)
    {
        return 1;
    }
    resultado=A*funcionFactorial(A-1);
    return resultado;
}
