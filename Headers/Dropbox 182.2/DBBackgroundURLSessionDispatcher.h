//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBObserverBlockMap, NSMutableDictionary;

@interface DBBackgroundURLSessionDispatcher : NSObject
{
    DBObserverBlockMap *_observers;
    NSMutableDictionary *_completionHandlers;
}

- (void).cxx_destruct;
- (id)registerEventsObserver:(CDUnknownBlockType)arg1;
- (void)didFinishBackgroundEventsForSessionIdentifier:(id)arg1;
- (void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

