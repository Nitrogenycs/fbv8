/**********************************************************\

  Auto-generated fbv8testpluginAPI.h

\**********************************************************/

#include <string>
#include <sstream>
#include <boost/weak_ptr.hpp>
#include "JSAPIAuto.h"
#include "BrowserHost.h"
#include "fbv8testplugin.h"

#ifndef H_fbv8testpluginAPI
#define H_fbv8testpluginAPI

class fbv8testpluginAPI : public FB::JSAPIAuto
{
public:
    fbv8testpluginAPI(const fbv8testpluginPtr& plugin, const FB::BrowserHostPtr& host);
    virtual ~fbv8testpluginAPI();

    fbv8testpluginPtr getPlugin();

    // Read/Write property ${PROPERTY.ident}
    std::string get_testString();
    void set_testString(const std::string& val);

    // Read-only property ${PROPERTY.ident}
    std::string get_version();

    // Method echo
    FB::variant echo(const FB::variant& msg);
    
    // Method test-event
    void testEvent(const FB::variant& s);

private:
    fbv8testpluginWeakPtr m_plugin;
    FB::BrowserHostPtr m_host;

    std::string m_testString;
};

#endif // H_fbv8testpluginAPI

