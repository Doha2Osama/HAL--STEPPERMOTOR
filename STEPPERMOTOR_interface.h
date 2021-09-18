#ifndef STEPPERMOTOR_INTERFACE_H

#define STEPPERMOTOR_INTERFACE_H

#define STEPPER_INITIAL_ITERATION    0

#define STEPPER_TOTAL_ITERATION    512 //for 360 degree and 128 for 90 degree

void STEPPERMOTOR_voidInit(void);

void STEPPERMOTOR_voidStepperFullStep(void);

#endif