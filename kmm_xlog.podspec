Pod::Spec.new do |spec|
    spec.name                     = 'kmm_xlog'
    spec.version                  = '1.0.2'
    spec.homepage                 = 'Link to the Shared Module homepage'
    spec.source                   = { :http=> ''}
    spec.authors                  = ''
    spec.license                  = ''
    spec.summary                  = 'Some description for the Shared Module'
    spec.vendored_frameworks      = 'kmm_xlog.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target = '14.1'

    spec.libraries = 'z'
    spec.framework = 'SystemConfiguration'
end