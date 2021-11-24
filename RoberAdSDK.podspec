#
# Be sure to run `pod lib lint RoberAdSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'RoberAdSDK'
  s.version          = '1.0.0'
  s.summary          = 'A short description of RoberAdSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/RoberLucky/RoberAdSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'RoberLucky' => 'lyx411326@163.com' }
  s.source           = { :git => 'https://github.com/RoberLucky/RoberAdSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'
  s.static_framework = true

  s.vendored_frameworks = 'RoberAdSDK/Classes/AdSDKMavlFrameWork.framework'
    s.resource_bundles = {
      'RoberAdSDK' => ['RoberAdSDK/Assets/*']
    }

  s.frameworks = 'UIKit'
   s.dependency 'AmazonPublisherServicesMoPubAdapter', '1.3.0'
   s.dependency 'AmazonPublisherServicesSDK', '3.4.6'
   s.dependency 'Google-Mobile-Ads-SDK', '8.5.0'
   s.dependency 'mopub-ios-sdk', '5.17.0'
   s.dependency 'PureLayout'
   s.dependency 'MoPub-FacebookAudienceNetwork-Adapters','6.5.0.0'
   s.dependency 'MoPub-Pangle-Adapters','3.7.0.8.0'
  
  # s.resource_bundles = {
  #   'RoberAdSDK' => ['RoberAdSDK/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
