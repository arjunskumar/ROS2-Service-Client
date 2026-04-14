#include <chrono>
#include <cstdlib>
#include <memory>

// TODO: Include necessary headers for rclcpp and entri_ros2_srvcli_cpp/srv/robot_task.hpp

using namespace std::chrono_literals;

int main(int argc, char **argv)
{
  // TODO: Initialize rclcpp

  // TODO: Create a node named "task_trigger_client"
  // std::shared_ptr<rclcpp::Node> node = ...

  // TODO: Create a client hooked to the "allocate_robot_task" service
  // rclcpp::Client<entri_ros2_srvcli_cpp::srv::RobotTask>::SharedPtr client = ...

  // TODO: Create a RobotTask request object
  // auto request = std::make_shared<...>();
  
  // TODO: Set request fields: task_id = 42, task_name = "Move_To_A"
  // request->task_id = 42;
  // request->task_name = "Move_To_A";

  // TODO: Wait for the service to be available (use a loop with client->wait_for_service(1s))
  // while (!client->wait_for_service(1s)) {
  //   if (!rclcpp::ok()) { ... }
  //   RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  // }

  // TODO: Send the exact asynchronous request
  // auto result = client->async_send_request(request);

  // TODO: Wait for the result. If successful, print the response.
  // if (rclcpp::spin_until_future_complete(node, result) == rclcpp::FutureReturnCode::SUCCESS)
  // {
  //   RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Task allocation status: %s. Response: %s",
  //               result.get()->success ? "True" : "False", result.get()->task_response.c_str());
  // } else {
  //   RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service allocate_robot_task");
  // }

  // TODO: Shutdown rclcpp
  return 0;
}
