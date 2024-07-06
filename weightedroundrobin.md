# Weighted Round Robin Load Balancing

## Description

Weighted Round Robin Load Balancing is an extension of the Round Robin algorithm that takes into account different weights assigned to each instance. These weights represent the capacity or capability of each instance to handle requests. Requests are distributed to instances based on their weights in a circular order, ensuring that instances with higher weights receive more requests compared to those with lower weights.

### Key Features:

1. **Dynamic Weight Adjustment:** Allows administrators to assign higher weights to more powerful instances and lower weights to less powerful instances, reflecting their relative capacities.
2. **Flexible Load Distribution:** Provides flexibility in distributing load based on the defined weights, accommodating varying instance capabilities.
3. **Enhanced Performance:** Optimizes resource utilization by directing more requests to higher-capacity instances, improving overall system performance.

### Use Case:

Weighted Round Robin Load Balancing is suitable for environments where instances have different capacities or capabilities, such as in cloud computing environments with virtual machines of varying sizes. It ensures efficient resource allocation and supports scaling based on workload demands.

## Implementation

Here is the C++ implementation of the Weighted Round Robin Load Balancing algorithm. This implementation reads metrics from a CSV file and distributes incoming requests to instances based on their assigned weights.

### Code

Click [here](codes/weighted_round_robin.cpp) to view the code for the Weighted Round Robin Load Balancing module.
