##################################################################
# Board PID # Board Name       # PRODUCT # Note
##################################################################
# NEWIFI3   # NEWIFI3          # MT7621  #
##################################################################

CFLAGS += -DBOARD_NEWIFI3 -DUSE_SINGLE_MAC
BOARD_NUM_USB_PORTS=1
CONFIG_BOARD_RAM_SIZE=512
ifdef CONFIG_RAETH_GMAC2
unexport CONFIG_RAETH_GMAC2
endif
