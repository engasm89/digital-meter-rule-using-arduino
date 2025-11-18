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

// Entry point computing measured distance
// Main routine: orchestrates the digital meter rule using arduino scenario
int main(void) { // Begin main function
  printf("Digital Meter Rule using Arduino (IoT Measurement)\n"); // Header line
  for (int i = 0; i < 10; ++i) { // Loop over 10 readings
    pulses += 5; // Simulate 5 pulses per interval
    float mm = pulses * MM_PER_PULSE; // Compute length in millimeters
    printf("{\"pulses\":%d,\"mm\":%.2f}\n", pulses, mm); // Print JSON measurement
    usleep(300000); // Delay 300 ms
  } // End loop
  return 0; // Return success
} // End main

