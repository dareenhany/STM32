#ifndef DRIVER_INC_STM32F401XX_H_
#define DRIVER_INC_STM32F401XX_H_

#include <stdint.h>

#define GPIOA_BaseAddress 0x40020000
#define GPIOB_BaseAddress 0x40020400
#define GPIOC_BaseAddress 0x40020800
#define RCC_BaseAddress 0x40023800

typedef struct
{
    volatile int MODER;
    volatile int OTYPER;
    volatile int OSPEEDR;
    volatile int PUPDR;
    volatile int IDR;
    volatile int ODR;
    volatile int BSRR;
    volatile int LCKR;
    volatile int AFRL;
    volatile int AFRH;
} GPIO_def;

typedef struct
{
    volatile int CR;
    volatile int PLLCFGR;
    volatile int CFGR;
    volatile int CIR;
    volatile int AHB1RSTR;
    volatile int AHB2RSTR;
    volatile int RESERVED[2];
    volatile int AHB1ENR;
    volatile int AHB2ENR;
    volatile int RESERVED2[2];
    volatile int AHB1LPENR;
    volatile int AHB2LPENR;
    volatile int BDCR;
    volatile int CSR;
    volatile int SSCGR;
    volatile int PLLI2SCFGR;
    volatile int DCKCFGR;
} RCC_def;

#define GPIOA ((GPIO_def*) GPIOA_BaseAddress)
#define GPIOB ((GPIO_def*) GPIOB_BaseAddress)
#define GPIOC ((GPIO_def*) GPIOC_BaseAddress)
#define RCC ((RCC_def*) RCC_BaseAddress)

#endif /* DRIVER_INC_STM32F401XX_H_ */
