Pod::Spec.new do |s|
  s.name         = 'IMBenchmark'
  s.version      = '0.0.1'
  s.summary      = 'Measure accurately. Measure cleanly.'
  s.author = {
    'Ben Gordon' => 'benjamin.gordon@intermarkgroup.com'
  }
  s.source = {
    :git => 'https://github.com/Intermark/IMBenchmark.git',
    :tag => s.version
  }
  s.homepage    = 'https://github.com/Intermark'
  s.license     = 'License'
  s.source_files = 'Classes/*.{h,m}'
  s.platform = :ios
  s.requires_arc = true
end