#Eulercircuits

Is there a cyclic path that uses each edge in the graph extracly once?
This problem was first studied by L. Euler in 1736. Starting with a special case known as the _bridges of Königsberg_ problem. Swiss town of Königsberg had seven bridges connecting riverbanks and islands, and people in town found that they could not seem to cross all the bridges without crossing one of them twice. The problem amounts to the Euler tour problem.

A graph has an Euler tour if and only if it is connected and all its vertices are of even degree.

##Hierholzer's algorithm
To find an Euler circuit we can use Hierholzer's algorithm which finds an Euler circuit in lineair time.

We traverse a cyclic path, deleting the edges encountered and pushing onto a stack the vertices that we encouter, so that 

1. we can trace back along that path, printing out its edges
2. we can check each vertex for additional side paths