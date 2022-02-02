################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Utilities/subdir.mk
-include Middlewares/STM32_ImageProcessing_Library/subdir.mk
-include Middlewares/STM32_AI_Utilities/subdir.mk
-include Middlewares/FatFs/subdir.mk
-include Drivers/STM32H7xx_HAL_Driver/subdir.mk
-include Drivers/BSP/STM32H747I_DISCO/subdir.mk
-include Drivers/BSP/Components/subdir.mk
-include Common/subdir.mk
-include Application/STM32CubeIDE/subdir.mk
-include Application/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := STM32H747I-DISCO_PeopleCounting_CM7
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
STM32H747I-DISCO_PeopleCounting_CM7.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
STM32H747I-DISCO_PeopleCounting_CM7.list \

OBJCOPY_BIN += \
STM32H747I-DISCO_PeopleCounting_CM7.bin \


# All Target
all: main-build

# Main-build Target
main-build: STM32H747I-DISCO_PeopleCounting_CM7.elf secondary-outputs

# Tool invocations
STM32H747I-DISCO_PeopleCounting_CM7.elf: $(OBJS) $(USER_OBJS) D:\Flash\Documents\Git\Projet5A\FP-AI-VISION1_V3.1.0\Projects\STM32H747I-DISCO\Applications\PeopleCounting\STM32CubeIDE\CM7\STM32H747XIHx_FLASH_CM7_Full_Internal_Fps.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "STM32H747I-DISCO_PeopleCounting_CM7.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"D:\Flash\Documents\Git\Projet5A\FP-AI-VISION1_V3.1.0\Projects\STM32H747I-DISCO\Applications\PeopleCounting\STM32CubeIDE\CM7\STM32H747XIHx_FLASH_CM7_Full_Internal_Fps.ld" --specs=nosys.specs -Wl,-Map="STM32H747I-DISCO_PeopleCounting_CM7.map" -Wl,--gc-sections -static -L../../../../../../../Middlewares/ST/STM32_AI_Runtime/lib -L../../../CM7/lib/libpeopledetect -u _printf_float --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

STM32H747I-DISCO_PeopleCounting_CM7.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "STM32H747I-DISCO_PeopleCounting_CM7.list"
	@echo 'Finished building: $@'
	@echo ' '

STM32H747I-DISCO_PeopleCounting_CM7.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "STM32H747I-DISCO_PeopleCounting_CM7.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) STM32H747I-DISCO_PeopleCounting_CM7.bin STM32H747I-DISCO_PeopleCounting_CM7.elf STM32H747I-DISCO_PeopleCounting_CM7.list default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
