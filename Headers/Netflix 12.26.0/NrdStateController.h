//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NrdStateController : NSObject
{
    _Bool _shouldStartWithoutLegacyNrd;
    long long _nrdState;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool shouldStartWithoutLegacyNrd; // @synthesize shouldStartWithoutLegacyNrd=_shouldStartWithoutLegacyNrd;
@property long long nrdState; // @synthesize nrdState=_nrdState;
- (id)willStopNrd;
- (id)willStartNrd;
- (id)stopIosNrdApplication;
- (id)startIosNrdApplicationWithConfiguration:(id)arg1;
- (id)didStartNrd;
- (id)init;

@end

