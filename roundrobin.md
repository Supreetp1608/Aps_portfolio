
# Round Robin Load Balancing

## Description

Round Robin Load Balancing is one of the simplest and most commonly used load balancing techniques. It distributes incoming requests to a list of instances in a circular order. This ensures that each instance receives an equal number of requests over time, balancing the load across all instances.

### Key Features:

1. **Simplicity:** The Round Robin algorithm is straightforward to implement and understand.
2. **Fair Distribution:** Each instance receives approximately the same number of requests.
3. **No Need for Metrics:** It does not require monitoring metrics like CPU or memory usage, making it less resource-intensive.

### Use Case:

Round Robin Load Balancing is ideal for scenarios where all instances have similar processing capabilities and the load is evenly distributed. It is commonly used in web servers, where requests are distributed among multiple servers to balance the load.

## Implementation

Here is the C++ implementation of the Round Robin Load Balancing algorithm. This implementation reads metrics from a CSV file and distributes incoming requests to instances in a round-robin manner.

### Code

Click [here](codes/round_robin.cpp) to view the code for the Round Robin Load Balancing module.
