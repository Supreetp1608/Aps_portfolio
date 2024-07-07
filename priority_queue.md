# Priority Queue Load Balancing

## Description

Priority Queue load balancing assigns requests to instances based on their priority. Higher priority instances handle more critical tasks first, which can be determined by CPU or memory load or other metrics.

### Key Features:

1. **Priority-Based Allocation:** Requests are processed based on their priority.
2. **Flexibility:** Allows for dynamic adjustment of priorities based on system metrics.
3. **Efficient Resource Utilization:** Ensures critical tasks are handled first, improving overall system efficiency.

### Use Case:

Priority Queue load balancing is suitable for environments where certain tasks are more critical than others, such as real-time systems, emergency response systems, or applications with varying levels of task importance.

## Implementation

Here is the C++ implementation of the Priority Queue Load Balancing algorithm. This implementation prioritizes requests based on predefined metrics.

### Code

Click [here](codes/priority_queue.cpp) to view the code for the Priority Queue Load Balancing module.
