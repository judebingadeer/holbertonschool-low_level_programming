# Algorithmic Efficiency Comparison

## Environment and Methodology

- Both algorithms were measured in the same sandbox.
- Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long
- Three consecutive executions were performed.
- Execution times were measured by the program using clock().

## Raw Execution Results

### Run 1

```text
Naive algorithm result: 625025000
Naive algorithm time: 3.006544 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000106 seconds
```

### Run 2

```text
Naive algorithm result: 625025000
Naive algorithm time: 2.750823 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000106 seconds
```

### Run 3

```text
Naive algorithm result: 625025000
Naive algorithm time: 2.747137 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000107 seconds
```

## Average Execution Times

- Naive algorithm average: 2.834835 seconds
- Single-pass algorithm average: 0.000106 seconds

## Relative Performance

The naive algorithm is approximately 26659.89 times slower than the single-pass algorithm.

## Interpretation

The naive implementation repeatedly scans earlier elements using nested loops, while the single-pass implementation scans the data once.
The measured runtime difference demonstrates how algorithm choice affects CPU execution time.
These measurements do not directly measure electrical energy consumption.
