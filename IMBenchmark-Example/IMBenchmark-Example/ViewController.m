//
//  ViewController.m
//  IMBenchmark-Example
//
//  Created by Ben Gordon on 11/26/14.
//  Copyright (c) 2014 IM. All rights reserved.
//

#import "ViewController.h"
#import "IMBenchmark.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    // Set Up Benchmarking (optional, default is 10,000)
    [IMBenchmark setIterationCount:10001];
    
    // Benchmark
    [IMBenchmark benchmark:^{
        [NSArray new];
    } completion:^(uint64_t nanoseconds) {
        NSLog(@"%llu ns", nanoseconds);
    }];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
