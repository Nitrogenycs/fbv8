#/**********************************************************\ 
#
# Auto-Generated Plugin Configuration file
# for fbv8 test plugin
#
#\**********************************************************/

set(PLUGIN_NAME "fbv8testplugin")
set(PLUGIN_PREFIX "FTP")
set(COMPANY_NAME "None")

# ActiveX constants:
set(FBTYPELIB_NAME fbv8testpluginLib)
set(FBTYPELIB_DESC "fbv8testplugin 1.0 Type Library")
set(IFBControl_DESC "fbv8testplugin Control Interface")
set(FBControl_DESC "fbv8testplugin Control Class")
set(IFBComJavascriptObject_DESC "fbv8testplugin IComJavascriptObject Interface")
set(FBComJavascriptObject_DESC "fbv8testplugin ComJavascriptObject Class")
set(IFBComEventSource_DESC "fbv8testplugin IFBComEventSource Interface")
set(AXVERSION_NUM "1")

# NOTE: THESE GUIDS *MUST* BE UNIQUE TO YOUR PLUGIN/ACTIVEX CONTROL!  YES, ALL OF THEM!
set(FBTYPELIB_GUID 8cbbbdaa-d26d-5a2d-a336-ff1d9d3af0fa)
set(IFBControl_GUID c169f152-fc24-50f7-9c07-01ec866e9512)
set(FBControl_GUID 8264638b-df50-50db-91a0-18a727e8df79)
set(IFBComJavascriptObject_GUID 42905a2a-b39b-5d7a-8fd3-b74aff2306ad)
set(FBComJavascriptObject_GUID e2eef835-e99a-5a02-afac-2fad58845bed)
set(IFBComEventSource_GUID 37d28979-0dd0-5c86-82e5-a441fd313d7e)

# these are the pieces that are relevant to using it from Javascript
set(ACTIVEX_PROGID "None.fbv8testplugin")
set(MOZILLA_PLUGINID "None.com/fbv8testplugin")

# strings
set(FBSTRING_CompanyName "None")
set(FBSTRING_FileDescription "Tests the firebreath-v8 bridge")
set(FBSTRING_PLUGIN_VERSION "1.0.0")
set(FBSTRING_LegalCopyright "Copyright 2011 None")
set(FBSTRING_PluginFileName "np${PLUGIN_NAME}.dll")
set(FBSTRING_ProductName "fbv8 test plugin")
set(FBSTRING_FileExtents "")
set(FBSTRING_PluginName "fbv8 test plugin")
set(FBSTRING_MIMEType "application/x-fbv8testplugin")

# Uncomment this next line if you're not planning on your plugin doing
# any drawing:

#set (FB_GUI_DISABLED 1)

# Mac plugin settings. If your plugin does not draw, set these all to 0
set(FBMAC_USE_QUICKDRAW 0)
set(FBMAC_USE_CARBON 1)
set(FBMAC_USE_COCOA 1)
set(FBMAC_USE_COREGRAPHICS 1)
set(FBMAC_USE_COREANIMATION 0)

# If you want to register per-machine on Windows, uncomment this line
#set (FB_ATLREG_MACHINEWIDE 1)

# Add this library so we can test it
add_firebreath_library(fbv8)