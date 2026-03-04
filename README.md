
# Motor Control Firmware Demo

This project demonstrates a modular embedded C firmware architecture with a **hardware abstraction layer (HAL)**, **drivers**, and a **task scheduler**, inspired by motor control software.  
It is designed to run as a PC simulation for demonstration purposes, without actual hardware.

---

## Features

- **Layered Architecture**
  - `hal/` – Hardware abstraction for peripherals (ADC, GPIO, PWM, CAN, SPI)
  - `drivers/` – Low-level peripheral drivers
  - `app/` – Application logic with scheduler and timed tasks
  - `common/` – Shared definitions and utilities

- **Task Scheduler**
  - Supports multiple periodic tasks with configurable periods
  - Simulated timer ticks for PC-based testing
  - Modular and reusable: tasks are defined in a separate module (`tasks.c`)

- **Simulation-Friendly**
  - No actual hardware required; outputs printed to the console
  - Shows initialization order and task execution timing

---

## Directory Structure

```
motor_control/
├── app/
│ ├── main.c
│ ├── scheduler/
│ └── tasks/
├── bsp/
├── common/
├── core/
├── drivers/
├── hal/
├── safety/
├── services/
├── state_machine/
├── tests/
├── CMakeLists.txt
└── README.md
```


---

## Build Instructions

### Requirements

- C compiler (GCC)
- CMake (≥ 3.20)
- Ninja (or Make)

### Build and Run

```bash
# Create build directory and generate Ninja files
cmake -S . -B build -G Ninja

# Build project
cmake --build build

# Run the demo executable
./build/app/motor_control
```

## Adding New Tasks

1. Define the task function in `tasks.c`.
2. Add the task to the `tasks[]` array with its period in ticks.
3. Rebuild the project. The scheduler automatically executes the task at the configured intervals.

## Design Notes

- The scheduler is independent of hardware timers, ticks can be simulated.
- HAL functions simulate peripheral initialization.
- `tasks.c` and `scheduler.c` are modular and reusable across projects.
- Follows clean layering: HAL → Drivers → Application → Tasks.
- Layering ensures low-level drivers do not depend on application logic, keeping code maintainable and testable.

## License

MIT License
