/*
 * Course: Digital Meter Rule Using Arduino
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Digital Meter Rule Using Arduino" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Arduino)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/digital-meter-rule-using-arduino/
 * Repository: https://github.com/engasm89/digital-meter-rule-using-arduino
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

/*
 * Course: Digital Meter Rule Using Arduino
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Digital Meter Rule Using Arduino
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for measurement output
#include <unistd.h> // Include POSIX sleep for timing

// Simulated pulses to compute length as a digital meter rule
static int pulses = 0; // Initialize pulse count
static const float MM_PER_PULSE = 1.0f; // Define millimeters per pulse

// Program entry point point computing measured distance
// Main routine: orchestrates the digital meter rule using arduino scenario
int main(void) { // Main function implementation function
  printf("Digital Meter Rule using Arduino (IoT Measurement)\n"); // Header line
  for (int i = 0; i < 10; ++i) { // Loop over 10 readings
    pulses += 5; // Simulate 5 pulses per interval
    float mm = pulses * MM_PER_PULSE; // Compute length in millimeters
    printf("{\"pulses\":%d,\"mm\":%.2f}\n", pulses, mm); // Print JSON measurement
    usleep(300000); // Delay 300 ms
  } // End loop
  return 0; // Return success
} // End of main function

