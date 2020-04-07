//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMDCrashModel.h"

@class HMDCrashRegisters, NSArray, NSString;

@interface HMDCrashThreadInfo : HMDCrashModel
{
    _Bool _crashed;
    NSArray *_stackTrace;
    HMDCrashRegisters *_registers;
    NSArray *_frames;
    NSString *_pthreadName;
    NSString *_queueName;
    NSString *_threadName;
}

@property(copy, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(copy, nonatomic) NSString *queueName; // @synthesize queueName=_queueName;
@property(copy, nonatomic) NSString *pthreadName; // @synthesize pthreadName=_pthreadName;
@property(copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(retain, nonatomic) HMDCrashRegisters *registers; // @synthesize registers=_registers;
@property(copy, nonatomic) NSArray *stackTrace; // @synthesize stackTrace=_stackTrace;
@property(nonatomic) _Bool crashed; // @synthesize crashed=_crashed;
- (void).cxx_destruct;
- (void)generateFrames:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end
