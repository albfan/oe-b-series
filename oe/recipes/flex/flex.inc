DESCRIPTION = "Flex is a tool for generating programs that recognize lexical patterns in text."
SECTION = "devel"
LICENSE = "BSD"

DEPENDS = "gettext"

INC_PR = "r5"

S = "${WORKDIR}/flex-${PV}"

inherit autotools gettext

# >> flex-2.5.31-r4: /usr/lib/libfl.a
# That one is a special case: it wants to stay in the main flex package,
# since flex itself is a development tool.  I'm not sure why it is a
# static-only library; that might be an error

FILES_${PN} += "${libdir}/libfl.a"
