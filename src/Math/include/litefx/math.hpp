#pragma once

#include <litefx/core.h>
#include <litefx/matrix.hpp>
#include <litefx/vector.hpp>

namespace LiteFX::Math
{
using namespace LiteFX;

/// <summary>
/// A type for an unsigned 8 bit integer.
/// </summary>
using Byte = uint8_t;

/// <summary>
/// A type for a signed 16 bit integer.
/// </summary>
using Int16 = int16_t;

/// <summary>
/// A type for an unsigned 16 bit integer.
/// </summary>
using UInt16 = uint16_t;

/// <summary>
/// A type for a signed 32 bit integer.
/// </summary>
using Int32 = int32_t;

/// <summary>
/// A type for an unsigned 32 bit integer.
/// </summary>
using UInt32 = uint32_t;

/// <summary>
/// A type for a signed 64 bit integer.
/// </summary>
using Int64 = int64_t;

/// <summary>
/// A type for an unsigned 64 bit integer.
/// </summary>
using UInt64 = uint64_t;

/// <summary>
/// A type for a floating point value with single precision.
/// </summary>
using Float = float_t;

/// <summary>
/// A type for a floating point value with double precision.
/// </summary>
using Double = double_t;

/// <summary>
/// A literal to define a byte.
/// </summary>
/// <param name="arg">The value that should be assigned to the byte.</param>
/// <returns>The value as byte.</returns>
constexpr Byte operator"" _b(unsigned long long int arg) noexcept { return static_cast<Byte>(arg); }

/// <summary>
/// A literal to define a 16 bit integer.
/// </summary>
/// <param name="arg">The value that should be assigned to the integer.</param>
/// <returns>The value as 16 bit integer.</returns>
constexpr Int16 operator"" _i16(unsigned long long int arg) noexcept
{
  return static_cast<Int16>(arg);
}

/// <summary>
/// A literal to define a 16 bit unsigned integer.
/// </summary>
/// <param name="arg">The value that should be assigned to the integer.</param>
/// <returns>The value as 16 bit unsigned integer.</returns>
constexpr UInt16 operator"" _ui16(unsigned long long int arg) noexcept
{
  return static_cast<UInt16>(arg);
}

/// <summary>
/// A literal to define a 32 bit integer.
/// </summary>
/// <param name="arg">The value that should be assigned to the integer.</param>
/// <returns>The value as 32 bit integer.</returns>
constexpr Int32 operator"" _i32(unsigned long long int arg) noexcept
{
  return static_cast<Int32>(arg);
}

/// <summary>
/// A literal to define a 32 bit unsigned integer.
/// </summary>
/// <param name="arg">The value that should be assigned to the integer.</param>
/// <returns>The value as 32 bit unsigned integer.</returns>
constexpr UInt32 operator"" _ui32(unsigned long long int arg) noexcept
{
  return static_cast<UInt32>(arg);
}

/// <summary>
/// A literal to define a 64 bit integer.
/// </summary>
/// <param name="arg">The value that should be assigned to the integer.</param>
/// <returns>The value as 64 bit integer.</returns>
constexpr Int64 operator"" _i64(unsigned long long int arg) noexcept
{
  return static_cast<Int64>(arg);
}

/// <summary>
/// A literal to define a 64 bit unsigned integer.
/// </summary>
/// <param name="arg">The value that should be assigned to the integer.</param>
/// <returns>The value as 64 bit unsigned integer.</returns>
constexpr UInt64 operator"" _ui64(unsigned long long int arg) noexcept
{
  return static_cast<UInt64>(arg);
}

/// <summary>
/// A literal to define a floating point value with single precision.
/// </summary>
/// <param name="arg">The value that should be assigned to the floating point number.</param>
/// <returns>The value as floating point number.</returns>
constexpr Float operator"" _f32(long double arg) noexcept { return static_cast<Float>(arg); }

/// <summary>
/// A literal to define a floating point value with double precision.
/// </summary>
/// <param name="arg">The value that should be assigned to the floating point number.</param>
/// <returns>The value as floating point number.</returns>
constexpr Double operator"" _f64(long double arg) noexcept { return static_cast<Double>(arg); }

/// <summary>
/// Aligns a value <paramref name="size" /> to an alignment <paramref name="alignment" />.
/// </summary>
/// <typeparam name="T">The type of the value to align.</typeparam>
/// <param name="size">The value to align.</param>
/// <param name="alignment">The alignment to align the value to.</param>
/// <returns>The aligned value.</returns>
template<typename T = UInt32>
static constexpr T align(T size, T alignment)
{
  return (size + alignment - 1) & ~(alignment - 1);
}

#pragma region Vector
using Vector1f = Vector<Float, 1>;
using Vector1i = Vector<Int32, 1>;
using Vector1u = Vector<UInt32, 1>;
using Vector2f = Vector<Float, 2>;
using Vector2i = Vector<Int32, 2>;
using Vector2u = Vector<UInt32, 2>;
using Vector3f = Vector<Float, 3>;
using Vector3i = Vector<Int32, 3>;
using Vector3u = Vector<UInt32, 3>;
using Vector4f = Vector<Float, 4>;
using Vector4i = Vector<Int32, 4>;
using Vector4u = Vector<UInt32, 4>;

/// <summary>
/// Contains additional exported vector types.
/// </summary>
namespace Vectors
{
/// <summary>
/// A vector that contains a single byte.
/// </summary>
using ByteVector1 = TVector1<Byte>;

/// <summary>
/// A vector that contains two bytes.
/// </summary>
using ByteVector2 = TVector2<Byte>;

/// <summary>
/// A vector that contains three bytes.
/// </summary>
using ByteVector3 = TVector3<Byte>;

/// <summary>
/// A vector that contains four bytes.
/// </summary>
using ByteVector4 = TVector4<Byte>;

/// <summary>
/// A vector that contains a single 16 bit signed integer.
/// </summary>
using Int16Vector1 = TVector1<Int16>;

/// <summary>
/// A vector that contains two 16 bit signed integers.
/// </summary>
using Int16Vector2 = TVector2<Int16>;

/// <summary>
/// A vector that contains three 16 bit signed integers.
/// </summary>
using Int16Vector3 = TVector3<Int16>;

/// <summary>
/// A vector that contains four 16 bit signed integers.
/// </summary>
using Int16Vector4 = TVector4<Int16>;

/// <summary>
/// A vector that contains a single 16 bit unsigned integer.
/// </summary>
using UInt16Vector1 = TVector1<UInt16>;

/// <summary>
/// A vector that contains two 16 bit unsigned integers.
/// </summary>
using UInt16Vector2 = TVector2<UInt16>;

/// <summary>
/// A vector that contains three 16 bit unsigned integers.
/// </summary>
using UInt16Vector3 = TVector3<UInt16>;

/// <summary>
/// A vector that contains four 16 bit unsigned integers.
/// </summary>
using UInt16Vector4 = TVector4<UInt16>;

/// <summary>
/// A vector that contains a single 32 bit signed integer.
/// </summary>
using Int32Vector1 = TVector1<Int32>;

/// <summary>
/// A vector that contains two 32 bit signed integers.
/// </summary>
using Int32Vector2 = TVector2<Int32>;

/// <summary>
/// A vector that contains three 32 bit signed integers.
/// </summary>
using Int32Vector3 = TVector3<Int32>;

/// <summary>
/// A vector that contains four 32 bit signed integers.
/// </summary>
using Int32Vector4 = TVector4<Int32>;

/// <summary>
/// A vector that contains a single 32 bit unsigned integer.
/// </summary>
using UInt32Vector1 = TVector1<UInt32>;

/// <summary>
/// A vector that contains two 32 bit unsigned integers.
/// </summary>
using UInt32Vector2 = TVector2<UInt32>;

/// <summary>
/// A vector that contains three 32 bit unsigned integers.
/// </summary>
using UInt32Vector3 = TVector3<UInt32>;

/// <summary>
/// A vector that contains four 32 bit unsigned integers.
/// </summary>
using UInt32Vector4 = TVector4<UInt32>;

/// <summary>
/// A vector that contains a single 64 bit signed integer.
/// </summary>
using Int64Vector1 = TVector1<Int64>;

/// <summary>
/// A vector that contains two 64 bit signed integers.
/// </summary>
using Int64Vector2 = TVector2<Int64>;

/// <summary>
/// A vector that contains three 64 bit signed integers.
/// </summary>
using Int64Vector3 = TVector3<Int64>;

/// <summary>
/// A vector that contains four 64 bit signed integers.
/// </summary>
using Int64Vector4 = TVector4<Int64>;

/// <summary>
/// A vector that contains a single 64 bit unsigned integer.
/// </summary>
using UInt64Vector1 = TVector1<UInt64>;

/// <summary>
/// A vector that contains two 64 bit unsigned integers.
/// </summary>
using UInt64Vector2 = TVector2<UInt64>;

/// <summary>
/// A vector that contains three 64 bit unsigned integers.
/// </summary>
using UInt64Vector3 = TVector3<UInt64>;

/// <summary>
/// A vector that contains four 64 bit unsigned integers.
/// </summary>
using UInt64Vector4 = TVector4<UInt64>;

/// <summary>
/// A vector that contains a single floating point value with single precision.
/// </summary>
using FloatVector1 = TVector1<Float>;

/// <summary>
/// A vector that contains two floating point values with single precision.
/// </summary>
using FloatVector2 = TVector2<Float>;

/// <summary>
/// A vector that contains three floating point values with single precision.
/// </summary>
using FloatVector3 = TVector3<Float>;

/// <summary>
/// A vector that contains four floating point values with single precision.
/// </summary>
using FloatVector4 = TVector4<Float>;

/// <summary>
/// A vector that contains a single floating point value with double precision.
/// </summary>
using DoubleVector1 = TVector1<Double>;

/// <summary>
/// A vector that contains two floating point values with double precision.
/// </summary>
using DoubleVector2 = TVector2<Double>;

/// <summary>
/// A vector that contains three floating point values with double precision.
/// </summary>
using DoubleVector3 = TVector3<Double>;

/// <summary>
/// A vector that contains four floating point values with double precision.
/// </summary>
using DoubleVector4 = TVector4<Double>;
} // namespace Vectors
#pragma endregion

#pragma region Size
class Size4d : public Vector<size_t, 4>
{
public:
  Size4d() noexcept;
  Size4d(size_t v) noexcept;
  Size4d(size_t w, size_t h, size_t d, size_t a) noexcept;
  Size4d(const Size4d &) noexcept;
  Size4d(Size4d &&) noexcept;
  //virtual ~Size4d() noexcept = default;

public:
  Size4d & operator=(const Size4d & _other) noexcept;
  Size4d & operator=(Size4d && _other) noexcept;
  Size4d operator/(size_t s) noexcept;
  Size4d & operator/=(size_t s) noexcept;
  Size4d operator*(size_t s) noexcept;
  Size4d & operator*=(size_t s) noexcept;
  Size4d operator+(const Size4d & s) noexcept;
  Size4d & operator+=(const Size4d & s) noexcept;
  Size4d operator-(const Size4d & s) noexcept;
  Size4d & operator-=(const Size4d & s) noexcept;

public:
  const size_t & width() const & noexcept;
  size_t & width() & noexcept;
  const size_t & height() const & noexcept;
  size_t & height() & noexcept;
  const size_t & depth() const & noexcept;
  size_t & depth() & noexcept;
  const size_t & alpha() const & noexcept;
  size_t & alpha() & noexcept;
};

class Size3d : public Vector<size_t, 3>
{
public:
  Size3d() noexcept;
  Size3d(size_t v) noexcept;
  Size3d(size_t w, size_t h, size_t d) noexcept;
  Size3d(const Size3d &) noexcept;
  Size3d(Size3d &&) noexcept;
  //virtual ~Size3d() noexcept = default;

public:
  Size3d & operator=(const Size3d & _other) noexcept;
  Size3d & operator=(Size3d && _other) noexcept;
  operator Size4d() const noexcept;
  Size3d operator/(size_t s) noexcept;
  Size3d & operator/=(size_t s) noexcept;
  Size3d operator*(size_t s) noexcept;
  Size3d & operator*=(size_t s) noexcept;
  Size3d operator+(const Size3d & s) noexcept;
  Size3d & operator+=(const Size3d & s) noexcept;
  Size3d operator-(const Size3d & s) noexcept;
  Size3d & operator-=(const Size3d & s) noexcept;

public:
  const size_t & width() const & noexcept;
  size_t & width() & noexcept;
  const size_t & height() const & noexcept;
  size_t & height() & noexcept;
  const size_t & depth() const & noexcept;
  size_t & depth() & noexcept;
};

class Size2d : public Vector<size_t, 2>
{
public:
  Size2d() noexcept;
  Size2d(size_t v) noexcept;
  Size2d(size_t w, size_t h) noexcept;
  Size2d(const Size2d &) noexcept;
  Size2d(Size2d &&) noexcept;
  //virtual ~Size2d() noexcept = default;

public:
  Size2d & operator=(const Size2d & _other) noexcept;
  Size2d & operator=(Size2d && _other) noexcept;
  operator Size3d() const noexcept;
  operator Size4d() const noexcept;
  Size2d operator/(size_t s) noexcept;
  Size2d & operator/=(size_t s) noexcept;
  Size2d operator*(size_t s) noexcept;
  Size2d & operator*=(size_t s) noexcept;
  Size2d operator+(const Size2d & s) noexcept;
  Size2d & operator+=(const Size2d & s) noexcept;
  Size2d operator-(const Size2d & s) noexcept;
  Size2d & operator-=(const Size2d & s) noexcept;

public:
  const size_t & width() const & noexcept;
  size_t & width() & noexcept;
  const size_t & height() const & noexcept;
  size_t & height() & noexcept;
};
#pragma endregion

#pragma region Rectangle
class Rect : public Vector<size_t, 4>
{
public:
  Rect() noexcept;
  Rect(const Vector<size_t, 2> & pos, size_t w, size_t h) noexcept;
  Rect(size_t x, size_t y, size_t w, size_t h) noexcept;
  Rect(const Rect &) noexcept;
  Rect(Rect &&) noexcept;
  //virtual ~Rect() noexcept = default;

public:
  Rect & operator=(const Rect & _other) noexcept;
  Rect & operator=(Rect && _other) noexcept;

public:
  Vector<size_t, 2> position() const noexcept;
  Size2d extent() const noexcept;
  const size_t & width() const & noexcept;
  size_t & width() & noexcept;
  const size_t & height() const & noexcept;
  size_t & height() & noexcept;
};

class RectI : public Vector<Int32, 4>
{
public:
  RectI() noexcept;
  RectI(const Vector<Int32, 2> & pos, Int32 w, Int32 h) noexcept;
  RectI(Int32 x, Int32 y, Int32 w, Int32 h) noexcept;
  RectI(const RectI &) noexcept;
  RectI(RectI &&) noexcept;
  //virtual ~RectI() noexcept = default;

public:
  RectI & operator=(const RectI & _other) noexcept;
  RectI & operator=(RectI && _other) noexcept;

public:
  Vector<Int32, 2> position() const noexcept;
  Size2d extent() const noexcept;
  const Int32 & width() const & noexcept;
  Int32 & width() & noexcept;
  const Int32 & height() const & noexcept;
  Int32 & height() & noexcept;
};

class RectF : public Vector<Float, 4>
{
public:
  RectF() noexcept;
  RectF(const Vector<Float, 2> & pos, Float w, Float h) noexcept;
  RectF(Float x, Float y, Float w, Float h) noexcept;
  RectF(const RectF &) noexcept;
  RectF(RectF &&) noexcept;
  //virtual ~RectF() noexcept = default;

public:
  RectF & operator=(const RectF & _other) noexcept;
  RectF & operator=(RectF && _other) noexcept;

public:
  Vector<Float, 2> position() const noexcept;
  Size2d extent() const noexcept;
  const Float & width() const & noexcept;
  Float & width() & noexcept;
  const Float & height() const & noexcept;
  Float & height() & noexcept;
};
#pragma endregion
} // namespace LiteFX::Math
