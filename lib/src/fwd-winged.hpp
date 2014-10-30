#ifndef DILAY_FWD_WINGED
#define DILAY_FWD_WINGED

#include <list>
#include <unordered_set>
#include <vector>

class WingedMesh;
class WingedFace;
class WingedEdge;
class WingedVertex;

typedef std::list          <WingedFace>    Faces;
typedef std::list          <WingedEdge>    Edges;
typedef std::list          <WingedVertex>  Vertices;

typedef std::unordered_set <WingedFace*>   FacePtrSet;
typedef std::unordered_set <WingedEdge*>   EdgePtrSet;
typedef std::unordered_set <WingedVertex*> VertexPtrSet;
typedef std::vector        <WingedFace*>   FacePtrVec;
typedef std::vector        <WingedEdge*>   EdgePtrVec;
typedef std::vector        <WingedVertex*> VertexPtrVec;

#endif
