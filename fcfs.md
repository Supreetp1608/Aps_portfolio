# First-Come, First-Served (FCFS) Load Balancing

## Description

The FCFS load balancing algorithm assigns incoming requests to instances in the order they arrive. This method ensures that each request is handled sequentially, maintaining the order of arrival.

### Key Features:

1. **Simplicity:** Easy to implement and understand.
2. **Order Preservation:** Maintains the order of incoming requests.
3. **Fairness:** Ensures each request is handled without any priority, providing equal opportunity for all requests.

### Use Case:

FCFS is ideal for scenarios where the order of processing requests is crucial, such as in ticketing systems, customer service queues, or any system where requests must be handled in the sequence they arrive.

## Implementation

Here is the C++ implementation of the FCFS Load Balancing algorithm. This implementation assigns requests to instances based on their arrival order.

### Code

Click [here](codes/fcfs.cpp) to view the code for the FCFS Load Balancing module.
