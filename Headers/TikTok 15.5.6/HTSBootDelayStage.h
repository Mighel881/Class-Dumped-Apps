//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEBootConfigQueue, NSString;

@interface HTSBootDelayStage : NSObject
{
    AWEBootConfigQueue *_mainQueue;
    AWEBootConfigQueue *_idleQueue;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) AWEBootConfigQueue *idleQueue; // @synthesize idleQueue=_idleQueue;
@property(retain, nonatomic) AWEBootConfigQueue *mainQueue; // @synthesize mainQueue=_mainQueue;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithName:(id)arg1;

@end
