#include <memory>
// TODO: Include necessary headers for rclcpp and entri_ros2_srvcli_cpp/srv/robot_task.hpp

void allocate_task(const std::shared_ptr<entri_ros2_srvcli_cpp::srv::RobotTask::Request> request,
                   std::shared_ptr<entri_ros2_srvcli_cpp::srv::RobotTask::Response> response)
{
  // TODO: Implement the task allocation logic
  // Requirement:
  // 1. If request->task_id is an even number, set response->success to true,
  //    and response->task_response to "Task <task_name> allocated successfully."
  // 2. If it's odd, set response->success to false, and task_response to "Task <task_name> rejected."

  // Example:
  // if (request->task_id % 2 == 0) { ... } else { ... }

  // TODO: Print the received request using RCLCPP_INFO
  // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\ntask_id: %d\ntask_name: %s", request->task_id, request->task_name.c_str());
}

int main(int argc, char **argv)
{
  // TODO: Initialize rclcpp

  // TODO: Create a node named "task_allocator_service"
  // std::shared_ptr<rclcpp::Node> node = ...

  // TODO: Create a service named "allocate_robot_task" using the allocate_task callback function
  // rclcpp::Service<entri_ros2_srvcli_cpp::srv::RobotTask>::SharedPtr service = ...

  // TODO: Spin the node
  
  // TODO: Shutdown rclcpp
  return 0;
}
