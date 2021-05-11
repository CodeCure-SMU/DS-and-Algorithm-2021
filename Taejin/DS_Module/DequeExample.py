# DequeExample.py
import collections

dq = collections.deque()

# Push values
dq.appendleft( 2 ) # push front
dq.appendleft( 1 )
dq.append( 3 ) # push back

# Pop values
print( dq.popleft( ) ) # pop front
print( dq.pop( ) ) # pop back

# Front and Back values of deque
print( dq[0] )
print( dq[-1] )