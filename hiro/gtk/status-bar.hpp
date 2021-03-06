#if defined(Hiro_StatusBar)

namespace hiro {

struct pStatusBar : pObject {
  Declare(StatusBar, Object)

  auto setEnabled(bool enabled) -> void override;
  auto setFont(const Font& font) -> void override;
  auto setText(const string& text) -> void;
  auto setVisible(bool visible) -> void override;

  auto _parent() -> pWindow*;
};

}

#endif
