//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEPriorityQueueElementProtocol-Protocol.h"

@class AWEPriorityQueue, NSString, UIView;
@protocol AWEProfileBubbleProtocol;

@interface AWEProfileBubbleHomePageQueueElement : NSObject <AWEPriorityQueueElementProtocol>
{
    UIView<AWEProfileBubbleProtocol> *_view;
    unsigned long long _type;
    unsigned long long _queueType;
    long long _priority;
}

@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long queueType; // @synthesize queueType=_queueType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIView<AWEProfileBubbleProtocol> *view; // @synthesize view=_view;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak AWEPriorityQueue *queue;
@property(readonly) Class superclass;

@end
