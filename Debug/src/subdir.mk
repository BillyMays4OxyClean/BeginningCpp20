################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Ex2-1.cpp \
../src/Ex2-2.cpp \
../src/Ex2-3.cpp \
../src/Ex2-4.cpp \
../src/Ex3-1.cpp \
../src/Ex3-2.cpp \
../src/Ex3-5.cpp \
../src/Ex4-1.cpp \
../src/Ex4-2.cpp \
../src/Ex4-3.cpp \
../src/Ex4-4.cpp \
../src/Ex4-5.cpp \
../src/Ex4-6.cpp \
../src/Ex4-8.cpp \
../src/Ex5-1.cpp \
../src/Ex5-2.cpp \
../src/Ex5-3.cpp \
../src/Ex5-4.cpp \
../src/Ex5-5.cpp \
../src/Ex5-6.cpp \
../src/Ex5-7.cpp \
../src/Ex6-1.cpp \
../src/HelloWorld.cpp 

CPP_DEPS += \
./src/Ex2-1.d \
./src/Ex2-2.d \
./src/Ex2-3.d \
./src/Ex2-4.d \
./src/Ex3-1.d \
./src/Ex3-2.d \
./src/Ex3-5.d \
./src/Ex4-1.d \
./src/Ex4-2.d \
./src/Ex4-3.d \
./src/Ex4-4.d \
./src/Ex4-5.d \
./src/Ex4-6.d \
./src/Ex4-8.d \
./src/Ex5-1.d \
./src/Ex5-2.d \
./src/Ex5-3.d \
./src/Ex5-4.d \
./src/Ex5-5.d \
./src/Ex5-6.d \
./src/Ex5-7.d \
./src/Ex6-1.d \
./src/HelloWorld.d 

OBJS += \
./src/Ex2-1.o \
./src/Ex2-2.o \
./src/Ex2-3.o \
./src/Ex2-4.o \
./src/Ex3-1.o \
./src/Ex3-2.o \
./src/Ex3-5.o \
./src/Ex4-1.o \
./src/Ex4-2.o \
./src/Ex4-3.o \
./src/Ex4-4.o \
./src/Ex4-5.o \
./src/Ex4-6.o \
./src/Ex4-8.o \
./src/Ex5-1.o \
./src/Ex5-2.o \
./src/Ex5-3.o \
./src/Ex5-4.o \
./src/Ex5-5.o \
./src/Ex5-6.o \
./src/Ex5-7.o \
./src/Ex6-1.o \
./src/HelloWorld.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/HelloWorld.o: ../src/HelloWorld.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Ex2-1.d ./src/Ex2-1.o ./src/Ex2-2.d ./src/Ex2-2.o ./src/Ex2-3.d ./src/Ex2-3.o ./src/Ex2-4.d ./src/Ex2-4.o ./src/Ex3-1.d ./src/Ex3-1.o ./src/Ex3-2.d ./src/Ex3-2.o ./src/Ex3-5.d ./src/Ex3-5.o ./src/Ex4-1.d ./src/Ex4-1.o ./src/Ex4-2.d ./src/Ex4-2.o ./src/Ex4-3.d ./src/Ex4-3.o ./src/Ex4-4.d ./src/Ex4-4.o ./src/Ex4-5.d ./src/Ex4-5.o ./src/Ex4-6.d ./src/Ex4-6.o ./src/Ex4-8.d ./src/Ex4-8.o ./src/Ex5-1.d ./src/Ex5-1.o ./src/Ex5-2.d ./src/Ex5-2.o ./src/Ex5-3.d ./src/Ex5-3.o ./src/Ex5-4.d ./src/Ex5-4.o ./src/Ex5-5.d ./src/Ex5-5.o ./src/Ex5-6.d ./src/Ex5-6.o ./src/Ex5-7.d ./src/Ex5-7.o ./src/Ex6-1.d ./src/Ex6-1.o ./src/HelloWorld.d ./src/HelloWorld.o

.PHONY: clean-src

