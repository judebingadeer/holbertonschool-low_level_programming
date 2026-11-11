# Green Tech Efficiency and Benchmarking Analysis

## Measurement Methodology

This report examines execution-time measurements from three C benchmarking exercises. All experiments were performed in the Holberton sandbox environment. The source programs were compiled using the required GCC options: `-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`. No algorithmic optimization was introduced during the comparison. The objective was to observe execution behavior rather than to maximize performance.

The baseline program performed 100,000,000 loop iterations. Its recorded execution times were 0.226836, 0.226970, 0.226826 seconds. The calculated average was 0.226877 seconds. Repeating the same computation helped examine timing consistency rather than depending on a single observation.

The algorithm comparison was also recorded across 3 runs. The naive algorithm and single-pass algorithm were measured with the original program's `clock()` instrumentation. A separate instrumentation experiment measured dataset construction, processing, and checksum reduction. All reported values were obtained from the program outputs rather than estimated manually.

## Observed Performance Differences

The naive implementation recorded times of 3.006544, 2.750823, 2.747137 seconds, giving an average of 2.834835 seconds. The single-pass implementation recorded 0.000106, 0.000106, 0.000107 seconds, with an average of 0.000106 seconds.

The ratio of the naive average to the single-pass average was 26659.89 times. The naive implementation took longer in the recorded runs on average.

The naive implementation uses nested loops and repeatedly visits earlier data elements. Its computational work grows approximately quadratically with input size. The single-pass implementation scans the data once, resulting in linear work. Importantly, the provided implementations also calculate different counts, so their recorded times demonstrate the cost of different workloads rather than a perfectly equivalent replacement.

The instrumentation experiment measured TOTAL at 0.000747 seconds, BUILD_DATA at 0.000284 seconds, PROCESS at 0.000327 seconds, and REDUCE at 0.000131 seconds. Among these three phases, PROCESS had the largest recorded duration. Timing each stage separately helped identify where the measured CPU time was spent.

## Relation Between Runtime and Energy Consumption

Execution time is useful when investigating software efficiency because programs that keep processors working for longer can require more computational resources. In the comparison experiment, the measured durations provided evidence about the processing cost associated with each implementation.

However, lower execution time does not automatically establish a specific reduction in electricity consumption. The experiments did not measure watts, processor power states, or total energy in joules. Therefore, the recorded results support conclusions about CPU execution time, not precise environmental savings.

From an engineering perspective, avoiding repeated computation can be an important step toward more efficient software. The experiments illustrate why algorithm selection deserves attention before attempting small changes to individual instructions.

## Limitations of the Experiment

Several limitations affect interpretation. First, the measurements were collected in a sandbox rather than a dedicated, isolated benchmarking machine. Other system activity may influence timings. Second, `clock()` measures processor time rather than direct electrical energy usage. Third, short execution phases can approach the timer's measurement resolution, making small differences difficult to interpret reliably.

The experiments also use fixed dataset sizes and a limited number of executions. Results from these specific inputs cannot establish performance for every workload or hardware platform. The algorithm comparison is additionally limited because the two implementations do not return the same mathematical result.

These limitations mean that the measurements should be treated as experimental evidence within the tested environment, not universal performance guarantees.

## Practical Engineering Takeaway

The central lesson is to measure before drawing conclusions. Repeated executions provide a more informative picture than a single timing value, while phase-level instrumentation identifies where processing time is concentrated.

The recorded averages and phase measurements offer a starting point for discussing efficiency. Future investigations could use more repetitions, equivalent algorithm outputs, larger input sizes, and dedicated energy-monitoring tools.

Responsible software engineering involves balancing correctness, clarity, efficiency, and measurement quality. This project demonstrates that developers should support performance claims with recorded observations and clearly distinguish measured facts from broader expectations about sustainability.
