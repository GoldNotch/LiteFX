#include <litefx/math.hpp>

using namespace LiteFX::Math;

// ------------------------------------------------------------------------------------------------
// Rect.
// ------------------------------------------------------------------------------------------------

Rect::Rect() noexcept
  : Vector<scalar_type, vec_size>()
{
}
Rect::Rect(const Rect & _other) noexcept
  : Vector<scalar_type, vec_size>(static_cast<Vector<scalar_type, vec_size>>(_other))
{
}
Rect::Rect(Rect && _other) noexcept
  : Vector<scalar_type, vec_size>(std::move(static_cast<Vector<scalar_type, vec_size>>(_other)))
{
}

Rect::Rect(const Vector<size_t, 2> & pos, size_t w_, size_t h_) noexcept
  : Vector<scalar_type, vec_size>()
{
  x() = pos.x();
  y() = pos.y();
  z() = w_;
  w() = h_;
}

Rect::Rect(size_t x_, size_t y_, size_t w_, size_t h_) noexcept
  : Vector<scalar_type, vec_size>()
{
  x() = x_;
  y() = y_;
  z() = w_;
  w() = h_;
}

Rect & Rect::Rect::operator=(const Rect & _other) noexcept
{
  Vector<scalar_type, vec_size>::operator=(static_cast<Vector<scalar_type, vec_size>>(_other));
  return *this;
}

Rect & Rect::operator=(Rect && _other) noexcept
{
  Vector<scalar_type, vec_size>::operator=(
    std::move(static_cast<Vector<scalar_type, vec_size>>(_other)));
  return *this;
}

Vector<size_t, 2> Rect::position() const noexcept
{
  auto p = Vector<size_t, 2>();
  p.x() = x();
  p.y() = y();
  return p;
}

Size2d Rect::extent() const noexcept { return Size2d(z(), w()); }

const size_t & Rect::width() const & noexcept { return z(); }

size_t & Rect::width() & noexcept { return z(); }

const size_t & Rect::height() const & noexcept { return w(); }

size_t & Rect::height() & noexcept { return w(); }

// ------------------------------------------------------------------------------------------------
// RectI.
// ------------------------------------------------------------------------------------------------

RectI::RectI() noexcept
  : Vector<scalar_type, vec_size>()
{
}
RectI::RectI(const RectI & _other) noexcept
  : Vector<scalar_type, vec_size>(static_cast<Vector<scalar_type, vec_size>>(_other))
{
}
RectI::RectI(RectI && _other) noexcept
  : Vector<scalar_type, vec_size>(std::move(static_cast<Vector<scalar_type, vec_size>>(_other)))
{
}

RectI::RectI(const Vector<Int32, 2> & pos, Int32 w_, Int32 h_) noexcept
  : Vector<scalar_type, vec_size>()
{
  x() = pos.x();
  y() = pos.y();
  z() = w_;
  w() = h_;
}

RectI::RectI(Int32 x_, Int32 y_, Int32 w_, Int32 h_) noexcept
  : Vector<scalar_type, vec_size>()
{
  x() = x_;
  y() = y_;
  z() = w_;
  w() = h_;
}

RectI & RectI::RectI::operator=(const RectI & _other) noexcept
{
  Vector<scalar_type, vec_size>::operator=(static_cast<Vector<scalar_type, vec_size>>(_other));
  return *this;
}

RectI & RectI::operator=(RectI && _other) noexcept
{
  Vector<scalar_type, vec_size>::operator=(
    std::move(static_cast<Vector<scalar_type, vec_size>>(_other)));
  return *this;
}

Vector<Int32, 2> RectI::position() const noexcept { return Vector2i(x(), y()); }

Size2d RectI::extent() const noexcept { return Size2d(z(), w()); }

const Int32 & RectI::width() const & noexcept { return z(); }

Int32 & RectI::width() & noexcept { return z(); }

const Int32 & RectI::height() const & noexcept { return w(); }

Int32 & RectI::height() & noexcept { return w(); }

// ------------------------------------------------------------------------------------------------
// RectF.
// ------------------------------------------------------------------------------------------------

RectF::RectF() noexcept
  : Vector<scalar_type, vec_size>()
{
}
RectF::RectF(const RectF & _other) noexcept
  : Vector<scalar_type, vec_size>(static_cast<Vector<scalar_type, vec_size>>(_other))
{
}
RectF::RectF(RectF && _other) noexcept
  : Vector<scalar_type, vec_size>(std::move(static_cast<Vector<scalar_type, vec_size>>(_other)))
{
}

RectF::RectF(const Vector<Float, 2> & pos, Float w_, Float h_) noexcept
  : Vector<scalar_type, vec_size>()
{
  x() = pos.x();
  y() = pos.y();
  z() = w_;
  w() = h_;
}

RectF::RectF(Float x_, Float y_, Float w_, Float h_) noexcept
  : Vector<scalar_type, vec_size>()
{
  x() = x_;
  y() = y_;
  z() = w_;
  w() = h_;
}

RectF & RectF::RectF::operator=(const RectF & _other) noexcept
{
  Vector<scalar_type, vec_size>::operator=(static_cast<Vector<scalar_type, vec_size>>(_other));
  return *this;
}

RectF & RectF::operator=(RectF && _other) noexcept
{
  Vector<scalar_type, vec_size>::operator=(
    std::move(static_cast<Vector<scalar_type, vec_size>>(_other)));
  return *this;
}

Vector<Float, 2> RectF::position() const noexcept { return Vector2f(x(), y()); }

Size2d RectF::extent() const noexcept { return Size2d(z(), w()); }

const Float & RectF::width() const & noexcept { return z(); }

Float & RectF::width() & noexcept { return z(); }

const Float & RectF::height() const & noexcept { return w(); }

Float & RectF::height() & noexcept { return w(); }
