################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/Flash/Documents/Git/Projet5A/FP-AI-VISION1_V3.1.0/Drivers/BSP/STM32H747I-Discovery/stm32h747i_discovery.c \
D:/Flash/Documents/Git/Projet5A/FP-AI-VISION1_V3.1.0/Drivers/BSP/STM32H747I-Discovery/stm32h747i_discovery_bus.c \
D:/Flash/Documents/Git/Projet5A/FP-AI-VISION1_V3.1.0/Drivers/BSP/STM32H747I-Discovery/stm32h747i_discovery_camera.c \
D:/Flash/Documents/Git/Projet5A/FP-AI-VISION1_V3.1.0/Drivers/BSP/STM32H747I-Discovery/stm32h747i_discovery_lcd.c \
D:/Flash/Documents/Git/Projet5A/FP-AI-VISION1_V3.1.0/Drivers/BSP/STM32H747I-Discovery/stm32h747i_discovery_sd.c \
D:/Flash/Documents/Git/Projet5A/FP-AI-VISION1_V3.1.0/Drivers/BSP/STM32H747I-Discovery/stm32h747i_discovery_sdram.c 

OBJS += \
./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery.o \
./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_bus.o \
./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_camera.o \
./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_lcd.o \
./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_sd.o \
./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_sdram.o 

C_DEPS += \
./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery.d \
./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_bus.d \
./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_camera.d \
./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_lcd.d \
./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_sd.d \
./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_sdram.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery.o: D:/Flash/Documents/Git/Projet5A/FP-AI-VISION1_V3.1.0/Drivers/BSP/STM32H747I-Discovery/stm32h747i_discovery.c Drivers/BSP/STM32H747I_DISCO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H747xx -DUSE_STM32H747I_DISCO -DCORE_CM7 -DDATA_IN_ExtSDRAM -DMEMORY_SCHEME=3 -DCAMERA_CAPTURE_RES=2 -DPIXEL_FMT_CONV=1 -DSTM32IPL -DARM_MATH_CM7 -D__FPU_PRESENT=1 -c -I../../../CM7/Inc -I../../../../../Common/CM7/Inc -I../../../../../../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../../../../../../Drivers/CMSIS/Include -I../../../../../../../../Drivers/CMSIS/DSP/Include -I../../../../../../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../../../../../../Drivers/BSP/STM32H747I-Discovery -I../../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../../Drivers/BSP/Components/ov9655 -I../../../../../../../../Drivers/BSP/Components/otm8009a -I../../../../../../../../Utilities/Fonts -I../../../../../../../../Utilities/lcd -I../../../../../../../../Middlewares/ST/STM32_AI_Runtime/Inc -I../../../../../../../../Middlewares/ST/STM32_AI_Utilities/Inc -I../../../../../../../../Middlewares/ST/STM32_ImageProcessing_Library/Inc -I../../../../../../../../Middlewares/Third_Party/FatFs/src -Ofast -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_bus.o: D:/Flash/Documents/Git/Projet5A/FP-AI-VISION1_V3.1.0/Drivers/BSP/STM32H747I-Discovery/stm32h747i_discovery_bus.c Drivers/BSP/STM32H747I_DISCO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H747xx -DUSE_STM32H747I_DISCO -DCORE_CM7 -DDATA_IN_ExtSDRAM -DMEMORY_SCHEME=3 -DCAMERA_CAPTURE_RES=2 -DPIXEL_FMT_CONV=1 -DSTM32IPL -DARM_MATH_CM7 -D__FPU_PRESENT=1 -c -I../../../CM7/Inc -I../../../../../Common/CM7/Inc -I../../../../../../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../../../../../../Drivers/CMSIS/Include -I../../../../../../../../Drivers/CMSIS/DSP/Include -I../../../../../../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../../../../../../Drivers/BSP/STM32H747I-Discovery -I../../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../../Drivers/BSP/Components/ov9655 -I../../../../../../../../Drivers/BSP/Components/otm8009a -I../../../../../../../../Utilities/Fonts -I../../../../../../../../Utilities/lcd -I../../../../../../../../Middlewares/ST/STM32_AI_Runtime/Inc -I../../../../../../../../Middlewares/ST/STM32_AI_Utilities/Inc -I../../../../../../../../Middlewares/ST/STM32_ImageProcessing_Library/Inc -I../../../../../../../../Middlewares/Third_Party/FatFs/src -Ofast -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_camera.o: D:/Flash/Documents/Git/Projet5A/FP-AI-VISION1_V3.1.0/Drivers/BSP/STM32H747I-Discovery/stm32h747i_discovery_camera.c Drivers/BSP/STM32H747I_DISCO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H747xx -DUSE_STM32H747I_DISCO -DCORE_CM7 -DDATA_IN_ExtSDRAM -DMEMORY_SCHEME=3 -DCAMERA_CAPTURE_RES=2 -DPIXEL_FMT_CONV=1 -DSTM32IPL -DARM_MATH_CM7 -D__FPU_PRESENT=1 -c -I../../../CM7/Inc -I../../../../../Common/CM7/Inc -I../../../../../../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../../../../../../Drivers/CMSIS/Include -I../../../../../../../../Drivers/CMSIS/DSP/Include -I../../../../../../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../../../../../../Drivers/BSP/STM32H747I-Discovery -I../../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../../Drivers/BSP/Components/ov9655 -I../../../../../../../../Drivers/BSP/Components/otm8009a -I../../../../../../../../Utilities/Fonts -I../../../../../../../../Utilities/lcd -I../../../../../../../../Middlewares/ST/STM32_AI_Runtime/Inc -I../../../../../../../../Middlewares/ST/STM32_AI_Utilities/Inc -I../../../../../../../../Middlewares/ST/STM32_ImageProcessing_Library/Inc -I../../../../../../../../Middlewares/Third_Party/FatFs/src -Ofast -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_lcd.o: D:/Flash/Documents/Git/Projet5A/FP-AI-VISION1_V3.1.0/Drivers/BSP/STM32H747I-Discovery/stm32h747i_discovery_lcd.c Drivers/BSP/STM32H747I_DISCO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H747xx -DUSE_STM32H747I_DISCO -DCORE_CM7 -DDATA_IN_ExtSDRAM -DMEMORY_SCHEME=3 -DCAMERA_CAPTURE_RES=2 -DPIXEL_FMT_CONV=1 -DSTM32IPL -DARM_MATH_CM7 -D__FPU_PRESENT=1 -c -I../../../CM7/Inc -I../../../../../Common/CM7/Inc -I../../../../../../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../../../../../../Drivers/CMSIS/Include -I../../../../../../../../Drivers/CMSIS/DSP/Include -I../../../../../../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../../../../../../Drivers/BSP/STM32H747I-Discovery -I../../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../../Drivers/BSP/Components/ov9655 -I../../../../../../../../Drivers/BSP/Components/otm8009a -I../../../../../../../../Utilities/Fonts -I../../../../../../../../Utilities/lcd -I../../../../../../../../Middlewares/ST/STM32_AI_Runtime/Inc -I../../../../../../../../Middlewares/ST/STM32_AI_Utilities/Inc -I../../../../../../../../Middlewares/ST/STM32_ImageProcessing_Library/Inc -I../../../../../../../../Middlewares/Third_Party/FatFs/src -Ofast -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_sd.o: D:/Flash/Documents/Git/Projet5A/FP-AI-VISION1_V3.1.0/Drivers/BSP/STM32H747I-Discovery/stm32h747i_discovery_sd.c Drivers/BSP/STM32H747I_DISCO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H747xx -DUSE_STM32H747I_DISCO -DCORE_CM7 -DDATA_IN_ExtSDRAM -DMEMORY_SCHEME=3 -DCAMERA_CAPTURE_RES=2 -DPIXEL_FMT_CONV=1 -DSTM32IPL -DARM_MATH_CM7 -D__FPU_PRESENT=1 -c -I../../../CM7/Inc -I../../../../../Common/CM7/Inc -I../../../../../../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../../../../../../Drivers/CMSIS/Include -I../../../../../../../../Drivers/CMSIS/DSP/Include -I../../../../../../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../../../../../../Drivers/BSP/STM32H747I-Discovery -I../../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../../Drivers/BSP/Components/ov9655 -I../../../../../../../../Drivers/BSP/Components/otm8009a -I../../../../../../../../Utilities/Fonts -I../../../../../../../../Utilities/lcd -I../../../../../../../../Middlewares/ST/STM32_AI_Runtime/Inc -I../../../../../../../../Middlewares/ST/STM32_AI_Utilities/Inc -I../../../../../../../../Middlewares/ST/STM32_ImageProcessing_Library/Inc -I../../../../../../../../Middlewares/Third_Party/FatFs/src -Ofast -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_sdram.o: D:/Flash/Documents/Git/Projet5A/FP-AI-VISION1_V3.1.0/Drivers/BSP/STM32H747I-Discovery/stm32h747i_discovery_sdram.c Drivers/BSP/STM32H747I_DISCO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32H747xx -DUSE_STM32H747I_DISCO -DCORE_CM7 -DDATA_IN_ExtSDRAM -DMEMORY_SCHEME=3 -DCAMERA_CAPTURE_RES=2 -DPIXEL_FMT_CONV=1 -DSTM32IPL -DARM_MATH_CM7 -D__FPU_PRESENT=1 -c -I../../../CM7/Inc -I../../../../../Common/CM7/Inc -I../../../../../../../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../../../../../../../Drivers/CMSIS/Include -I../../../../../../../../Drivers/CMSIS/DSP/Include -I../../../../../../../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../../../../../../../Drivers/BSP/STM32H747I-Discovery -I../../../../../../../../Drivers/BSP/Components/Common -I../../../../../../../../Drivers/BSP/Components/ov9655 -I../../../../../../../../Drivers/BSP/Components/otm8009a -I../../../../../../../../Utilities/Fonts -I../../../../../../../../Utilities/lcd -I../../../../../../../../Middlewares/ST/STM32_AI_Runtime/Inc -I../../../../../../../../Middlewares/ST/STM32_AI_Utilities/Inc -I../../../../../../../../Middlewares/ST/STM32_ImageProcessing_Library/Inc -I../../../../../../../../Middlewares/Third_Party/FatFs/src -Ofast -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-STM32H747I_DISCO

clean-Drivers-2f-BSP-2f-STM32H747I_DISCO:
	-$(RM) ./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery.d ./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery.o ./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_bus.d ./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_bus.o ./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_camera.d ./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_camera.o ./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_lcd.d ./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_lcd.o ./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_sd.d ./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_sd.o ./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_sdram.d ./Drivers/BSP/STM32H747I_DISCO/stm32h747i_discovery_sdram.o

.PHONY: clean-Drivers-2f-BSP-2f-STM32H747I_DISCO

