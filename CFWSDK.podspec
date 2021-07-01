
Pod::Spec.new do |spec|

  spec.name         = "CFWSDK"
  spec.version      = "6.3.7.1"
  spec.summary      = "use CEYSDK."

  spec.description  = <<-DESC
                      a easy way to use CFWSDK
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

  spec.vendored_frameworks =  ['CFWSDK/Frameworks/CFWSDK.framework','CFWSDK/Frameworks/TapDB_iOS.framework']
  spec.resource = 'CFWSDK/Frameworks/CFWSDK.framework/CFWBundle.bundle'

  valid_archs     = ['armv7', 'x86_64', 'arm64']
  spec.xcconfig   = {
    'VALID_ARCHS' =>  valid_archs.join(' '),
  }
  
  spec.dependency 'FBSDKCoreKit','~> 9.1.0'
  spec.dependency 'FBSDKLoginKit','~> 9.1.0'

end
