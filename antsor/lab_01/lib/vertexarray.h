#ifndef VERTEXARRAY_H
#define VERTEXARRAY_H

#include "error.h"
#include "vertex.h"
#include "filework.h"

struct VertexArrayType
{
    VertexType* vertices;
    unsigned int size;
};

ErrorType initializeVertexArray(VertexArrayType& vertexArray);

ErrorType freeVertexArray(VertexArrayType& vertexArray);

ErrorType loadVertexArray(VertexArrayType& vertexArray, FileWorkType file);

ErrorType saveVertexArray(const VertexArrayType& vertexArray,
						  FileWorkType file);

#endif // VERTEXARRAY_H

