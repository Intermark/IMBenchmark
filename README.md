![banner](/Resources/banner.png)

## About

`IMBenchmark` is a lightweight helper class that benchmarks a block of code and gives you an average time of how long that block of code takes to execute. It's very important to note that premature optimization can be a fool's game, and may lead you down a lot of paths that don't provide fruitful results. It's important to think carefully about why things are going slow and ways to test your hypotheses. IMBenchmark should be just one of many measurement tools you use (Instruments is the bomb) to profile your app.

`IMBenchmark` should not be used in production or release versions. This is for testing and profiling only. Leaving this code in release versions of your app could slow it down waaaaay more than what you were testing would.

To read more about benchmarking in regards to iOS apps, I recommend this really good post by [mattt](https://github.com/mattt) on NSHipster: [http://nshipster.com/benchmarking/](http://nshipster.com/benchmarking/).

## Installing

`pod 'IMBenchmark'`

or

* Add `IMBenchmark.{h,m}` to your project
* `#import "IMBenchmark.h"` in the class you want to benchmark

## Using

```objc
[IMBenchmark benchmark:^{
    // Code to benchmark here
} completion:^(uint64_t nanoseconds) {
    NSLog(@"%llu ns", nanoseconds);
}];
```

The first block is what you want to benchmark. The second block returns the average run time of the first block in nanoseconds. This method runs the block 10,000 times and averages the results to prevent anomalies in the benchmarking process. To change the number of iterations during the benchmarking process, call this method before running the above code:

`[IMBenchmark setIterationCount:10001]`

## But why no Swift?!?

Right now this code is using a semi-private function of the libdispatch library called `dispatch_benchmark()` which unfortunately needs a declaration to use. I couldn't get a Swift project or playground to recognize this function, but I may not know enough about Swift and so I could have been doing that wrong. In the meantime, I recommend using a bridging header and calling the ObjC version from Swift.

## License

IMBenchmark is licensed under the standard MIT License and can be found [here](License.md).
