#include <litefx/backends/vulkan.hpp>
#include <litefx/backends/vulkan_builders.hpp>

using namespace LiteFX::Rendering::Backends;

// ------------------------------------------------------------------------------------------------
// Shared interface.
// ------------------------------------------------------------------------------------------------

VulkanRasterizer::VulkanRasterizer(PolygonMode polygonMode, CullMode cullMode, CullOrder cullOrder,
                                   Float lineWidth,
                                   const DepthStencilState & depthStencilState) noexcept
  : Rasterizer(polygonMode, cullMode, cullOrder, lineWidth, depthStencilState)
{
}

VulkanRasterizer::VulkanRasterizer() noexcept
  : Rasterizer(PolygonMode::Solid, CullMode::BackFaces, CullOrder::CounterClockWise)
{
}

VulkanRasterizer::~VulkanRasterizer() noexcept = default;

void VulkanRasterizer::updateLineWidth(Float lineWidth_) noexcept { lineWidth() = lineWidth_; }

#if defined(LITEFX_BUILD_DEFINE_BUILDERS)
// ------------------------------------------------------------------------------------------------
// Builder shared interface.
// ------------------------------------------------------------------------------------------------

VulkanRasterizerBuilder::VulkanRasterizerBuilder() noexcept
  : RasterizerBuilder(SharedPtr<VulkanRasterizer>(new VulkanRasterizer()))
{
}

VulkanRasterizerBuilder::~VulkanRasterizerBuilder() noexcept = default;

void VulkanRasterizerBuilder::build()
{
  instance()->polygonMode() = m_state.polygonMode;
  instance()->cullMode() = m_state.cullMode;
  instance()->cullOrder() = m_state.cullOrder;
  instance()->lineWidth() = m_state.lineWidth;
  instance()->depthStencilState().depthBias() = m_state.depthBias;
  instance()->depthStencilState().depthState() = m_state.depthState;
  instance()->depthStencilState().stencilState() = m_state.stencilState;
}
#endif // defined(LITEFX_BUILD_DEFINE_BUILDERS)
