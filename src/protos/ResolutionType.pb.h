// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ResolutionType.proto

#ifndef PROTOBUF_ResolutionType_2eproto__INCLUDED
#define PROTOBUF_ResolutionType_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ResolutionType_2eproto();
void protobuf_AssignDesc_ResolutionType_2eproto();
void protobuf_ShutdownFile_ResolutionType_2eproto();


enum ResolutionType {
  UnknownResolutionType = -1,
  UndefinedResolutionType = 0,
  Approve = 1,
  Disapprove = 2
};
bool ResolutionType_IsValid(int value);
const ResolutionType ResolutionType_MIN = UnknownResolutionType;
const ResolutionType ResolutionType_MAX = Disapprove;
const int ResolutionType_ARRAYSIZE = ResolutionType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ResolutionType_descriptor();
inline const ::std::string& ResolutionType_Name(ResolutionType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ResolutionType_descriptor(), value);
}
inline bool ResolutionType_Parse(
    const ::std::string& name, ResolutionType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ResolutionType>(
    ResolutionType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Diadoc::Api::Proto::ResolutionType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Diadoc::Api::Proto::ResolutionType>() {
  return ::Diadoc::Api::Proto::ResolutionType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ResolutionType_2eproto__INCLUDED
