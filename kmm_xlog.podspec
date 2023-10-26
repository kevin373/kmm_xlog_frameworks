Pod::Spec.new do |spec|
    spec.name                     = 'kmm_xlog'
    spec.version                  = '1.0.0'
    spec.homepage                 = 'Link to the Shared Module homepage'
    spec.source                   = { :git => "https://github.com/kevin373/kmm-xlog.git", :tag => "#{spec.version}" }
    spec.authors                  = 'kevin373'
    spec.license                  = ''
    spec.summary                  = 'Some description for the Shared Module'
    spec.vendored_frameworks      = 'kmm_xlog.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target = '14.1'
                
                
                
                
end