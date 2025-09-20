ifndef FONTDIR
	$(error FONTDIR variable is not defined. Please set FONTDIR to the path of this repository before including fonts_arthur.mk)
endif

INCLUDES += $(FONTDIR)/fonts/arthur/includes
GRAPHICS += $(FONTDIR)/fonts/arthur/graphics
