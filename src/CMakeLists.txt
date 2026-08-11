set(TargetName "TemplateProject")

fw_add_binary(${TargetName} Windowed)

fw_link_libraries(${TargetName} PUBLIC 
  Futurewalker::Config
  Futurewalker::Application
  Futurewalker::Resource
  Futurewalker::Component::Lamp
  Futurewalker::Main
)

fw_add_resources(${TargetName})

fw_bundle_resources(${TargetName})
