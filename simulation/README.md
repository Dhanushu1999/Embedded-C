# Main

## Code 
```
	for(;;)
	{
        Readsensorstatus();	//acticvity1
	}
```

# Activity1

|When both sensors are ON|When both sensors are OFF|
|:--:|:--:|
|![True](https://github.com/Dhanushu1999/STEPIn_Emb-C/blob/main/simulation/TRUE.png)|![False](https://github.com/Dhanushu1999/STEPIn_Emb-C/blob/main/simulation/FALSE.png)|

## Code 
```
    if(check if both are HIGH)
	{
		change_led_state(HIGH);
		return Read_ADC(channel0) to temp; //activity2
		GeneratePWM(temp); //activity3
		delay_ms(LED_ON_TIME);
	}
	else
	{
		change_led_state(LOW);
		delay_ms(LED_OFF_TIME);
	}
```
# Activity2

|ADC value 1|ADC value 2|
|:--:|:--:|
|![Value1](https://github.com/Dhanushu1999/STEPIn_Emb-C/blob/main/simulation/ADC_value1.png)|![Value2](https://github.com/Dhanushu1999/STEPIn_Emb-C/blob/main/simulation/ADC_value2.png)|

## Code 
```
    SET ADCchannel;
	Start single conversion;

	while(wait for conversion to complete);
	return ADCvalue;
```

# Activity3

|PWM value when HIGH|PWM value when LOW|
|:--:|:--:|
|![High](https://github.com/Dhanushu1999/STEPIn_Emb-C/blob/main/simulation/PWM_HIGH.png)|![Low](https://github.com/Dhanushu1999/STEPIn_Emb-C/blob/main/simulation/PWM_LOW.png)|

## Code 
```
    if(check for ADCvalue)
	{
		return corresponding PWM value;
		UARTWrite(Corresponding data);
		delay_ms(LED_ON_TIME);
	}
```

# Activity4

|UART message for 5V|UART message for 0V|
|:--:|:--:|
|![highV](https://github.com/Dhanushu1999/STEPIn_Emb-C/blob/main/simulation/UART_5V.png)|![LowV](https://github.com/Dhanushu1999/STEPIn_Emb-C/blob/main/simulation/UART_0V.png)|

## Code 
```
	USARTRead()
	{
		while(Check if data is received into buffer);
		return buffred data;
	}
	UARTWrite(data recived from activity3)
	{
		while(Check if data is not written into buffer);
		write buffred data to port;
	}
```