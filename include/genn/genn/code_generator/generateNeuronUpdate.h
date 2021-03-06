#pragma once

// Forward declarations
class ModelSpecInternal;

namespace CodeGenerator
{
class BackendBase;
class CodeStream;
}

//--------------------------------------------------------------------------
// CodeGenerator
//--------------------------------------------------------------------------
namespace CodeGenerator
{
void generateNeuronUpdate(CodeStream &os, const ModelSpecInternal &model, const BackendBase &backend, bool standaloneModules);
}
