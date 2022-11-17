#include <stdio.h>
#include <string.h>

char txData[30] = "Hello world\r\n";


int main() {
    printf("%s", txData);
    printf("%ld\n", strlen(txData));



    return 0;
}


// int main(void)
// {
//   /* USER CODE BEGIN 1 */

//   /* USER CODE END 1 */

//   /* MCU Configuration--------------------------------------------------------*/

//   /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
//   HAL_Init();

//   /* USER CODE BEGIN Init */

//   /* USER CODE END Init */

//   /* Configure the system clock */
//   SystemClock_Config();

//   /* USER CODE BEGIN SysInit */

//   /* USER CODE END SysInit */

//   /* Initialize all configured peripherals */
//   MX_GPIO_Init();
//   MX_DMA_Init();
//   MX_USART2_UART_Init();
//   /* USER CODE BEGIN 2 */
//   char txData[30] = "Hello World\r\n";
//   /* USER CODE END 2 */

//   /* Infinite loop */
//   /* USER CODE BEGIN WHILE */
//   while (1)
//   {
//     /* USER CODE END WHILE */
// 	  HAL_UART_Transmit(&huart2, (uint8_t*)txData, strlen(txData), 10); // 10 = timeout

// 	  HAL_Delay(500);
//     /* USER CODE BEGIN 3 */
//   }
//   /* USER CODE END 3 */
// }
