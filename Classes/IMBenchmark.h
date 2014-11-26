//  The MIT License (MIT)
//
//  Copyright (c) 2014 Intermark Interactive
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
//  the Software, and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
//  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
//  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <Foundation/Foundation.h>

@interface IMBenchmark : NSObject

/**
 *  Sets the iteration count for how many times the block of code will execute. Default is 10,000. You want to set this number higher so you don't inaccurately measure statistical anomalies.
 *
 *  @param count NSInteger
 */
+ (void)setIterationCount:(NSInteger)count;

/**
 *  Runs the passed in block for a certain number of iterations (default is 10,000, though you can set it to whatever) then returns the average run time in nanoseconds back in the completion block. This operation is syncronous and runs on the main thread. To learn more about benchmarking using this function, refer to http://nshipster.com/benchmarking/
 *
 *  @param benchmarkBlock
 *  @param completion
 */
+ (void)benchmark:(void (^)(void))benchmarkBlock completion:(void (^)(uint64_t nanoseconds))completion;

@end
