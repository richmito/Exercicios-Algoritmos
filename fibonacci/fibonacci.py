i=1
ant=0
atual=1
print(ant)
print(atual)
while i<10:
    numAux = ant+atual
    print(numAux)
    ant=atual
    atual=numAux
    i+=1


