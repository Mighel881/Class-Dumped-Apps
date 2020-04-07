//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;

@interface BDLynxChannelsRegister : NSObject
{
    NSMutableArray *_registChannels;
    NSMutableArray *_registHighPriorityChannels;
    NSMutableArray *_registDefaultPriorityChannels;
    NSLock *_registLock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSLock *registLock; // @synthesize registLock=_registLock;
@property(retain, nonatomic) NSMutableArray *registDefaultPriorityChannels; // @synthesize registDefaultPriorityChannels=_registDefaultPriorityChannels;
@property(retain, nonatomic) NSMutableArray *registHighPriorityChannels; // @synthesize registHighPriorityChannels=_registHighPriorityChannels;
@property(retain, nonatomic) NSMutableArray *registChannels; // @synthesize registChannels=_registChannels;
- (void).cxx_destruct;
- (id)registedDefaultPriorityChannels;
- (id)registedHighPriorityChannels;
- (id)registedChannels;
- (void)registChannels:(id)arg1;
- (void)registChannel:(id)arg1;
- (id)init;

@end
