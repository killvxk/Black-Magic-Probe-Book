const char bmtrace_help[] = {
  "# BlackMagic Trace Viewer\n"
  "\n"
  "The Trace Viewer captures SWO trace messages. SWO (Serial Wire Output) is a\n"
  "tracing protocol defined in the ARM Cortex core.\n"
  "\n"
  "The user interface of the Trace Viewer has the main controls and views in the\n"
  "left, with (from top to bottom):\n"
  " [[The Button Bar]]\n"
  " [[The Trace View]]\n"
  " [[The Timeline]]\n"
  "\n"
  "At the right is a sidebar for settings & status with TAB panels that can be\n"
  "folded in or out:\n"
  " [[Configuration]]\n"
  " [[Status]]\n"
  " [[Filters]]\n"
  " [[Channels]]\n"
  "\n"
  "---\n"
  "Miscellaneous information:\n"
  " [[The Common Trace Format]]\n"
  " [[About BlackMagic Trace Viewer]]\n"
  "\n"
  "# The Button Bar\n"
  "\n"
  "*Start / Stop*\n"
  ": The Start button starts capturing the trace messages, and the Stop button stops\n"
  " the capture. When running, the label on the button changes from \"Start\" to\n"
  " \"Stop,\" and after stopping, the button is relabeled to \"Resume.\"\n"
  "\n"
  ": Note that if you change any of the configuration options in the sidebar, you\n"
  " may need to stop and re-start the capture, in order to let the Trace Viewer\n"
  " re-configure the debug probe.\n"
  "\n"
  "*Clear*\n"
  ": Clears the messages from the list, and also clears the timeline.\n"
  "\n"
  "*Search*\n"
  ": Opens a dialog in which you can type a word to search for, in the list. While\n"
  " the dialog is open, you can click on the Find button to search for the next\n"
  " occurrence. The search wraps back to the top after searching beyond the last\n"
  " match.\n"
  "\n"
  "*Save*\n"
  ": Stores the currently displayed messages in a CSV file (Comma Separated Values).\n"
  " You can open these files in a spreadsheet program (Excel, LibreOffice Calc, ...)\n"
  " for further analysis.\n"
  "\n"
  "*Help*\n"
  ": Opens up the on-line help that you are reading now.\n"
  "\n"
  "---\n"
  "See also:\n"
  " [[The Timeline]]\n"
  " [[Configuration]]\n"
  " [[Filters]]\n"
  " [[Keyboard Interface]]\n"
  "\n"
  "# The Trace View\n"
  "\n"
  "All received messages (on channels that have been enabled) added to the list in\n"
  "the main view.\n"
  "\n"
  "While trace capture is running, only the last 400 trace messages are displayed.\n"
  "This avoids the display update to slow down the message capture. As soon as you\n"
  "stop trace capture, the full list of messages appears in the list.\n"
  "\n"
  "The \"Status\" panel in the sidebar shows a few other values that are relevant to\n"
  "trace capture and packet reception.\n"
  "\n"
  "---\n"
  "See also:\n"
  " [[The Timeline]]\n"
  " [[Status]]\n"
  "\n"
  "# The Timeline\n"
  "\n"
  "The timeline, at the lower part of the application viewport, has a row for each\n"
  "enabled channel. When a trace message is captured, the time of the reception is\n"
  "marked on the timeline. The timeline thus gives you an overview of:\n"
  "* bursts of traces (busy moments versus quiet moments);\n"
  "* correlation of traces between several channels;\n"
  "* regularity (or lack of regularity) of the interval that trace messages arrive.\n"
  "\n"
  "The timeline can be zoomed in and out. When several trace marks would collide\n"
  "on the timeline (because they map to the same spot at that zoom level), the mark\n"
  "gets higher. When zooming out, for an overview, you can therefore still get an\n"
  "indication of the tracing activity.\n"
  "\n"
  "A mouse click on the timeline scrolls the Trace View to the messages with timestamps\n"
  "around that time.\n"
  "\n"
  "---\n"
  "See also:\n"
  " [[The Trace View]]\n"
  "\n"
  "# Configuration\n"
  "\n"
  "The Configuration view is an expandable panel in the sidebar at the right. It\n"
  "contains the following settings:\n"
  "\n"
  "*Probe*\n"
  ": The debug probe to use. If only a single probe is connected to the work~station,\n"
  " it will be automatically selected. Otherwise, you can select it from the drop-down\n"
  " list.\n"
  "\n"
  ": In the case of a ctxLink probe configured for Wi-Fi, you select \"TCP/IP\" from\n"
  " this list.\n"
  "\n"
  "*IP Addr*\n"
  ": This option is only visible when \"TCP/IP\" is selected from the drop-down list\n"
  " of the preceding \"Probe\" option. Here, you can fill in the IP address that\n"
  " the debug probe (likely a ctxLink probe) is configured at. Alternatively,\n"
  " you can click on the \"...\" button at the right of the edit field, to let the\n"
  " utility scan the network for the debug probe.\n"
  "\n"
  "*Mode*\n"
  ": Either Manchester or NRZ (asynchronous). Which mode to use, depends on the\n"
  " particular debug probe: the original Black Magic Probe supports only Manchester,\n"
  " while the ctxLink probe supports only NRZ. If the Trace Viewer detects the\n"
  " type of debug probe, this field is updated automatically.\n"
  "\n"
  "*Configure Target*\n"
  ": If selected, the Trace Viewer configures the microcontroller on the target\n"
  " device for SWO tracing. For this to work, the Trace Viewer must have support\n"
  " for the particular microcontroller. The Trace Viewer supports several\n"
  " microcontroller families out of the box, and more can be added.\n"
  "\n"
  "*Configure Debug Probe*\n"
  ": If selected, the Trace Viewer configures the Black Magic Probe for capturing\n"
  " SWO tracing.\n"
  "\n"
  ": If neither this option, nor the option \"Configure Target\" are set, the Trace Viewer\n"
  " does not open a connection with the debug interface of the Black Magic Probe.\n"
  " This allows you to control the debug probe and the target with another program\n"
  " (such as GDB) while capturing SWO tracing with the Trace Viewer.\n"
  "\n"
  "*Reset target during connect*\n"
  ": This option may be needed on some microcontrollers, especially if SWD pins get redefined.\n"
  "\n"
  "*CPU clock*\n"
  ": The clock of the microcontroller in Hz. This value is needed when the Trace Viewer configures\n"
  " the target.\n"
  "\n"
  "*Bit rate*\n"
  ": The transfer speed in bits/second. This value is needed when the Trace Viewer\n"
  " configures the target (it may also be needed for configuring the debug probe,\n"
  " depending on the mode).\n"
  "\n"
  "*Data size*\n"
  ": Most targets implement SWO tracing with an 8-bit payload in a packet. However,\n"
  " 16-bit or 32-bit payloads per packet are more efficient (less overhead, and\n"
  " thus a higher effective transfer speed).\n"
  "\n"
  ": When set to \"auto\", the Trace Viewer attempts to detect the data size.\n"
  "\n"
  "*TSDL file*\n"
  ": When a file with CTF metadata (Common Trace Format) is selected in this field,\n"
  " the Trace Viewer will activate CTF decoding on the channels defined in the\n"
  " metadata file.\n"
  "\n"
  "*ELF file*\n"
  ": Selecting the ELF file, enables symbol lookup for addresses transmitted by the\n"
  " target firmware. The ELF file that is set in this field, must of course match\n"
  " the firmware loaded into the target. This option is furthermore only useful\n"
  " when CTF decoding is active (i.e. when a TSDL file is set), because the\n"
  " TSDL file must define which parameters in a trace packet represent symbol\n"
  " addresses.\n"
  "\n"
  "---\n"
  "See also:\n"
  " [[Status]]\n"
  " [[Common Trace Format]]\n"
  "\n"
  "# Status\n"
  "\n"
  "The Status view is an expandable panel in the sidebar at the right. It contains\n"
  "the following values:\n"
  "\n"
  "*Total received*\n"
  ": The total number of packets received. While running, the number of messages\n"
  " in the Trace View is limited to 400 messages. This number has the total.\n"
  "\n"
  "*Overflow events*\n"
  ": When the overflow event count is non-zero, captured trace data is incomplete.\n"
  " The cause is that trace data arrives more quickly than can be processed.\n"
  "\n"
  ": If an overflow occurs, the Trace Viewer automatically reduces the number of\n"
  " messages that it displays while running. This limit is 400 messages by default,\n"
  " but may be reduced down to 50 (in gradual steps) if overflow events are\n"
  " detected.\n"
  "\n"
  "*Packet errors*\n"
  ": When the number of packet errors is non-zero, the configuration of the SWO\n"
  " protocol is likely incorrect (Data size & CPU clock), or the Bit rate is too\n"
  " high.\n"
  "\n"
  "---\n"
  "See also:\n"
  " [[Configuration]]\n"
  "\n"
  "# Filters\n"
  "\n"
  "You can filter the trace messages on keywords. Trace messages that are filtered\n"
  "out, are still saved in memory, but not displayed. When the filter is disabled\n"
  "(or deleted), the messages re-appear.\n"
  "\n"
  "Text matching is case-sensitive.\n"
  "\n"
  "If the filter text starts with a tilde ('~'), it is an inverted filter: a trace\n"
  "message passes the filter if it does not contain the text that follows the tilde.\n"
  "\n"
  "A trace message passes all filters (and is displayed) if:\n"
  "* it matches any of the standard filters,\n"
  "* and matches none of the inverted filters\n"
  "\n"
  "# Channels\n"
  "\n"
  "SWO tracing allows for 32-channels. Most implementations use only channel 0, but\n"
  "the advantage of using multiple channels is that each channel can be enabled and\n"
  "disabled. When a channel is disabled, and provided that the Trace Viewer configures\n"
  "the target (see the Configuration), it is disabled in the target microcontroller. As a result,\n"
  "the traces on that channel are not transmitted, and thus have negligent overhead\n"
  "on the target's execution.\n"
  "\n"
  "When a TSDL file is configured, the channel names are copied from the stream names\n"
  "in the TSDL file. You can set a name (and a colour) for a channel by right-clicking\n"
  "on the channel name/number. This opens a pop-up with selection boxes for the RGB\n"
  "colour values and a field for the name.\n"
  "\n"
  "---\n"
  "See also:\n"
  " [[Configuration]]\n"
  "\n"
  "# Keyboard Interface\n"
  "\n"
  "| F1 | Help |\n"
  "| F5 | Start / Stop / Resume the capture |\n"
  "| Ctrl+F | Search |\n"
  "| Ctrl+S | Save traces (CSV format) |\n"
  "\n"
  "# The Common Trace Format\n"
  "\n"
  "The Common Trace Format is a compact binary format for trace messages. Using CTF\n"
  "in your firmware takes two parts: a C/C++ file with functions that transmit\n"
  "binary encoded trace messages, and a matching metadata file in the \"Trace Stream\n"
  "Description Language\" (TSDL). The metadata file (\"TSDL file\") maps the binary\n"
  "data back into human-readable form.\n"
  "\n"
  "The Trace Viewer comes with a tool to generate the C/C++ file from the metadata\n"
  "file. The companion book \"Embedded Debugging with the Black Magic Probe\" has a\n"
  "chapter on CTF, the syntax of TSDL and how to use the tools.\n"
  "\n"
  "---\n"
  "See also:\n"
  " [[Configuration]]\n"
  " [[About BlackMagic Trace Viewer]]\n"
  "\n"
  "# About BlackMagic Trace Viewer\n"
  "\n"
  "The BlackMagic Trace Viewer is a companion tool of the book \"Embedded Debugging\n"
  "with the Black Magic Probe.\" The book has a chapter on tracing, with several examples\n"
  "and code snippets to do it efficiently. It is available as a free PDF file, and\n"
  "as a printed book.\n"
  "\n"
  "The BlackMagic Trace Viewer requires a debug probe that is compatible with the\n"
  "Black Magic Probe. It is a self-contained utility; it does not require GDB.\n"
  "\n"
  "---\n"
  "Version 1.2.6986 \\\n"
  "Copyright 2019-2023 CompuPhase \\\n"
  "Licensed under the Apache License version 2.0\n"
  "\n"
};
