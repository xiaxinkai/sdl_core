#ifndef SRC_COMPONENTS_APPLICATION_MANAGER_RPC_PLUGINS_RC_RPC_PLUGIN_INCLUDE_COMMANDS_HMI_RC_BUTTON_PRESS_RESPONSE_H
#define SRC_COMPONENTS_APPLICATION_MANAGER_RPC_PLUGINS_RC_RPC_PLUGIN_INCLUDE_COMMANDS_HMI_RC_BUTTON_PRESS_RESPONSE_H

#include "application_manager/commands/response_from_hmi.h"
#include "utils/macro.h"

namespace rc_rpc_plugin {
namespace app_mngr = application_manager;

namespace commands {
class RCButtonPressResponse
    : public application_manager::commands::ResponseFromHMI {
 public:
  RCButtonPressResponse(
          const app_mngr::commands::MessageSharedPtr& message,
          app_mngr::ApplicationManager& application_manager);

  void Run() OVERRIDE;

  virtual ~RCButtonPressResponse();
};
}  // namespace commands
}  // namespace rc_rpc_plugin

#endif  // SRC_COMPONENTS_APPLICATION_MANAGER_RPC_PLUGINS_RC_RPC_PLUGIN_INCLUDE_COMMANDS_HMI_RC_BUTTON_PRESS_RESPONSE_H