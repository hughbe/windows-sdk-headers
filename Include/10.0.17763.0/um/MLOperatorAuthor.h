//-----------------------------------------------------------------------------
//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//
//-----------------------------------------------------------------------------
#pragma once

#if defined(__cplusplus)
#if (!defined(_MSC_VER)) || (_MSC_VER >= 1700)

#if !defined(COM_NO_WINDOWS_H)
#include <unknwn.h>
#endif /* !defined(COM_NO_WINDOWS_H) */

#include <cstdint>
#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

static_assert(sizeof(bool) == 1, "Unsupported size for bool type");

// Attribute types with numeric values matching the ONNX specification.
enum class MLOperatorAttributeType : uint32_t 
{
    Undefined = 0,
    Float = 2,
    Int = 3,
    String = 4,
    FloatArray = 7,
    IntArray = 8,
    StringArray = 9
};
 
// Tensor data types with numeric values matching the ONNX specification.
enum class MLOperatorTensorDataType : uint32_t 
{
    Undefined = 0,
    Float = 1,
    UInt8 = 2,
    Int8 = 3,
    UInt16 = 4,
    Int16 = 5,
    Int32 = 6,
    Int64 = 7,
    String = 8,
    Bool = 9,
    Float16 = 10,
    Double = 11,
    UInt32 = 12,
    UInt64 = 13,
    Complex64 = 14,
    Complex128 = 15
};
 
// Types of input and output edges for data flowing through an operator.
enum class MLOperatorEdgeType : uint32_t 
{
    Undefined = 0,
    Tensor = 1,
};
 
// Description of input and output edges for data flowing through an operator.
struct MLOperatorEdgeDescription 
{
    MLOperatorEdgeType edgeType;
 
    union 
    {
        uint64_t reserved;
        MLOperatorTensorDataType tensorDataType;
    };
};
 
// Operator information used while kernels are constructed and while shape and type
// inferencing functions are called.
interface __declspec(uuid("4B1B1759-EC40-466C-AAB4-BEB5347FD24C"))
IMLOperatorAttributes : IUnknown
{
    // Gets the count of elements in an attribute.  May be used to determine if an
    // attribute of any type exists.
    STDMETHOD(GetAttributeElementCount)( 
        _In_z_ const char* name,
        MLOperatorAttributeType type,
        _Out_ uint32_t* elementCount
        ) const noexcept PURE;
 
    // Gets the array of values in a numeric attribute.
    STDMETHOD(GetAttribute)(
        _In_z_ const char* name,
        MLOperatorAttributeType type,
        uint32_t elementCount,
        size_t elementByteSize,
        _Out_writes_bytes_(elementCount * elementByteSize) void* value
        ) const noexcept PURE;
 
    // Gets the length of an element within a UTF-8 string attribute,
    // including null termination.
    STDMETHOD(GetStringAttributeElementLength)(
        _In_z_ const char* name,
        uint32_t elementIndex,
        _Out_ uint32_t* attributeElementByteLength
        ) const noexcept PURE;
 
    // Gets the contents of an element within a UTF-8 string attribute.  The size
    // includes null termination.
    STDMETHOD(GetStringAttributeElement)(
        _In_z_ const char* name,
        uint32_t elementIndex,
        uint32_t attributeElementByteLength,
        _Out_writes_(uint32_t) char* attributeElement
        ) const noexcept PURE;
};
 
// Information about tensor shapes used while kernel are constructed.
interface __declspec(uuid("F20E8CBE-3B28-4248-BE95-F96FBC6E4643"))
IMLOperatorTensorShapeDescription : IUnknown
{
    STDMETHOD(GetInputTensorDimensionCount)(
        uint32_t inputIndex, 
        _Out_ uint32_t* dimensionCount
        ) const noexcept PURE;
 
    STDMETHOD(GetInputTensorShape)(
        uint32_t inputIndex, 
        uint32_t dimensionCount, 
        _Out_writes_(dimensionCount) uint32_t* dimensions
        ) const noexcept PURE;
 
    // HasOutputShapeDescription returns false if and only if the kernel was not registered with
    // a shape inferrer.
    STDMETHOD_(bool, HasOutputShapeDescription)() const noexcept PURE;
 
    STDMETHOD(GetOutputTensorDimensionCount)(
        uint32_t outputIndex, 
        _Out_ uint32_t* dimensionCount
        ) const noexcept PURE;
 
    STDMETHOD(GetOutputTensorShape)(
        uint32_t outputIndex, 
        uint32_t dimensionCount, 
        _Out_writes_(dimensionCount) uint32_t* dimensions
        ) const noexcept PURE;
};
 
// Operator information used while kernel are constructed.
interface __declspec(uuid("5459B53D-A0FC-4665-ADDD-70171EF7E631"))
IMLOperatorKernelCreationContext : public IMLOperatorAttributes 
{
    STDMETHOD_(uint32_t, GetInputCount)() const noexcept PURE;
    STDMETHOD_(uint32_t, GetOutputCount)() const noexcept PURE;
 
    // Whether an input or output is provided.  Always true except for optional inputs and outputs.
    STDMETHOD_(bool, IsInputValid)(uint32_t inputIndex) const noexcept PURE;
    STDMETHOD_(bool, IsOutputValid)(uint32_t outputIndex) const noexcept PURE;
 
    STDMETHOD(GetInputEdgeDescription)(
        uint32_t inputIndex, 
        _Out_ MLOperatorEdgeDescription* edgeDescription
        ) const noexcept PURE;
 
    STDMETHOD(GetOutputEdgeDescription)(
        uint32_t outputIndex, 
        _Out_ MLOperatorEdgeDescription* edgeDescription
        ) const noexcept PURE;
 
    // HasTensorShapeDescription returns false if and only if the kernel is registered using
    // MLOperatorKernelOptions::AllowDynamicInputTensorSizes.
    STDMETHOD_(bool, HasTensorShapeDescription)() const noexcept PURE;
 
    STDMETHOD(GetTensorShapeDescription)(
         _Outptr_ IMLOperatorTensorShapeDescription** shapeDescription
        ) const noexcept PURE;
 
    // Returns a handle whose supported interfaces vary based on the kernel type.
    STDMETHOD_(void, GetExecutionInterface)(
        _Outptr_result_maybenull_ IUnknown** executionObject
        ) const noexcept PURE;
};
 
// Tensors used by implementations of IMLOperatorKernel::Compute.
interface __declspec(uuid("7FE41F41-F430-440E-AECE-54416DC8B9DB"))
IMLOperatorTensor : IUnknown
{
    STDMETHOD_(uint32_t, GetDimensionCount)() const noexcept PURE;
 
    STDMETHOD(GetShape)(
        uint32_t dimensionCount,
        _Out_writes_(dimensionCount) uint32_t* dimensions
        ) const noexcept PURE;
 
    STDMETHOD_(MLOperatorTensorDataType, GetTensorDataType)() const noexcept PURE;
 
    // Whether the tensor's memory is CPU-addressable.  This is controlled
    // by the registration parameters of the kernel.
    STDMETHOD_(bool, IsCpuData)() const noexcept PURE;
 
    // Whether the tensor's memory is an interface type, or byte-addressable memory.
    // This is controlled by the registration parameters of the kernel. If
    // this returns true, then the caller must call GetDataInterface.
    STDMETHOD_(bool, IsDataInterface)() const noexcept PURE;
 
    // Returns a pointer to byte-addressable memory.  Used when IsDataInterface is false.
    STDMETHOD_(void*, GetData)() noexcept PURE; 
    
    // Returns a pointer to an interface for accessing the tensor's data. 
    // Used when IsDataInterface is true.
    STDMETHOD_(void, GetDataInterface)(
        _Outptr_result_maybenull_ IUnknown** dataInterface
    ) noexcept PURE;
};
 
// Context used by IMLOperatorKernel::Compute.
interface __declspec(uuid("82536A28-F022-4769-9D3F-8B278F84C0C3"))
IMLOperatorKernelContext : IUnknown
{
    // Returns null for optional inputs which do not exist in a graph. 
    STDMETHOD(GetInputTensor)(
        uint32_t inputIndex, 
        _Outptr_result_maybenull_ IMLOperatorTensor** tensor
        ) const noexcept PURE;
 
    // If the kernel is registered without a shape inference method, then the overload of
    // GetOutputTensor consuming the tensor's shape must be called.
    // Returns null for optional inputs which do not exist in a graph.
    STDMETHOD(GetOutputTensor)(
        uint32_t outputIndex, 
        _Outptr_result_maybenull_ IMLOperatorTensor** tensor
        ) noexcept PURE;
 
    // Returns null for optional inputs which do not exist in a graph.
    STDMETHOD(GetOutputTensor)(
        uint32_t outputIndex,
        uint32_t dimensionCount,
        _In_reads_(dimensionCount) const uint32_t* dimensionSizes,
        _Outptr_result_maybenull_ IMLOperatorTensor** tensor
        ) noexcept PURE;
 
    STDMETHOD(AllocateTemporaryData)(size_t size, _COM_Outptr_ IUnknown** data) const = 0;
 
    // Returns a handle whose supported interfaces vary based on the kernel type.
    STDMETHOD_(void, GetExecutionInterface)(
        _Outptr_result_maybenull_ IUnknown** executionObject
    ) const noexcept PURE;
};
 
interface __declspec(uuid("11C4B4A0-B467-4EAA-A1A6-B961D8D0ED79"))
IMLOperatorKernel : IUnknown 
{
    // Computes the outputs of the kernel.  This may be called multiple times
    // simultaneously within the same instance of the class.  Implementations
    // of this method must be thread-safe.
    STDMETHOD(Compute)(IMLOperatorKernelContext* context) noexcept PURE;
};
 
// Edge options used to define operator schema.
enum class MLOperatorParameterOptions : uint32_t 
{
    Single = 0,
    Optional = 1,
    Variadic = 2,
};
 
// How an edge type is defined within the edge description in an operator schema.
enum class MLOperatorSchemaEdgeTypeFormat 
{
    // The type is defined using MLOperatorEdgeDescription.
    EdgeDescription = 0,
 
    // The type is a string which is part of the operator definition and described in its schema.
    Label = 1,
};
 
// Edge information used to define operator schema.
struct MLOperatorSchemaEdgeDescription
{
    MLOperatorParameterOptions options;
 
    MLOperatorSchemaEdgeTypeFormat typeFormat;
    union 
    {
        const void* reserved;
        const char* typeLabel;
        MLOperatorEdgeDescription edgeDescription;
    };
};
 
// Constraints upon the types of edges supported by kernels and by operators in general.
struct MLOperatorEdgeTypeConstrant 
{
    // The label of the type for which the constraint is being defined.
    const char* typeLabel;
 
    // The set of allowed types for the constraint.
    _Field_size_opt_(allowedTypeCount) const MLOperatorEdgeDescription* allowedTypes;
    uint32_t allowedTypeCount;
};
 
interface __declspec(uuid("105B6B29-5408-4A68-9959-09B5955A3492"))
IMLOperatorShapeInferenceContext : public IMLOperatorAttributes 
{
    STDMETHOD_(uint32_t, GetInputCount)() const noexcept PURE;
    STDMETHOD_(uint32_t, GetOutputCount)() const noexcept PURE;
 
    // Whether an input or output is provided.  Always true except for optional inputs and outputs.
    STDMETHOD_(bool, IsInputValid)(uint32_t inputIndex) const noexcept PURE;
    STDMETHOD_(bool, IsOutputValid)(uint32_t outputIndex) const noexcept PURE;
 
    STDMETHOD(GetInputEdgeDescription)(
        uint32_t inputIndex,
        _Out_ MLOperatorEdgeDescription* edgeDescription
        ) const noexcept PURE;
 
    STDMETHOD(GetInputTensorDimensionCount)(
        uint32_t inputIndex, 
        _Out_ uint32_t* dimensionCount
        ) const noexcept PURE;
 
    STDMETHOD(GetInputTensorShape)(
        uint32_t inputIndex, 
        uint32_t dimensionCount, 
        _Out_writes_(dimensionCount) uint32_t* dimensions
        ) const noexcept PURE;
 
    STDMETHOD(SetOutputTensorShape)(
        uint32_t outputIndex, 
        uint32_t dimensionCount, 
        const uint32_t* dimensions
        ) noexcept PURE;
};
 
interface __declspec(uuid("EC893BB1-F938-427B-8488-C8DCF775F138"))
IMLOperatorTypeInferenceContext : public IMLOperatorAttributes 
{
    STDMETHOD_(uint32_t, GetInputCount)() const noexcept PURE;
    STDMETHOD_(uint32_t, GetOutputCount)() const noexcept PURE;
 
    // Whether an input or output is provided.  Always true except for optional inputs and outputs.
    STDMETHOD_(bool, IsInputValid)(uint32_t inputIndex) const noexcept PURE;
    STDMETHOD_(bool, IsOutputValid)(uint32_t outputIndex) const noexcept PURE;
 
    STDMETHOD(GetInputEdgeDescription)(
        uint32_t inputIndex,
        _Out_ MLOperatorEdgeDescription* edgeDescription
        ) const noexcept PURE;
 
    STDMETHOD(SetOutputEdgeDescription)(
        uint32_t outputIndex, 
        const MLOperatorEdgeDescription* edgeDescription
        ) const noexcept PURE;
};
 
// Callback interface to compute the output types. This should be used in cases where
// MLOperatorSchemaDescription cannot express an operator's type mapping declaratively.
interface __declspec(uuid("781AEB48-9BCB-4797-BF77-8BF455217BEB"))
IMLOperatorTypeInferrer : IUnknown
{
    STDMETHOD(InferOutputTypes)(
        IMLOperatorTypeInferenceContext* context
        ) noexcept PURE;
};

// Callback interface to compute shapes of output tensors.
interface __declspec(uuid("540BE5BE-A6C9-40EE-83F6-D2B8B40A7798"))
IMLOperatorShapeInferrer : IUnknown
{
    STDMETHOD(InferOutputShapes)(
        IMLOperatorShapeInferenceContext* context
        ) noexcept PURE;
}; 

struct MLOperatorAttribute 
{
    const char* name;
    MLOperatorAttributeType type;
    bool required;
};
 
// Attribute name and value.  Used to supply default attribute values.
struct MLOperatorAttributeNameValue 
{
    const char* name;
    MLOperatorAttributeType type;
    uint32_t valueCount;
 
    union 
    {
        const void* reserved;
        _Field_size_opt_(valueCount) const int64_t* ints;
        _Field_size_opt_(valueCount) const char* const* strings;
        _Field_size_opt_(valueCount) const float* floats;
    };
};
 
// Descriptions of operators which are independent of kernel implementations.
struct MLOperatorSchemaDescription
{
    const char* name;
 
    // The operator set version at which this operator was introduced with most recent change
    // For example, ONNX 1.2 exposes up to version 7 of the operator set for the ONNX domain.
    int32_t operatorSetVersionAtLastChange;
 
    _Field_size_opt_(inputCount) const MLOperatorSchemaEdgeDescription* inputs;
    uint32_t inputCount;
 
    _Field_size_opt_(outputCount) const MLOperatorSchemaEdgeDescription* outputs;
    uint32_t outputCount;
 
    _Field_size_opt_(typeConstraintCount) const MLOperatorEdgeTypeConstrant* typeConstraints;
    uint32_t typeConstraintCount;
 
    _Field_size_opt_(attributeCount) const MLOperatorAttribute* attributes;
    uint32_t attributeCount;
 
    // Default attributes, used for validation.  Default attributes provided
    // when registering kernels must be consistent.  Only the defaults provided
    // in schema registrations are used to automatically set missing values.
    _Field_size_opt_(defaultAttributeCount) const MLOperatorAttributeNameValue* defaultAttributes;
    uint32_t defaultAttributeCount;
};
 
struct MLOperatorSetId 
{
    // The domain of the operator, for example, "ai.onnx.ml", or an empty string
    // for the ONNX domain.
    const char* domain;
    int32_t version;
};
 
enum class MLOperatorKernelOptions : uint32_t 
{
    None = 0,
 
    // Whether the shapes of input tensors are allowed to vary across invocations
    // of an operator kernel instance.  If this is not set, kernel instances may query input
    // tensor shapes during creation, and front-load initialization work which depends
    // on those shapes.  Setting this may improve performance in some cases, but caches 
    // accumulated by kernels during computation must be managed in a thread-safe fashion.
    AllowDynamicInputShapes = 1,
};
 
enum class MLOperatorExecutionType : uint32_t 
{
    Undefined = 0,
    Cpu = 1,
    D3D12 = 2
};

struct MLOperatorKernelDescription
{
    const char* domain;
    const char* name;
 
    // The operator version at which this kernel becomes valid.  The maximum valid
    // version of the kernel is inferred based on registrations of schema for operator
    // sets containing breaking changes.
    int32_t minimumOperatorSetVersion;
    
    MLOperatorExecutionType executionType;
 
    _Field_size_opt_(typeConstraintCount) const MLOperatorEdgeTypeConstrant* typeConstraints;
    uint32_t typeConstraintCount;
 
    // Default attributes, used for automatically setting missing values.
    // Default attributes provided in schema registrations must be consistent.
    // Only the defaults provided in kernel registrations are used to automatically
    // set missing values.
    _Field_size_opt_(defaultAttributeCount) const MLOperatorAttributeNameValue* defaultAttributes;
    uint32_t defaultAttributeCount;
 
    // Options for the kernel which apply to all execution provider types.
    MLOperatorKernelOptions options;
 
    // Options for the kernel which are specific to the execution provider type.
    // Each provider supplies its own list of flags, which may overlap with 
    // binary values of flags from other providers.
    uint32_t executionOptions;
};
 
interface __declspec(uuid("EF15AD6F-0DC9-4908-AB35-A575A30DFBF8"))
IMLOperatorKernelFactory : IUnknown
{
    STDMETHOD(CreateKernel)(
        IMLOperatorKernelCreationContext* context,
        _COM_Outptr_ IMLOperatorKernel** kernel
        ) noexcept PURE;
};

DEFINE_ENUM_FLAG_OPERATORS(MLOperatorKernelOptions);
 
// Operator and kernel registrations. Registrations may be overridden by subsequent registrations
// of the same operator.
interface __declspec(uuid("2AF9DD2D-B516-4672-9AB5-530C208493AD"))
IMLOperatorRegistry : IUnknown
{
    // The operator set registration must provide schema for all operators that have changed since
    // the specified baseline version.  Otherwise, older kernels may incorrectly be used for a model
    // using a newer operator set version.
    //
    // A type inferrer must be provided if the MLOperatorSchemaDescription structure does not completely
    // define how output types are determined.  A shape inferrer may optionally be provided for validation
    // and optimization purposes.
    STDMETHOD(RegisterOperatorSetSchema)(
        const MLOperatorSetId* operatorSetId,
        int32_t baselineVersion,
        _In_reads_opt_(schemaCount) const MLOperatorSchemaDescription* const* schema,
        uint32_t schemaCount,
        _In_opt_ IMLOperatorTypeInferrer* typeInferrer,
        _In_opt_ IMLOperatorShapeInferrer* shapeInferrer
        ) const noexcept PURE;
 
    // If a shape inferrer is provided, IMLOperatorKernelContext::GetOutputTensor may be called
    // when a kernel is computed, without requiring the kernel to provide the tensor's shape at 
    // that time.
    STDMETHOD(RegisterOperatorKernel)(
        const MLOperatorKernelDescription* operatorKernel,
        IMLOperatorKernelFactory* operatorKernelFactory,
        _In_opt_ IMLOperatorShapeInferrer* shapeInferrer
        ) const noexcept PURE;
};
 
extern "C"
{
    // Exported function to create an operator registry.
    HRESULT WINAPI MLCreateOperatorRegistry(_COM_Outptr_ IMLOperatorRegistry** registry);
}

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

#endif /* defined(__cplusplus) */
#endif /* defined(_MSC_VER) && (_MSC_VER >= 1700) */