HOMEPAGE = "http://www.x.org"
SECTION = "x11/libs"
LICENSE = "MIT-X"
DEPENDS = "util-macros xorg-headers-native"

XORG_PN = "${BPN}"
INC_PR = "r8"

SRC_URI = "${XORG_MIRROR}/individual/lib/${XORG_PN}-${PV}.tar.bz2;name=archive"

S = "${WORKDIR}/${XORG_PN}-${PV}"

inherit autotools pkgconfig

EXTRA_OECONF = "--enable-malloc0returnsnull"

