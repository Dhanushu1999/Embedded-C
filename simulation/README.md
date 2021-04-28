# Activity1

|When both sensors are ON|When both sensors are OFF|
|:--:|:--:|
|![True](https://github.com/Dhanushu1999/STEPIn_Emb-C/blob/main/simulation/TRUE.png)|![False](https://github.com/Dhanushu1999/STEPIn_Emb-C/blob/main/simulation/FALSE.png)|

## Code 
```
	for(;;)
	{
        if(check if both are HIGH)
		{
			change_led_state(HIGH);
			delay_ms(LED_ON_TIME);
		}
		else
		{
			change_led_state(LOW);
			delay_ms(LED_OFF_TIME);
		}
		
	}
```

# Activity2

|ADC value 1|ADC value 2|
|:--:|:--:|
|![Value1](https://github.com/Dhanushu1999/STEPIn_Emb-C/blob/main/simulation/ADC_value1.png)|![Value2](https://github.com/Dhanushu1999/STEPIn_Emb-C/blob/main/simulation/ADC_value2.png)|

## Code 
```
	for(;;)
	{
        if(check if both are HIGH)
		{
			change_led_state(HIGH);
			delay_ms(LED_ON_TIME);
		}
		else
		{
			change_led_state(LOW);
			delay_ms(LED_OFF_TIME);
		}
		
	}
```