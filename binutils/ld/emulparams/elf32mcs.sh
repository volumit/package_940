ARCH=mcs
MACHINE=
SCRIPT_NAME=elf32mcs
OUTPUT_FORMAT="elf32-mcs"
MAXPAGESIZE=0x1000
EMBEDDED=yes
TEMPLATE_NAME=elf32
TEXT_START_ADDR=0x0000
DYNAMIC_LINK=FALSE
ALIGNMENT=4
OTHER_SECTIONS=".version_info    0 : { *(.version_info) }"
