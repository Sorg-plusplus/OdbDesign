// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: enums.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_enums_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_enums_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_enums_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_enums_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_enums_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace Odb {
namespace Lib {
namespace Protobuf {

enum BoardSide : int {
  BsNone = 0,
  Top = 1,
  Bottom = 2,
  BoardSide_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  BoardSide_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool BoardSide_IsValid(int value);
constexpr BoardSide BoardSide_MIN = BsNone;
constexpr BoardSide BoardSide_MAX = Bottom;
constexpr int BoardSide_ARRAYSIZE = BoardSide_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* BoardSide_descriptor();
template<typename T>
inline const std::string& BoardSide_Name(T enum_t_value) {
  static_assert(::std::is_same<T, BoardSide>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function BoardSide_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    BoardSide_descriptor(), enum_t_value);
}
inline bool BoardSide_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, BoardSide* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<BoardSide>(
    BoardSide_descriptor(), name, value);
}
enum LineShape : int {
  Square = 0,
  Round = 1,
  LineShape_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  LineShape_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool LineShape_IsValid(int value);
constexpr LineShape LineShape_MIN = Square;
constexpr LineShape LineShape_MAX = Round;
constexpr int LineShape_ARRAYSIZE = LineShape_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LineShape_descriptor();
template<typename T>
inline const std::string& LineShape_Name(T enum_t_value) {
  static_assert(::std::is_same<T, LineShape>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function LineShape_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    LineShape_descriptor(), enum_t_value);
}
inline bool LineShape_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, LineShape* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<LineShape>(
    LineShape_descriptor(), name, value);
}
enum Polarity : int {
  Positive = 0,
  Negative = 1,
  Polarity_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  Polarity_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool Polarity_IsValid(int value);
constexpr Polarity Polarity_MIN = Positive;
constexpr Polarity Polarity_MAX = Negative;
constexpr int Polarity_ARRAYSIZE = Polarity_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Polarity_descriptor();
template<typename T>
inline const std::string& Polarity_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Polarity>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Polarity_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Polarity_descriptor(), enum_t_value);
}
inline bool Polarity_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Polarity* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Polarity>(
    Polarity_descriptor(), name, value);
}
enum UnitType : int {
  None = 0,
  Metric = 1,
  Imperial = 2,
  UnitType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  UnitType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool UnitType_IsValid(int value);
constexpr UnitType UnitType_MIN = None;
constexpr UnitType UnitType_MAX = Imperial;
constexpr int UnitType_ARRAYSIZE = UnitType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* UnitType_descriptor();
template<typename T>
inline const std::string& UnitType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, UnitType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function UnitType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    UnitType_descriptor(), enum_t_value);
}
inline bool UnitType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, UnitType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<UnitType>(
    UnitType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Protobuf
}  // namespace Lib
}  // namespace Odb

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Odb::Lib::Protobuf::BoardSide> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Odb::Lib::Protobuf::BoardSide>() {
  return ::Odb::Lib::Protobuf::BoardSide_descriptor();
}
template <> struct is_proto_enum< ::Odb::Lib::Protobuf::LineShape> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Odb::Lib::Protobuf::LineShape>() {
  return ::Odb::Lib::Protobuf::LineShape_descriptor();
}
template <> struct is_proto_enum< ::Odb::Lib::Protobuf::Polarity> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Odb::Lib::Protobuf::Polarity>() {
  return ::Odb::Lib::Protobuf::Polarity_descriptor();
}
template <> struct is_proto_enum< ::Odb::Lib::Protobuf::UnitType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Odb::Lib::Protobuf::UnitType>() {
  return ::Odb::Lib::Protobuf::UnitType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_enums_2eproto
