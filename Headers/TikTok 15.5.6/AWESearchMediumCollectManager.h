//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AWEHttpTask;

@interface AWESearchMediumCollectManager : NSObject
{
    _Bool _isRequesting;
    id <AWEHttpTask> _currentTask;
}

@property(retain, nonatomic) id <AWEHttpTask> currentTask; // @synthesize currentTask=_currentTask;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
- (void).cxx_destruct;
- (void)refreshMediumCollectWithID:(id)arg1 withStatus:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
