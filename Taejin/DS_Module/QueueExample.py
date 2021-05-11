# Queue_Example.py
import collections

# Declaration
q = collections.deque()

# Enqueue values
q.append( 1 )
q.append( 2 )
q.append( 3 )

# Dequeue values
print( q.popleft( ) )

# Front of queue
print( q[0] );