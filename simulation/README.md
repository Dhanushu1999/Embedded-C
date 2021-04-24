# Blinky Project In Action

|When both sensors are ON|When both sensors are OFF|
|:--:|:--:|
|[True](https://github.com/Dhanushu1999/STEPIn_Emb-C/blob/main/simulation/TRUE.png)|[False](https://github.com/Dhanushu1999/STEPIn_Emb-C/blob/main/simulation/FALSE.png)|

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