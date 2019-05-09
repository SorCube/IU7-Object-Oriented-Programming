#ifndef MODELACTION_CPP
#define MODELACTION_CPP

#include "modelaction.h"
#include "modeldatawork.h"
#include "modelwork.h"

ErrorType modelLoadAction(const ModelType& model, const ParameterType& param)
{
	return modelLoadData(model, param.fileWorkParameters);
}

ErrorType modelSaveAction(const ModelType& model, const ParameterType& param)
{
	return modelSaveData(model, param.fileWorkParameters);
}

ErrorType modelFreeAction(const ModelType &model)
{
	return modelFree(model);
}

ErrorType modelDrawAction(const ModelType &model)
{
	return modelDrawData(model.vertices, model.edges);
}

ErrorType modelMoveAction(const ModelType& model, const ParameterType& param)
{
	return modelMoveData(model.vertices, param.moveParameters);
}

ErrorType modelScaleAction(const ModelType& model, const ParameterType& param)
{
	return modelScaleData(model.vertices, param.scaleParameters);
}

ErrorType modelRotateAction(const ModelType& model, const ParameterType& param)
{
	return modelRotateData(model.vertices, param.rotateParameters);
}

#endif // MODELACTION_CPP
