// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: node_def.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_node_5fdef_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_node_5fdef_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "attr_value.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_node_5fdef_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_node_5fdef_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_node_5fdef_2eproto;
namespace tensorflow {
class NodeDef;
class NodeDefDefaultTypeInternal;
extern NodeDefDefaultTypeInternal _NodeDef_default_instance_;
class NodeDef_AttrEntry_DoNotUse;
class NodeDef_AttrEntry_DoNotUseDefaultTypeInternal;
extern NodeDef_AttrEntry_DoNotUseDefaultTypeInternal _NodeDef_AttrEntry_DoNotUse_default_instance_;
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::NodeDef* Arena::CreateMaybeMessage<::tensorflow::NodeDef>(Arena*);
template<> ::tensorflow::NodeDef_AttrEntry_DoNotUse* Arena::CreateMaybeMessage<::tensorflow::NodeDef_AttrEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {

// ===================================================================

class NodeDef_AttrEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<NodeDef_AttrEntry_DoNotUse, 
    std::string, ::tensorflow::AttrValue,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<NodeDef_AttrEntry_DoNotUse, 
    std::string, ::tensorflow::AttrValue,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  NodeDef_AttrEntry_DoNotUse();
  NodeDef_AttrEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const NodeDef_AttrEntry_DoNotUse& other);
  static const NodeDef_AttrEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const NodeDef_AttrEntry_DoNotUse*>(&_NodeDef_AttrEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), s->size(), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "tensorflow.NodeDef.AttrEntry.key");
 }
  static bool ValidateValue(void*) { return true; }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_node_5fdef_2eproto);
    return ::descriptor_table_node_5fdef_2eproto.file_level_metadata[0];
  }

  public:
};

// -------------------------------------------------------------------

class NodeDef :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.NodeDef) */ {
 public:
  NodeDef();
  virtual ~NodeDef();

  NodeDef(const NodeDef& from);
  NodeDef(NodeDef&& from) noexcept
    : NodeDef() {
    *this = ::std::move(from);
  }

  inline NodeDef& operator=(const NodeDef& from) {
    CopyFrom(from);
    return *this;
  }
  inline NodeDef& operator=(NodeDef&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const NodeDef& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NodeDef* internal_default_instance() {
    return reinterpret_cast<const NodeDef*>(
               &_NodeDef_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(NodeDef* other);
  void Swap(NodeDef* other);
  friend void swap(NodeDef& a, NodeDef& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NodeDef* New() const final {
    return CreateMaybeMessage<NodeDef>(nullptr);
  }

  NodeDef* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NodeDef>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NodeDef& from);
  void MergeFrom(const NodeDef& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NodeDef* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.NodeDef";
  }
  protected:
  explicit NodeDef(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_node_5fdef_2eproto);
    return ::descriptor_table_node_5fdef_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // repeated string input = 3;
  int input_size() const;
  void clear_input();
  static const int kInputFieldNumber = 3;
  const std::string& input(int index) const;
  std::string* mutable_input(int index);
  void set_input(int index, const std::string& value);
  void set_input(int index, std::string&& value);
  void set_input(int index, const char* value);
  void set_input(int index, const char* value, size_t size);
  std::string* add_input();
  void add_input(const std::string& value);
  void add_input(std::string&& value);
  void add_input(const char* value);
  void add_input(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& input() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_input();

  // map<string, .tensorflow.AttrValue> attr = 5;
  int attr_size() const;
  void clear_attr();
  static const int kAttrFieldNumber = 5;
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::AttrValue >&
      attr() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::AttrValue >*
      mutable_attr();

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_name();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_name(
      std::string* name);

  // string op = 2;
  void clear_op();
  static const int kOpFieldNumber = 2;
  const std::string& op() const;
  void set_op(const std::string& value);
  void set_op(std::string&& value);
  void set_op(const char* value);
  void set_op(const char* value, size_t size);
  std::string* mutable_op();
  std::string* release_op();
  void set_allocated_op(std::string* op);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_op();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_op(
      std::string* op);

  // string device = 4;
  void clear_device();
  static const int kDeviceFieldNumber = 4;
  const std::string& device() const;
  void set_device(const std::string& value);
  void set_device(std::string&& value);
  void set_device(const char* value);
  void set_device(const char* value, size_t size);
  std::string* mutable_device();
  std::string* release_device();
  void set_allocated_device(std::string* device);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_device();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_device(
      std::string* device);

  // @@protoc_insertion_point(class_scope:tensorflow.NodeDef)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> input_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      NodeDef_AttrEntry_DoNotUse,
      std::string, ::tensorflow::AttrValue,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
      0 > attr_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr op_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr device_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_node_5fdef_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// NodeDef

// string name = 1;
inline void NodeDef::clear_name() {
  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const std::string& NodeDef::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.NodeDef.name)
  return name_.Get();
}
inline void NodeDef::set_name(const std::string& value) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.NodeDef.name)
}
inline void NodeDef::set_name(std::string&& value) {
  
  name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.NodeDef.name)
}
inline void NodeDef::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.NodeDef.name)
}
inline void NodeDef::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.NodeDef.name)
}
inline std::string* NodeDef::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.NodeDef.name)
  return name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline std::string* NodeDef::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.NodeDef.name)
  
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void NodeDef::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.NodeDef.name)
}
inline std::string* NodeDef::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.NodeDef.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  
  return name_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void NodeDef::unsafe_arena_set_allocated_name(
    std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  if (name != nullptr) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.NodeDef.name)
}

// string op = 2;
inline void NodeDef::clear_op() {
  op_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const std::string& NodeDef::op() const {
  // @@protoc_insertion_point(field_get:tensorflow.NodeDef.op)
  return op_.Get();
}
inline void NodeDef::set_op(const std::string& value) {
  
  op_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.NodeDef.op)
}
inline void NodeDef::set_op(std::string&& value) {
  
  op_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.NodeDef.op)
}
inline void NodeDef::set_op(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  op_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.NodeDef.op)
}
inline void NodeDef::set_op(const char* value,
    size_t size) {
  
  op_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.NodeDef.op)
}
inline std::string* NodeDef::mutable_op() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.NodeDef.op)
  return op_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline std::string* NodeDef::release_op() {
  // @@protoc_insertion_point(field_release:tensorflow.NodeDef.op)
  
  return op_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void NodeDef::set_allocated_op(std::string* op) {
  if (op != nullptr) {
    
  } else {
    
  }
  op_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), op,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.NodeDef.op)
}
inline std::string* NodeDef::unsafe_arena_release_op() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.NodeDef.op)
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  
  return op_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void NodeDef::unsafe_arena_set_allocated_op(
    std::string* op) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  if (op != nullptr) {
    
  } else {
    
  }
  op_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      op, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.NodeDef.op)
}

// repeated string input = 3;
inline int NodeDef::input_size() const {
  return input_.size();
}
inline void NodeDef::clear_input() {
  input_.Clear();
}
inline const std::string& NodeDef::input(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.NodeDef.input)
  return input_.Get(index);
}
inline std::string* NodeDef::mutable_input(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.NodeDef.input)
  return input_.Mutable(index);
}
inline void NodeDef::set_input(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.NodeDef.input)
  input_.Mutable(index)->assign(value);
}
inline void NodeDef::set_input(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:tensorflow.NodeDef.input)
  input_.Mutable(index)->assign(std::move(value));
}
inline void NodeDef::set_input(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  input_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.NodeDef.input)
}
inline void NodeDef::set_input(int index, const char* value, size_t size) {
  input_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.NodeDef.input)
}
inline std::string* NodeDef::add_input() {
  // @@protoc_insertion_point(field_add_mutable:tensorflow.NodeDef.input)
  return input_.Add();
}
inline void NodeDef::add_input(const std::string& value) {
  input_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.NodeDef.input)
}
inline void NodeDef::add_input(std::string&& value) {
  input_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:tensorflow.NodeDef.input)
}
inline void NodeDef::add_input(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  input_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.NodeDef.input)
}
inline void NodeDef::add_input(const char* value, size_t size) {
  input_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.NodeDef.input)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
NodeDef::input() const {
  // @@protoc_insertion_point(field_list:tensorflow.NodeDef.input)
  return input_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
NodeDef::mutable_input() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.NodeDef.input)
  return &input_;
}

// string device = 4;
inline void NodeDef::clear_device() {
  device_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const std::string& NodeDef::device() const {
  // @@protoc_insertion_point(field_get:tensorflow.NodeDef.device)
  return device_.Get();
}
inline void NodeDef::set_device(const std::string& value) {
  
  device_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.NodeDef.device)
}
inline void NodeDef::set_device(std::string&& value) {
  
  device_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.NodeDef.device)
}
inline void NodeDef::set_device(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  device_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.NodeDef.device)
}
inline void NodeDef::set_device(const char* value,
    size_t size) {
  
  device_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.NodeDef.device)
}
inline std::string* NodeDef::mutable_device() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.NodeDef.device)
  return device_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline std::string* NodeDef::release_device() {
  // @@protoc_insertion_point(field_release:tensorflow.NodeDef.device)
  
  return device_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void NodeDef::set_allocated_device(std::string* device) {
  if (device != nullptr) {
    
  } else {
    
  }
  device_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), device,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.NodeDef.device)
}
inline std::string* NodeDef::unsafe_arena_release_device() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.NodeDef.device)
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  
  return device_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void NodeDef::unsafe_arena_set_allocated_device(
    std::string* device) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  if (device != nullptr) {
    
  } else {
    
  }
  device_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      device, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.NodeDef.device)
}

// map<string, .tensorflow.AttrValue> attr = 5;
inline int NodeDef::attr_size() const {
  return attr_.size();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::AttrValue >&
NodeDef::attr() const {
  // @@protoc_insertion_point(field_map:tensorflow.NodeDef.attr)
  return attr_.GetMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::tensorflow::AttrValue >*
NodeDef::mutable_attr() {
  // @@protoc_insertion_point(field_mutable_map:tensorflow.NodeDef.attr)
  return attr_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_node_5fdef_2eproto