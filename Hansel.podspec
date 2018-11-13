Pod::Spec.new do |s|
  s.name         = "Hansel"
  s.version      = "7.0.2.100"
  s.platforms    = { :ios => "8.0"}
  s.summary      = "Making applications hyper agile"
  s.description  = "Hanselio framework powers developers to rapidly experiment, iterate and stabilize ios apps"
  s.homepage     = "https://hansel.io/"
  s.license      = {"type" => "Commercial", "text" => "See http://www.hansel.io/"}
  s.authors      = {"hansel.io" => "hi@hansel.io"}
  s.documentation_url = "http://hansel.io/"
  s.user_target_xcconfig = { 
    'FRAMEWORK_SEARCH_PATHS' => '$(inherited)',
    'USER_HEADER_SEARCH_PATHS' => '$(inherited)',
    'OTHER_LDFLAGS' => '-ObjC',
    'HANSEL_ENABLED' => 'YES',
    'GCC_PREPROCESSOR_DEFINITIONS' => 'HANSEL_ENABLED=${HANSEL_ENABLED}'
  }

  ######### pod using local path #########
  # s.source       = { :path => "Hansel/source"}
  # s.source_files = 'Hansel/source/**/*.{h,m,c,cpp,mm}'

  ######### pod using remote files #########
  s.source       = { :git => "https://bitbucket.org/hanselio/hansel-ios-framework-private/src/master/", :tag => s.version}
  s.ios.vendored_frameworks = 'Hansel/framework/Hansel.framework'

  s.resource_bundles = {'iohanseliOS' => ["Hansel/publickey.der","Hansel/Info.plist"]}
  

  s.preserve_paths = "Hansel/**/*"
  s.libraries          = 'icucore', 'sqlite3'
  s.ios.frameworks     = 'CFNetwork', 'Security'
end
