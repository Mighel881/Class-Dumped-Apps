//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFSScribe;

@interface TFNTwitterScribeLifecycleObserver : NSObject
{
    TFSScribe *_scribeService;
}

@property(retain, nonatomic) TFSScribe *scribeService; // @synthesize scribeService=_scribeService;
- (void).cxx_destruct;
- (void)_didRemoveAccountNotification:(id)arg1;
- (id)init;
- (id)initWithScribeService:(id)arg1;

@end
