/**********************************************************\

  Auto-generated fbv8testpluginAPI.cpp

\**********************************************************/

#include "JSObject.h"
#include "variant_list.h"
#include "DOM/Document.h"

#include "fbv8testpluginAPI.h"

///////////////////////////////////////////////////////////////////////////////
/// @fn fbv8testpluginAPI::fbv8testpluginAPI(const fbv8testpluginPtr& plugin, const FB::BrowserHostPtr host)
///
/// @brief  Constructor for your JSAPI object.  You should register your methods, properties, and events
///         that should be accessible to Javascript from here.
///
/// @see FB::JSAPIAuto::registerMethod
/// @see FB::JSAPIAuto::registerProperty
/// @see FB::JSAPIAuto::registerEvent
///////////////////////////////////////////////////////////////////////////////
fbv8testpluginAPI::fbv8testpluginAPI(const fbv8testpluginPtr& plugin, const FB::BrowserHostPtr& host) : m_plugin(plugin), m_host(host)
{
    registerMethod("echo",      make_method(this, &fbv8testpluginAPI::echo));
    registerMethod("testEvent", make_method(this, &fbv8testpluginAPI::testEvent));

    // Read-write property
    registerProperty("testString",
                     make_property(this,
                        &fbv8testpluginAPI::get_testString,
                        &fbv8testpluginAPI::set_testString));

    // Read-only property
    registerProperty("version",
                     make_property(this,
                        &fbv8testpluginAPI::get_version));
    
    
    registerEvent("onfired");    
}

///////////////////////////////////////////////////////////////////////////////
/// @fn fbv8testpluginAPI::~fbv8testpluginAPI()
///
/// @brief  Destructor.  Remember that this object will not be released until
///         the browser is done with it; this will almost definitely be after
///         the plugin is released.
///////////////////////////////////////////////////////////////////////////////
fbv8testpluginAPI::~fbv8testpluginAPI()
{
}

///////////////////////////////////////////////////////////////////////////////
/// @fn fbv8testpluginPtr fbv8testpluginAPI::getPlugin()
///
/// @brief  Gets a reference to the plugin that was passed in when the object
///         was created.  If the plugin has already been released then this
///         will throw a FB::script_error that will be translated into a
///         javascript exception in the page.
///////////////////////////////////////////////////////////////////////////////
fbv8testpluginPtr fbv8testpluginAPI::getPlugin()
{
    fbv8testpluginPtr plugin(m_plugin.lock());
    if (!plugin) {
        throw FB::script_error("The plugin is invalid");
    }
    return plugin;
}



// Read/Write property testString
std::string fbv8testpluginAPI::get_testString()
{
    return m_testString;
}
void fbv8testpluginAPI::set_testString(const std::string& val)
{
    m_testString = val;
}

// Read-only property version
std::string fbv8testpluginAPI::get_version()
{
    return "CURRENT_VERSION";
}

// Method echo
FB::variant fbv8testpluginAPI::echo(const FB::variant& msg)
{
    return msg;
}

void fbv8testpluginAPI::testEvent(const FB::variant& var)
{
    FireEvent("onfired", FB::variant_list_of(var)(true)(1));
}

