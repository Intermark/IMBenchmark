# IMBenchmark

## About

`IMBenchmark` is a lightweight helper class that benchmarks a block of code and gives you an average time of how long that block of code takes to execute. It's very important to note that premature optimization can be a fool's game, and may lead you down a lot of paths that don't provide fruitful results. It's important to think carefully about why things are going slow and ways to test your hypotheses. IMBenchmark should be just one of many measurement tools you use (Instruments is the bomb) to profile your app.

`IMBenchmark` should not be used in production or release versions. This is for testing and profiling only. Leaving this code in release versions of your app could slow it down waaaaay more than what you were testing would.

## Installing

`pod 'IMBenchmark'`

## Using

```objc
[IMBenchmark benchmark:^{
        NSArray *a = [NSArray new];
    } completion:^(uint64_t nanoseconds) {
        NSLog(@"%llu ns", nanoseconds);
    }];
```

The first block is what you want to benchmark. The second block returns the average run time of that block in nanoseconds.

## License

IMBenchmark is licensed under the standard MIT License and can be found [here](License.md).