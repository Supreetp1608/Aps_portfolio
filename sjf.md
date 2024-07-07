# Shortest Job First (SJF) Load Balancing

## Description

The SJF algorithm assigns requests to the instance with the smallest current load, combining CPU and memory usage. This minimizes the average waiting time for requests and improves overall system performance.

### Key Features:

1. **Efficiency:** Reduces the average waiting time by processing the shortest jobs first.
2. **Load Minimization:** Assigns tasks to instances with the least load, balancing the overall system load.
3. **Performance Improvement:** Enhances the overall performance by minimizing the time tasks spend waiting to be processed.

### Use Case:

SJF is ideal for scenarios where the processing time for each request is known, and minimizing the average waiting time is crucial, such as in batch processing systems, data processing pipelines, or computational grids.

## Implementation

Here is the C++ implementation of the Shortest Job First Load Balancing algorithm. This implementation assigns requests to instances with the smallest current load.

### Code

Click [here](codes/sjf.cpp) to view the code for the SJF Load Balancing module.
