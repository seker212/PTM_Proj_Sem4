#include "joystick.hpp"

	void Joystick::getJoystick(){
		HAL_ADC_Start(&hadc1);
		HAL_ADC_Start(&hadc2);

		if(HAL_ADC_PollForConversion(&hadc1, 10) == HAL_OK)
			{
				value = HAL_ADC_GetValue(&hadc1);
			}
				if(HAL_ADC_PollForConversion(&hadc2, 10) == HAL_OK)
			{
				value2 = HAL_ADC_GetValue(&hadc2);
			}
	}
