const char bmserial_help[] = {
  "# BlackMagic Serial Monitor\n"
  "\n"
  "A serial monitor (or terminal) with a simple user interface. It features line\n"
  "status control, and text or hexadecimal view.\n"
  "\n"
  "The user interface of the Serial Monitor has a button bar on top. Below that, it\n"
  "has the main view with all received data, and an input field for transmitting data\n"
  "at the bottom.\n"
  "\n"
  "At the right is a sidebar for settings & status with TAB panels that can be\n"
  "folded in or out:\n"
  " [[Configuration]]\n"
  " [[Line status]]\n"
  " [[Display options]]\n"
  " [[Local options]]\n"
  "\n"
  "---\n"
  "Miscellaneous information:\n"
  " [[The Button Bar]]\n"
  " [[The Input Field]]\n"
  " [[Filters]]\n"
  " [[About BlackMagic Serial Monitor]]\n"
  "\n"
  "# The Button Bar\n"
  "\n"
  "*Connect / Disconnect*\n"
  ": The Connect button opens a connection to the selected serial port, and the\n"
  " Disconnect button closes the connection.\n"
  " The label on the button changes from \"Connect\" to \"Disconnect,\" depending on\n"
  " the status of the connection.\n"
  "\n"
  "*Clear*\n"
  ": Clears the terminal window.\n"
  "\n"
  "*Save*\n"
  ": Stores the data in the terminal window in a text file. The data is saved as it\n"
  " is displayed. For example, when in \"Hexadecimal\" view, the data is stored as a\n"
  " hex dump.\n"
  "\n"
  "*Help*\n"
  ": Opens up the on-line help that you are reading now.\n"
  "\n"
  "---\n"
  "See also:\n"
  " [[Configuration]]\n"
  "\n"
  "# The Input Field\n"
  "\n"
  "The input field is a single-line edit field at the bottom of the window. Any\n"
  "text that you type in this field is transmitted on an Enter or when clicking\n"
  "on the \"Send\" button.\n"
  "\n"
  "A carriage-return and/or line-feed character may be appended to the text in the\n"
  "edit field. This is set in the \"Local options\" panel.\n"
  "\n"
  "You can transmit non-text bytes by giving their value in two hexadecimal digits.\n"
  "The two digits must be prefixed with a \\` (backtick). That is, to transmit a byte\n"
  "with the value 123 (decimal), or 7B hexadecimal, type \\`7B and transmit. Any number\n"
  "of hexadecimal digits may follow a backtick, as long as there is an even number\n"
  "of digits. When typing \\`7B32, two bytes are sent (with decimal values 123 and 50\n"
  "respectively), and in that order. The hexadecimal digits may be specified in\n"
  "upper case or lower case.\n"
  "\n"
  "---\n"
  "See also:\n"
  " [[Display options]]\n"
  " [[Local options]]\n"
  "\n"
  "# Configuration\n"
  "\n"
  "The Configuration view is an expandable panel in the sidebar at the right. It\n"
  "contains the following settings:\n"
  "\n"
  "*Port*\n"
  ": A list of serial ports that are available on the current system.\n"
  "\n"
  ": On Linux, all predefined \"ttyS*\" devices are included in the list, but in\n"
  " general, most of these devices are not truly backed by hardware.\n"
  "\n"
  "*Baudrate*\n"
  ": A selection of the standard Baud rates.\n"
  "\n"
  "*Data bits*\n"
  ": Typically 8, but legacy systems can require 7 or fewer data bits in a word.\n"
  "\n"
  "*Stop bits*\n"
  ": Typically 1 when 8 data bits are selected; sometimes 2 when there are 7 data\n"
  " bits.\n"
  "\n"
  "*Parity*\n"
  ": The choice for parity check (on reception) and parity bit generation (on transmit).\n"
  " When parity checking is enabled, received data that fails the parity check\n"
  " creates a \"Frame error.\" Both devices must use the same setting for parity.\n"
  "\n"
  "*Flow control*\n"
  ": Flow control lets both connected devices signal their readiness to accept more\n"
  " data. When a device can temporarily not accept more data (because its buffer\n"
  " is full), it signals the other host to stop transmitting. When the device has\n"
  " processed data and freed up buffer space, it signals the other host to restart\n"
  " transmission.\n"
  "\n"
  "---\n"
  "See also:\n"
  " [[Line status]]\n"
  "\n"
  "# Line status\n"
  "\n"
  "The Line Status view is an expandable panel in the sidebar at the right. It\n"
  "shows the line or modem status signals.\n"
  "\n"
  "At its core, RS232 communication used two data lines, TxD and RxD (for \"transmit\n"
  "data\" and \"receive data\" respectively). Only three wires are needed for basic\n"
  "RS232 communication (the third wire for ground). However, the 9-pin connector\n"
  "has several more signals: the \"line status\" signals.\n"
  "\n"
  "The signals are separated in \"Local\" and \"Remote\" signals. The local signals,\n"
  "you can toggle on or off by clicking on them; the remote signals are read-only.\n"
  "\n"
  "Note that there is a relation between the local and remote signals: the RTS line\n"
  "of the local host is wired to CTS of the remote host, and likewise DTR is wired\n"
  "to DSR.\n"
  "\n"
  "Break and Frame error are added in this panel too, even though these are not\n"
  "\"line status\" signals. They do, however, signal the status of data transmission\n"
  "or reception. Frame error indicates that the number of data or stop bits is\n"
  "incorrect, or that the parity check failed. Some devices use a break on the\n"
  "transmission line to signal the other host to reset the communication.\n"
  "\n"
  "# Display options\n"
  "\n"
  "The Display options is an expandable panel in the sidebar at the right. It\n"
  "contains the following settings:\n"
  "\n"
  "*View mode*\n"
  ": Either text mode or hexadecimal mode. Hex mode which shows the received data\n"
  " as rows of a hex dump.\n"
  "\n"
  ": The choice between \"text mode\" or \"hex mode\" only applies to the visualization\n"
  " of the received data. To transmit binary data, use the \"backtick syntax\" in\n"
  " the input field.\n"
  "\n"
  "*Word-wrap*\n"
  ": This option is only available in \"Text\" mode. If enabled, lines of text wrap\n"
  " on the edge of the viewport.\n"
  "\n"
  "*Bytes/line*\n"
  ": This option is only available in \"Hex\" mode. It has the number of bytes for\n"
  " each row of the hex dump. Common values are 8 or 16, but any (non-zero) number\n"
  " may be selected.\n"
  "\n"
  "*Timestamp*\n"
  ": The time that each line or block of bytes is received, is recorded. These times\n"
  " can be displayed on the left of the lines. Two formats are available:\n"
  "* Relative time is the time since the first block of data that is received.\n"
  " If you clear the viewport, relative time restarts at zero.\n"
  " The time is in seconds, but with three decimals behind the decimal point (so\n"
  " millisecond resolution).\n"
  "* Absolute time is the local date and \"wall clock\" time, with the precision of a\n"
  " second.\n"
  "\n"
  "*Scroll to last*\n"
  ": When new data arrives, the main view automatically scrolls to the bottom, in\n"
  " order to make the new data visible. If this option is turned off, automatic\n"
  " scrolling is disabled.\n"
  "\n"
  "*Line limit*\n"
  ": The maximum number of lines kept in the viewport. When more data arrives, the\n"
  " oldest lines are dropped. If set to zero (or if this field is left empty), no\n"
  " limit applies.\n"
  "\n"
  "---\n"
  "See also:\n"
  " [[The Input Field]]\n"
  "\n"
  "# Local options\n"
  "\n"
  "The Local options is an expandable panel in the sidebar at the right. It\n"
  "contains the following settings:\n"
  "\n"
  "*Local echo*\n"
  ": Whether the text or data that is transmitted, is copied to the main data view.\n"
  " Some devices echo the received data to the sender, in which case local echo is\n"
  " redundant. In other cases, local echo is practical, as it is an indication that\n"
  " the data was indeed transmitted.\n"
  "\n"
  "*Append EOL*\n"
  ": When transmitting text or data, the Serial Monitor can append a line-end\n"
  " character to the transmitted data. Some devices only operate on the received\n"
  " data upon reception of a carriage-return or line-feed character (or a combination\n"
  " of both). When this option is set, you can subsequently select which end-of-line\n"
  " character to append.\n"
  "\n"
  "---\n"
  "See also:\n"
  " [[The Input Field]]\n"
  "\n"
  "# Filters\n"
  "\n"
  "With filters, you can highlight rows in the viewport based on keywords. For each\n"
  "filter, you can select a colour and the text to match. The Serial Monitor pre-selects\n"
  "a colour for a new filter, but you can override that by clicking on the coloured\n"
  "block at the left of the edit field.\n"
  "\n"
  "After adding a filter, it is listed in the panel, and it has a checkbox at its\n"
  "left. The checkbox allows to disable and re-enable a filter, without deleting it.\n"
  "\n"
  "A row in the main view that matches the filter text gets the background colour\n"
  "that is set for the filter. The entire row is colored, not just the matching text.\n"
  "\n"
  "---\n"
  "See also:\n"
  " [[Display options]]\n"
  "\n"
  "# About BlackMagic Serial Monitor\n"
  "\n"
  "The BlackMagic Serial Monitor is a companion tool of the book \"Embedded Debugging\n"
  "with the Black Magic Probe.\" It is, however, a stand-alone general-purpose\n"
  "serial terminal, that does not require the Black Magic Probe hardware device.\n"
  "\n"
  "The book is available as a free PDF file, and as a printed book.\n"
  "\n"
  "---\n"
  "Version 1.2.6986 \\\n"
  "Copyright 2022-2023 CompuPhase \\\n"
  "Licensed under the Apache License version 2.0\n"
  "\n"
};
