Pod::Spec.new do |spec|
  spec.name         = 'ADPADX'
  spec.version      = '1.0.0'
  spec.summary      = 'AdsPlus self-owned ADX iOS SDK.'
  spec.description  = 'ADPADX provides AdsPlus self-owned splash ad loading, display, tracking and logging.'
  spec.homepage     = 'https://github.com/adsplusteam/adsplus-ios-adx'
  spec.license      = { :type => 'Proprietary', :text => 'Copyright AdsPlus. All rights reserved.' }
  spec.author       = { 'AdsPlus' => 'adsplus@gmail.com' }
  spec.source       = { :git => 'https://github.com/adsplusteam/adsplus-ios-adx.git', :tag => spec.version.to_s }
  spec.platform     = :ios, '13.0'
  spec.static_framework = true
  spec.vendored_frameworks = 'ADPADX/ADPADX.xcframework'
  spec.resource     = 'ADPADX/ADPADX.bundle'
  spec.dependency 'ADPFoundation', '1.0.0'
  spec.dependency 'AliyunLogProducer', '3.1.16'
  spec.frameworks = 'UIKit', 'Foundation', 'Security', 'ImageIO', 'MobileCoreServices', 'CoreGraphics', 'QuartzCore'
  spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'x86_64' }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'x86_64' }
end
