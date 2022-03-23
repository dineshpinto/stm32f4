# STM32F4 Discovery Breaker Board documentation

## M8190A AWG interface

```shell
    9       7       5       3       1       19      17      15      13      11
10      8       6       4       2       20      18      16      14      12  
```

| AWG pin no. | AWG pin name  |    uC| 
| --- | --- | --- | 
|1 |  NC    |      - |
|2 |  GND   |      GND|
|3 |  Load  |      PB14|
|4 |  Data_Select |PB15 |
|5 |  D0    |      PB0|
|6 |  D1    |      PB1|
|7 |  GND   |      GND|
|8 |  D2    |      PB2|
|9 |  D3    |      PB3|
|10|  D4    |      PB4|
|11|  D5    |      PB5|
|12|  D6    |      PB6|
|13|  D7    |      PB7|
|14|  GND   |      GND|
|15|  D8     |     PB8|
|16|  D9     |     PB9|
|17|  D10    |     PB10|
|18|  D11    |     PB11|
|19|  GND    |     GND|
|20|  D12    |     PB12|


## SMA interfaces (breakout board)

| uC | Pin  | 
| --- | --- | 
|UART4_TX  |  PA0 |
|UART4_RX  |  PA1 |
|USART2_TX  | PA2 |
|USART2_RX  | PA3 |
|UART5_TX   | PC12 |
|UART5_RX   | PD2 |
|USART6_TX  | PC6 |
|USART6_RX  | PC7 |
|GPIO0  | PE6 |
|GPIO1  | PE7 |

## Restricted pins
### LED

| Pin | LED color  | 
| --- | --- | 
| PD12  |   Green | 
| PD13  |   Orange |  
| PD14  |   Red | 
| PD15  |   Blue | 

### Pushbuttons
PA0 is connected to both UART4_TX and User_Pushbutton. If the SMA at UART4_TX is disconnected, the pushbutton should work just fine.

