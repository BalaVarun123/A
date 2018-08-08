import os
x = y = 'Not available.'
print('$gcc Test.c')
x = os.system('gcc Test.c')
if ( x == 0):
    print('$./a.out')
    y = os.system('./a.out')
print
print('x = '+str(x)+'\ny = '+str(y))
