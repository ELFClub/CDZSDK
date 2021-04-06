
Pod::Spec.new do |spec|

  spec.name         = "CEYSDK"
  spec.version      = "6.3.6.2"
  spec.summary      = "use CEYSDK."

  spec.description  = <<-DESC
                      a easy way to use ENGSDK
                   DESC

  spec.license      = { :type => "MIT", :file => "LICENSE" }

  spec.author       = { "bruce" => "1064124945@qq.com" }

  spec.platform     = :ios, "9.0"



  spec.homepage     = "https://github.com/ELFClub/CDZSDK.git"
  spec.source       = { :git => "https://github.com/ELFClub/CDZSDK.git", :tag => spec.version.to_s }


  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #


  spec.frameworks   = 'UIKit', 'Security', 'AdSupport'
  spec.libraries    = 'c++'

  spec.vendored_frameworks =  ['CEYSDK/Frameworks/CEYSDK.framework','CEYSDK/Frameworks/TapDB_iOS.framework']
  spec.resource = 'CEYSDK/Frameworks/CEYSDK.framework/CEYBundle.bundle'

  valid_archs     = ['armv7', 'x86_64', 'arm64']
  spec.xcconfig   = {
    'VALID_ARCHS' =>  valid_archs.join(' '),
  }
  
  spec.dependency 'FBSDKCoreKit','~> 9.1.0'
  spec.dependency 'FBSDKLoginKit','~> 9.1.0'

end
