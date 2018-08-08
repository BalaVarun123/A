import os
x = y = 'Not available.'
print('$javac Test.java')
x = os.system('javac Test.java')
if ( x == 0):
    print('$java Test')
    y = os.system('java Test')
print
print('x = '+str(x)+'\ny = '+str(y))